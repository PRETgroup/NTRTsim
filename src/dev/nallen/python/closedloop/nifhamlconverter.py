import numpy as np
import ruamel.yaml

import nif
import sys

class NifHamlConverter:

    __LIF_NEURON_DEFINITION = {
        "inputs": {
            "in": "REAL",
        },
        "outputs": {
            "v": "REAL",
            "spike": "BOOLEAN",
        },
        "parameters": {
            "tau": {
                "type": "REAL",
                "default": 1,
            },
            "t_ref": {
                "type": "REAL",
                "default": 1,
            },
            "threshold": {
                "type": "REAL",
                "default": 1,
            },
            "reset": {
                "type": "REAL",
                "default": 0,
            }
        },
        "locations": {
            "integrate": {
                "invariant": "v < threshold && v >= reset",
                "flow": {
                    "v": "(1 / tau) * (in - v)",
                },
                "transitions": [
                    {
                        "to": "spike",
                        "guard": "v == threshold",
                        "update": {
                            "v": "reset",
                            "spike": True,
                            "t": 0,
                        }
                    },
                    {
                        "to": "limit",
                        "guard": "v == reset && in < reset",
                        "update": {
                            "v": "reset",
                        }
                    }
                ]
            },
            "limit": {
                "invariant": "in < reset",
                "update": {
                    "v": "reset"
                },
                "transitions": [
                    {
                        "to": "integrate",
                        "guard": "in >= reset",
                        "update": {
                            "v": "reset"
                        }
                    }
                ]
            },
            "spike": {
                "invariant": "t == 0",
                "flow": {
                    "t": 1
                },
                "transitions": [
                    {
                        "to": "integrate",
                        "guard": "t == t_ref",
                        "update": {
                            "spike": False
                        }
                    },
                    {
                        "to": "refractory",
                        "guard": "t < t_ref",
                        "update": {
                            "spike": False
                        }
                    }
                ]
            },
            "refractory": {
                "invariant": "t < t_ref",
                "flow": {
                    "t": 1
                },
                "transitions": [
                    {
                        "to": "integrate",
                        "guard": "t == t_ref"
                    }
                ]
                
            }
        },
        "initialisation": {
            "state": "integrate",
            "valuations": {
                "v": "reset",
                "spike": False,
                "t": 0
            }
        }
    }

    __LOWPASS_SYNAPSE_DEFINITION = {
        "inputs": {
            "in": "REAL",
        },
        "outputs": {
            "out": "REAL",
        },
        "parameters": {
            "tau": {
                "type": "REAL",
                "default": 0.05,
            }
        },
        "locations": {
            "l": {
                "update": {
                    "out": "alpha * in + (1 - alpha) * out",
                }
            }
        },
        "initialisation": {
            "state": "l",
            "valuations": {
                "out": 0,
                "alpha": "STEP_SIZE / (tau + STEP_SIZE)"
            }
        }
    }

    class Include(ruamel.yaml.YAMLObject):
        yaml_constructor = ruamel.yaml.RoundTripConstructor
        yaml_representer = ruamel.yaml.RoundTripRepresenter
        yaml_tag = '!include'

        def __init__(self, file):
            self.file = file

        @classmethod
        def from_yaml(cls, loader, node):
            return cls(loader.construct_scalar(node))

        @classmethod
        def to_yaml(cls, dumper, data):
            if isinstance(data.file, ruamel.yaml.scalarstring.ScalarString):
                style = data.file.style
            else:
                style = None
            return dumper.represent_scalar(cls.yaml_tag, data.file, style=style)
    
    def __init__(self, nif_model):
        if not isinstance(nif_model, nif.Nif):
            raise ValueError("Invalid NIF model provided")

        self.nif_model = nif_model
        self.label_map = {}
        self.haml = {}

    def create(self):
        self.label_map = {}
        signal_map = {}

        self.haml = {
            "name": self.get_label(self.nif_model),
            "system": {
                "inputs": {},
                "outputs": {},
                "definitions": {
                },
                "instances": {
                },
                "mappings": {},
                "functions": {
                    "check_spike": {
                        "inputs": {
                            "spike": "BOOLEAN",
                            "weight": "REAL"
                        },
                        "logic": ruamel.yaml.scalarstring.PreservedScalarString("if(spike) {\n  return weight\n}\nreturn 0")
                    }
                }
            },
            "codegenConfig": {
                "execution": {
                    "stepSize": self.nif_model.step_size/10,
                    "simulationTime": 10
                },
                "logging": {
                    "enable": True,
                    "interval": self.nif_model.step_size,
                    "file": "out.csv"
                },
                "requireOneIntraTransitionPerTick": True
            }
        }

        for item in self.nif_model.items:
            if isinstance(item, nif.Nif.NifItem):
                signal_map[item] = {"inputs": {}, "outputs": {}}

                if isinstance(item, nif.Nif.Ensemble):
                    signal_map[item]["inputs"] = {"neurons": []}
                    signal_map[item]["outputs"] = {"neurons": []}

                    for i in range(item.neurons):
                        label = self.get_label(item, i)

                        if isinstance(item.neuron_type, nif.Nif.LifNeuron):
                            if not "LifNeuron" in self.haml["system"]["definitions"]:
                                self.haml["system"]["definitions"]["LifNeuron"] = NifHamlConverter.__LIF_NEURON_DEFINITION

                            self.haml["system"]["instances"][label] = {
                                "type": "LifNeuron",
                                "parameters": {
                                    "tau": item.neuron_type.tau,
                                    "t_ref": item.neuron_type.t_ref,
                                    "reset": item.neuron_type.reset
                                }
                            }

                            signal_map[item]["inputs"]["neurons"].append(label + ".in")
                            signal_map[item]["outputs"]["neurons"].append("check_spike(" + label + ".spike, " + str(item.radius) + " / STEP_SIZE)")
                            
                        else:
                            raise ValueError("Unhandled neuron type (" + item.neuron_type.__class__.__name__ + ")")

                        self.haml["system"]["mappings"][signal_map[item]["inputs"]["neurons"][i]] = str(item.bias[i])
                
                elif isinstance(item, nif.Nif.Node):
                    signal_map[item]["inputs"] = {"value": []}

                    if item.get_size_in() == 1:
                        self.haml["system"]["outputs"][self.get_label(item) + "_out"] = "REAL"
                        self.haml["system"]["mappings"][self.get_label(item) + "_out"] = str(0)
                        signal_map[item]["inputs"]["value"].append(self.get_label(item) + "_out")
                    else:
                        for i in range(item.get_size_in()):
                            self.haml["system"]["outputs"][self.get_label(item, i) + "_out"] = "REAL"
                            self.haml["system"]["mappings"][self.get_label(item, i) + "_out"] = str(0)
                            signal_map[item]["inputs"]["value"].append(self.get_label(item, i) + "_out")
                    
                    signal_map[item]["outputs"] = {"value": []}

                    if item.get_size_out() == 1:
                        self.haml["system"]["inputs"][self.get_label(item) + "_in"] = "REAL"
                        signal_map[item]["outputs"]["value"].append(self.get_label(item) + "_in")
                    else:
                        for i in range(item.get_size_out()):
                            self.haml["system"]["inputs"][self.get_label(item, i) + "_in"] = "REAL"
                            signal_map[item]["outputs"]["value"].append(self.get_label(item, i) + "_in")
                    
                elif isinstance(item, nif.Nif.Probe):
                    signal_map[item]["inputs"] = {"value": []}

                    if item.get_size_in() == 1:
                        self.haml["system"]["outputs"][self.get_label(item)] = "REAL"
                        self.haml["system"]["mappings"][self.get_label(item) + "_out"] = str(0)
                        signal_map[item]["inputs"]["value"].append(self.get_label(item) + "_out")
                    else:
                        for i in range(item.get_size_in()):
                            self.haml["system"]["outputs"][self.get_label(item, i)] = "REAL"
                            self.haml["system"]["mappings"][self.get_label(item, i) + "_out"] = str(0)
                            signal_map[item]["inputs"]["value"].append(self.get_label(item, i) + "_out")


        for connection in self.nif_model.connections:
            if isinstance(connection, nif.Nif.Connection):
                pre_item = self.nif_model.items[connection.pre.item]
                pre_property = connection.pre.property
                pre_slice = connection.pre.get_python_slice()

                post_item = self.nif_model.items[connection.post.item]
                post_property = connection.post.property
                post_slice = connection.post.get_python_slice()

                pre_size = len(range(pre_item.get_size_out(pre_property))[pre_slice])
                post_size = len(range(post_item.get_size_in(post_property))[post_slice])

                weights = self.get_weights(connection.weights, post_size, pre_size)

                if not pre_item in signal_map:
                    raise ValueError("A")
                
                if not pre_property in signal_map[pre_item]["outputs"]:
                    raise ValueError("B")

                if not post_item in signal_map:
                    raise ValueError("C")
                
                if not post_property in signal_map[post_item]["inputs"]:
                    if isinstance(post_item, nif.Nif.Ensemble) and post_property == "value":
                        post_property = "neurons"
                        post_slice = slice(None)

                        padding = np.array([0, 0])
                        weights = np.vstack((weights, padding))
                        
                        weights = np.dot(post_item.encoders, weights)
                    
                    else:
                        raise ValueError("D")

                pre_signals = signal_map[pre_item]["outputs"][pre_property]
                post_signals = signal_map[post_item]["inputs"][post_property][post_slice]

                synapsed_signals = []
                for index, i in enumerate(range(0, len(pre_signals))[pre_slice]):
                    synapsed_signals.append(self.create_synapsed_signal(connection, pre_signals[i], index))
                
                for i, post_signal in enumerate(post_signals):
                    for j, synapsed_signal in enumerate(synapsed_signals):
                        if weights[i][j] != 1.0:
                            self.haml["system"]["mappings"][post_signal] += " + " + str(weights[i][j]) + " * " + synapsed_signal
                        else:
                            self.haml["system"]["mappings"][post_signal] += " + " + synapsed_signal

        yaml = ruamel.yaml.YAML()
        # yaml.dump(haml, sys.stdout)

        fp = open("test2.yaml", "w")
        yaml.dump(self.haml, fp)
        fp.close()

        return self.haml

    def get_label(self, item, index=None):
        # Check if we've seen this item before
        if not item in self.label_map:
            # Check if it has a pre-defined name
            if hasattr(item, 'name') and item.name != None:
                self.label_map[item] = item.name
            else:
                # Otherwise we need to automatically make a name, depending on the type
                if isinstance(item, nif.Nif.Ensemble):
                    total = sum(1 if isinstance(key, nif.Nif.Ensemble) else 0 for key in self.label_map.keys())
                    self.label_map[item] = "ensemble" + str(total)
                elif isinstance(item, nif.Nif.Node):
                    total = sum(1 if isinstance(key, nif.Nif.Node) else 0 for key in self.label_map.keys())
                    self.label_map[item] = "node" + str(total)
                elif isinstance(item, nif.Nif.Probe):
                    total = sum(1 if isinstance(key, nif.Nif.Probe) else 0 for key in self.label_map.keys())
                    self.label_map[item] = "probe" + str(total)
                elif isinstance(item, nif.Nif.Connection):
                    total = sum(1 if isinstance(key, nif.Nif.Connection) else 0 for key in self.label_map.keys())
                    self.label_map[item] = "connection" + str(total)
                else:
                    # Unknown type, so just call it an "item"
                    self.label_map[item] = "item" + str(len(self.label_map.keys()))
        
        # Now if we need to access some sub-index of the item, let's do that
        if index == None:
            return self.label_map[item]
        
        return self.label_map[item] + "_" + str(index)

    def create_synapsed_signal(self, connection, input, i=None):
        if connection.synapse_type == None:
            return input

        elif isinstance(connection.synapse_type, nif.Nif.LowPass):
            if not "LowPass" in self.haml["system"]["definitions"]:
                self.haml["system"]["definitions"]["LowPass"] = NifHamlConverter.__LOWPASS_SYNAPSE_DEFINITION

            name = self.get_label(connection, i)

            self.haml["system"]["instances"][name] = {
                "type": "LowPass",
                "parameters": {
                    "tau": connection.synapse_type.tau
                }
            }
            self.haml["system"]["mappings"][name + ".in"] = input

            return name + ".out"

        else:
            raise ValueError("Unhandled synapse type (" + connection.synapse_type.__class__.__name__ + ")")

    def get_weights(self, original, width, height):
        if original is None or len(original.shape) == 0:
            if width == height:
                return np.identity(width)
        
            else:
                raise ValueError("E")
        
        elif len(original) == width and len(original[0]) == height:
            return original

        raise ValueError("F")
