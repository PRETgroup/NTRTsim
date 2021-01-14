import nengo
import ruamel.yaml

import numpy as np

class HamlConverter:

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

    def __init__(self, sim):
        self.sim = sim
        self.network = sim.model.toplevel

    def create_graph(self):
        g = []
        map = {}

        for e in self.network.ensembles:
            map[e] = len(g)
            g.append({
                "type": "process",
                "element": e,
                "to": [],
                "valid": False
            })
        
        for n in self.network.nodes:
            map[n] = len(g)
            g.append({
                "type": "in",
                "element": n,
                "to": [],
                "valid": False
            })
        
        for p in self.network.probes:
            map[p] = len(g)
            g.append({
                "type": "out",
                "element": p,
                "to": [],
                "valid": False
            })
        
        for c in self.network.connections:
            from_node = -1
            to_node = -1
            if c.pre_obj in map:
                from_node = map[c.pre_obj]
            else:
                print("Unknown from", c.pre_obj)
                continue
            
            if c.post_obj in map:
                to_node = map[c.post_obj]
            else:
                print("Unknown to", c.post_obj)
                continue
            
            g[from_node]["to"].append(to_node)
        
        for node in g:
            if node["type"] == "in":
                self.path_analysis(g, node, [node])

        print(g)

    def path_analysis(self, graph, from_node, path):
        print(from_node)
        if from_node["valid"] or from_node["type"] == "out":
            print("FOUND PATH")
            for n in path:
                n["valid"] = True
            return
        
        for node in from_node["to"]:
            if node in path:
                print("Found loop!")
                continue

            new_path = path.copy()
            new_path.append(graph[node])
            self.path_analysis(graph, graph[node], new_path)


    def convert(self, file):
        if self.sim.closed:
            print("HAML Conversion requires simulator to be open")
            exit()

        #self.create_graph()

        #return

        label_map = {}
        signal_map = {}

        haml = {
            "name": self.get_label(self.network, label_map),
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
                    "stepSize": self.sim.dt,
                    "simulationTime": 10
                },
                "logging": {
                    "enable": True,
                    "file": "out.csv"
                },
                "requireOneIntraTransitionPerTick": True
            }
        }

        neuron_amplitudes = {}

        # Parse all ensembles
        for e in self.network.all_ensembles:
            print("Parsing ensemble:", self.get_label(e, label_map))

            signal_map[e] = {"inputs": [], "outputs": []}

            # Currently can only handle one-dimensional ensembles
            if e.dimensions > 1:
                print("Dimensions > 1, can't handle")
                exit()
            
            # Create an instance for each neuron
            for i in range(e.n_neurons):
                signal_map[e]["inputs"].append(self.get_label(e, label_map, i) + ".in")
                signal_map[e]["outputs"].append(self.get_label(e, label_map, i) + ".spike")

                # Create the correct type of neuron
                if isinstance(e.neuron_type, nengo.LIF):
                    # Include the base definition if not already present
                    if not "LifNeuron" in haml["system"]["definitions"]:
                        haml["system"]["definitions"]["LifNeuron"] = HamlConverter.Include("definitions/lif-neuron.yaml")

                    # Create the instance
                    haml["system"]["instances"][self.get_label(e, label_map, i)] = {
                        "type": "LifNeuron",
                        "parameters": {
                            "tau": e.neuron_type.tau_rc,
                            "t_ref": e.neuron_type.tau_ref,
                            "reset": e.neuron_type.min_voltage
                        }
                    }

                    neuron_amplitudes[e] = e.neuron_type.amplitude / self.sim.dt

                    haml["system"]["mappings"][signal_map[e]["inputs"][i]] = str(self.sim.data[e].bias[i])
                else:
                    # Otherwise we don't handle this neuron type, so error out
                    print("Unhandled neuron type (" + e.neuron_type.__class__.__name__ + ")")
                    exit()

        # Parse all nodes
        for n in self.network.all_nodes:
            print("Parsing node:", self.get_label(n, label_map))

            signal_map[n] = {"inputs": [], "outputs": []}
            
            # If no inputs or outputs, skip
            if n.size_in == 0 and n.size_out == 0:
                continue

            # Currently can only handle single dimensions
            if n.size_in > 1 or n.size_out > 1:
                print("Dimensions > 1, can't handle")
                exit()

            # Nodes will be turned into input or output signals in HAML
            if n.size_in == 1:
                # Output signal
                haml["system"]["outputs"][self.get_label(n, label_map) + "_out"] = "REAL"
                haml["system"]["mappings"][self.get_label(n, label_map) + "_out"] = str(0)
                signal_map[n]["inputs"].append(self.get_label(n, label_map) + "_out")

            if n.size_out == 1:
                # Input signal
                haml["system"]["inputs"][self.get_label(n, label_map) + "_in"] = "REAL"
                signal_map[n]["outputs"].append(self.get_label(n, label_map) + "_in")

        # Parse all connections
        for c in self.network.all_connections:
            self.add_connection(c, haml, signal_map, label_map, neuron_amplitudes)
        
        # Parse all probes
        for p in self.network.all_probes:
            print("Parsing probe:", self.get_label(p, label_map))

            signal_map[p] = {"inputs": [], "outputs": []}

            # The probe will have an associated connection for communication
            conn = None
            for key in self.sim.model.sig.keys():
                if isinstance(key, nengo.Connection):
                    if isinstance(key.post, nengo.Probe) and key.post == p:
                        conn = key
                        break

            if conn == None:
                print("Unable to find connection to probe!")
                continue

            if p.size_in <= 0:
                print("Probe does not probe any signal, skipping")
                continue

            if p.size_in == 1:
                haml["system"]["outputs"][self.get_label(p, label_map)] = "REAL"
                signal_map[p]["inputs"].append(self.get_label(p, label_map))
            else:
                for i in range(p.size_in):
                    signal_map[p]["inputs"].append(self.get_label(p, label_map, i))
                    haml["system"]["outputs"][signal_map[p]["inputs"][i]] = "REAL"
            
            for input in signal_map[p]["inputs"]:
                haml["system"]["mappings"][input] = str(0)

            self.add_connection(conn, haml, signal_map, label_map, neuron_amplitudes)

        if len(haml["system"]["inputs"]) == 0:
            del haml["system"]["inputs"]

        if len(haml["system"]["outputs"]) == 0:
            del haml["system"]["outputs"]

        yaml = ruamel.yaml.YAML()

        print("Outputting to", file)

        fp = open(file, "w")
        yaml.dump(haml, fp)
        fp.close()
    
    def get_label(self, item, label_map, index=None):
        if not item in label_map:
            if isinstance(item, nengo.ensemble.Neurons):
                label_map[item] = self.get_label(item.ensemble, label_map) + "_neurons"
            else:
                if item.label != None:
                    label_map[item] = item.label
                else:
                    if isinstance(item, nengo.Ensemble):
                        total = sum(1 if isinstance(key, nengo.Ensemble) else 0 for key in label_map.keys())
                        label_map[item] = "ensemble" + str(total)
                    elif isinstance(item, nengo.Node):
                        total = sum(1 if isinstance(key, nengo.Node) else 0 for key in label_map.keys())
                        label_map[item] = "node" + str(total)
                    elif isinstance(item, nengo.Probe):
                        total = sum(1 if isinstance(key, nengo.Probe) else 0 for key in label_map.keys())
                        label_map[item] = "probe" + str(total)
                    elif isinstance(item, nengo.Connection):
                        total = sum(1 if isinstance(key, nengo.Connection) else 0 for key in label_map.keys())
                        label_map[item] = "connection" + str(total)
                    else:
                        print("Unable to generate name for " + item.__class__.__name__)
                        exit()
        
        if index == None:
            return label_map[item]
        
        return label_map[item] + "_" + str(index)

    def get_weights(self, original, width, height):
        if not isinstance(original, np.ndarray):
            print("Unexpected type while parsing weights")
            exit()

        if len(original.shape) == 0:
            return np.ones((width, height))
        
        elif len(original) == width and len(original[0]) == height:
            return original

        print("Unexpected error while parsing weights")
        exit()

    def add_connection(self, conn, haml, signal_map, label_map, neuron_amplitudes):
        if isinstance(conn.post_obj, nengo.connection.LearningRule):
            return

        print("Parsing connection:", self.get_label(conn.pre_obj, label_map), "->", self.get_label(conn.post_obj, label_map))

        # Check whether this is a direct or decoded connection
        decoded = isinstance(conn.pre_obj, nengo.Ensemble) and not isinstance(conn.pre_obj.neuron_type, nengo.Direct)

        # Currently can't handle direct connections with custom functions
        if not decoded and conn.function != None:
            print("Unable to handle direct connections with custom functions")
            exit()

        # Get the input signals that we have
        inputs = []

        if isinstance(conn.pre_obj, nengo.Node):
            # Nodes
            inputs.append(signal_map[conn.pre_obj]["outputs"][0])
        
        elif isinstance(conn.pre_obj, nengo.Ensemble):
            # Ensembles
            for i in range(0, len(signal_map[conn.pre_obj]["outputs"])):
                inputs.append("check_spike(" + signal_map[conn.pre_obj]["outputs"][i] + ", " + str(neuron_amplitudes[conn.pre_obj]) + ")")
        
        elif isinstance(conn.pre_obj, nengo.ensemble.Neurons):
            # Neurons of an ensemble
            for i in range(0, len(signal_map[conn.pre_obj.ensemble]["outputs"])):
                inputs.append("check_spike(" + signal_map[conn.pre_obj.ensemble]["outputs"][i] + ", " + str(neuron_amplitudes[conn.pre_obj.ensemble]) + ")")

        else:
            # Otherwise we don't handle this input type, so error out
            print("Unhandled input type to connection (" + conn.pre_obj.__class__.__name__ + ")")
            exit()

        # Now we get all the synapsed signals
        synapsed = []

        if conn.synapse == None:
            # If no synapse, we simply use the input signals
            synapsed = inputs
        
        elif isinstance(conn.synapse, nengo.Lowpass):
            # A lowpass filter, we need to ensure we have the definition
            if not "Lowpass" in haml["system"]["definitions"]:
                haml["system"]["definitions"]["LowPass"] = HamlConverter.Include("definitions/lowpass.yaml")
        
            # Now we create the synapse for each input
            for i in range(0, len(inputs)):
                name = self.get_label(conn, label_map) + "_synapse" + str(i)
                haml["system"]["instances"][name] = {
                    "type": "LowPass",
                    "parameters": {
                        "tau": conn.synapse.tau
                    }
                }
                haml["system"]["mappings"][name + ".in"] = inputs[i]
                synapsed.append(name + ".out")

        else:
            # Otherwise we don't handle this synapse type, so error out
            print("Unhandled synapse type (" + conn.synapse.__class__.__name__ + ")")
            exit()

        # Next, we map the ouputs
        weights = self.sim.signals[self.sim.model.sig[conn]["weights"]]
        if isinstance(conn.post_obj, nengo.Node):
            # Nodes
            weights = self.get_weights(weights, 1, len(synapsed))
            for i in range(0, len(synapsed)):
                haml["system"]["mappings"][signal_map[conn.post_obj]["inputs"][0]] += " + " + synapsed[i] + " * " + str(weights[0][i])
        
        elif isinstance(conn.post_obj, nengo.Ensemble):
            # Ensembles
            weights = self.get_weights(weights, 1, len(synapsed))
            encoders =  self.sim.signals[self.sim.model.sig[conn.post_obj]["encoders"]]
            for j in range(0, len(signal_map[conn.post_obj]["inputs"])):
                for i in range(0, len(synapsed)):
                    haml["system"]["mappings"][signal_map[conn.post_obj]["inputs"][j]] += " + " + synapsed[i] + " * " + str(weights[0][i] * encoders[j][0])
        
        elif isinstance(conn.post_obj, nengo.ensemble.Neurons):
            # Neurons of an ensemble
            weights = self.get_weights(weights, len(signal_map[conn.post_obj.ensemble]["inputs"]), len(synapsed))
            for j in range(0, len(signal_map[conn.post_obj.ensemble]["inputs"])):
                for i in range(0, len(synapsed)):
                    haml["system"]["mappings"][signal_map[conn.post_obj.ensemble]["inputs"][j]] += " + " + synapsed[i] + " * " + str(weights[j][i])

        elif isinstance(conn.post_obj, nengo.Probe):
            # Probes
            weights = self.get_weights(weights, 1, len(synapsed))
            for i in range(0, len(synapsed)):
                haml["system"]["mappings"][signal_map[conn.post_obj]["inputs"][0]] += " + " + synapsed[i] + " * " + str(weights[0][i])
        
        else:
            # Otherwise we don't handle this output type, so error out
            print("Unhandled output type of connection (" + conn.post_obj.__class__.__name__ + ")")
            exit()
