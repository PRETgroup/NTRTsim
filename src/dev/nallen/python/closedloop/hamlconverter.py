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

        for e in self.network.all_ensembles:
            map[e] = len(g)
            g.append({
                "element": e,
                "to": []
            })
        
        for n in self.network.all_nodes:
            map[n] = len(g)
            g.append({
                "element": n,
                "to": []
            })
        
        for p in self.network.all_probes:
            map[p] = len(g)
            g.append({
                "element": p,
                "to": []
            })

            probed_object = p.target
            if isinstance(p.target, nengo.base.ObjView):
                probed_object = p.target.obj

            if isinstance(probed_object, nengo.Node):
                g[map[probed_object]]["to"].append({
                    "element": None,
                    "node": map[p]
                })

            elif isinstance(probed_object, nengo.Ensemble):
                g[map[probed_object]]["to"].append({
                    "element": None,
                    "node": map[p]
                })
                
            elif isinstance(probed_object, nengo.ensemble.Neurons):
                g[map[probed_object.ensemble]]["to"].append({
                    "element": None,
                    "node": map[p]
                })
        
        for c in self.network.all_connections:
            if isinstance(c.post_obj, nengo.connection.LearningRule):
                continue

            from_node = -1
            to_node = -1
            if c.pre_obj in map:
                from_node = map[c.pre_obj]
            elif isinstance(c.pre_obj, nengo.ensemble.Neurons) and c.pre_obj.ensemble in map:
                from_node = map[c.pre_obj.ensemble]
            else:
                continue
            
            if c.post_obj in map:
                to_node = map[c.post_obj]
            else:
                continue
            
            g[from_node]["to"].append({
                "element": c,
                "node": to_node
            })

        return g

    def find_all_elements_to(self, graph, element, path=[]):
        node_id = None
        for i in range(len(graph)):
            if graph[i]["element"] == element:
                node_id = i
        
        if node_id == None:
            return set()

        if node_id in path:
            return set()

        elements_set = set()
        elements_set.add(element)

        newpath = path.copy()
        newpath.append(node_id)

        for node in graph:
            for transition in node["to"]:
                if transition["node"] == node_id:
                    if transition["element"] != None:
                        elements_set.add(transition["element"])
                    
                    elements_set.update(self.find_all_elements_to(graph, node["element"], newpath))

        return elements_set

    def convert(self, file, filter_outputs = None):
        if self.sim.closed:
            print("HAML Conversion requires simulator to be open")
            exit()

        # If we need to filter outputs, then this is where we'll do that
        generate_set = None
        if filter_outputs != None:
            print("Filtering Network")

            # First create the graph of the network
            g = self.create_graph()

            # Then go through each output and find all elements that lead to that item
            generate_set = set()
            for item in filter_outputs:
                generate_set.update(self.find_all_elements_to(g, item))

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
                    "stepSize": self.sim.dt/10,
                    "simulationTime": 10
                },
                "logging": {
                    "enable": True,
                    "interval": self.sim.dt,
                    "file": "out.csv"
                },
                "requireOneIntraTransitionPerTick": True
            }
        }

        neuron_amplitudes = {}

        # Parse all ensembles
        for e in self.network.all_ensembles:
            if generate_set != None and e not in generate_set:
                continue

            print("Parsing ensemble:", self.get_label(e, label_map))

            signal_map[e] = {"inputs": [], "outputs": []}
            
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

                    neuron_amplitudes[e] = e.neuron_type.amplitude

                    haml["system"]["mappings"][signal_map[e]["inputs"][i]] = str(self.sim.data[e].bias[i])
                else:
                    # Otherwise we don't handle this neuron type, so error out
                    print("Unhandled neuron type (" + e.neuron_type.__class__.__name__ + ")")
                    exit()

        # Parse all nodes
        for n in self.network.all_nodes:
            if generate_set != None and n not in generate_set:
                continue

            print("Parsing node:", self.get_label(n, label_map))

            signal_map[n] = {"inputs": [], "outputs": []}
            
            # If no inputs or outputs, skip
            if n.size_in == 0 and n.size_out == 0:
                continue

            # Nodes will be turned into input or output signals in HAML
            if n.size_in == 1:
                # Output signal
                haml["system"]["outputs"][self.get_label(n, label_map) + "_out"] = "REAL"
                haml["system"]["mappings"][self.get_label(n, label_map) + "_out"] = str(0)
                signal_map[n]["inputs"].append(self.get_label(n, label_map) + "_out")
            else:
                # Multiple inputs to this node
                for i in range(n.size_in):
                    # Output signal
                    haml["system"]["outputs"][self.get_label(n, label_map, i) + "_out"] = "REAL"
                    haml["system"]["mappings"][self.get_label(n, label_map, i) + "_out"] = str(0)
                    signal_map[n]["inputs"].append(self.get_label(n, label_map, i) + "_out")

            if n.size_out == 1:
                # Input signal
                haml["system"]["inputs"][self.get_label(n, label_map) + "_in"] = "REAL"
                signal_map[n]["outputs"].append(self.get_label(n, label_map) + "_in")
            else:
                # Multiple outputs from this node
                for i in range(n.size_out):
                    # Input signals
                    haml["system"]["inputs"][self.get_label(n, label_map, i) + "_in"] = "REAL"
                    signal_map[n]["outputs"].append(self.get_label(n, label_map, i) + "_in")

        # Parse all connections
        for c in self.network.all_connections:
            if generate_set != None and c not in generate_set:
                continue

            self.add_connection(c, haml, signal_map, label_map, neuron_amplitudes)
        
        # Parse all probes
        for p in self.network.all_probes:
            if generate_set != None and p not in generate_set:
                continue

            print("Parsing probe:", self.get_label(p, label_map))

            if p.size_in <= 0:
                print("Probe does not probe any signal, skipping")
                continue

            signal_map[p] = {"inputs": [], "outputs": []}

            if p.size_in == 1:
                haml["system"]["outputs"][self.get_label(p, label_map)] = "REAL"
                signal_map[p]["inputs"].append(self.get_label(p, label_map))
            else:
                for i in range(p.size_in):
                    signal_map[p]["inputs"].append(self.get_label(p, label_map, i))
                    haml["system"]["outputs"][signal_map[p]["inputs"][i]] = "REAL"
            
            for input in signal_map[p]["inputs"]:
                haml["system"]["mappings"][input] = str(0)

            if isinstance(p.target, nengo.base.ObjView):
                probed_object = p.target.obj
                probed_slice = p.target.slice
            else:
                probed_object = p.target
                probed_slice = slice(None)


            # Check which outputs we should be mapping from
            probed_indices = range(0, probed_object.size_out)[probed_slice]

            if len(probed_indices) != p.size_in:
                print("Mismatch between probe and signal sizes")
                exit()

            # The probe will have an associated connection for communication
            if isinstance(probed_object, nengo.Node):
                synapsed = self.create_synapsed_signals(haml, p.synapse, signal_map[probed_object]["outputs"], self.get_label(p, label_map))
                
                for i in range(p.size_in):
                    haml["system"]["mappings"][signal_map[p]["inputs"][i]] += " + " + synapsed[probed_indices[i]]
                
            elif isinstance(probed_object, nengo.Ensemble):
                conn = None
                for key in self.sim.model.sig.keys():
                    if isinstance(key, nengo.Connection):
                        if key.pre == p.target and key.post == p:
                            conn = key
                            break
                
                if conn == None:
                    print("Unable to find connection to probe!")
                    exit()

                self.add_connection(conn, haml, signal_map, label_map, neuron_amplitudes)
                
            elif isinstance(probed_object, nengo.ensemble.Neurons):
                inputs = []
                for i in probed_indices:
                    inputs.append("check_spike(" + signal_map[probed_object.ensemble]["outputs"][i] + ", " + str(neuron_amplitudes[probed_object.ensemble]) + "/STEP_SIZE)")

                synapsed = self.create_synapsed_signals(haml, p.synapse, inputs, self.get_label(p, label_map))
                
                for i in range(p.size_in):
                    haml["system"]["mappings"][signal_map[p]["inputs"][i]] += " + " + synapsed[i]

            else:
                print("Unable to handle probe of " + probed_object.__class__.__name__)
                exit()

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

        # And check which outputs we should be mapping from
        pre_indices = range(0, conn.pre_obj.size_out)[conn.pre_slice]

        if isinstance(conn.pre_obj, nengo.Node):
            # Nodes
            for i in pre_indices:
                inputs.append(signal_map[conn.pre_obj]["outputs"][i])
        
        elif isinstance(conn.pre_obj, nengo.Ensemble):
            # Ensembles
            for i in range(0, len(signal_map[conn.pre_obj]["outputs"])):
                inputs.append("check_spike(" + signal_map[conn.pre_obj]["outputs"][i] + ", " + str(neuron_amplitudes[conn.pre_obj]) + "/STEP_SIZE)")
        
        elif isinstance(conn.pre_obj, nengo.ensemble.Neurons):
            # Neurons of an ensemble
            for i in pre_indices:
                inputs.append("check_spike(" + signal_map[conn.pre_obj.ensemble]["outputs"][i] + ", " + str(neuron_amplitudes[conn.pre_obj.ensemble]) + "/STEP_SIZE)")

        else:
            # Otherwise we don't handle this input type, so error out
            print("Unhandled input type to connection (" + conn.pre_obj.__class__.__name__ + ")")
            exit()

        # Now we get all the synapsed signals
        synapsed = self.create_synapsed_signals(haml, conn.synapse, inputs, self.get_label(conn, label_map))

        # And check which inputs we should be mapping to
        post_indices = range(0, conn.post_obj.size_in)[conn.post_slice]

        # Next, we map the ouputs
        weights = np.ones(())
        if self.sim.model.sig[conn]["weights"] != None:
            weights = self.sim.signals[self.sim.model.sig[conn]["weights"]]
        
        if isinstance(conn.post_obj, nengo.Node):
            # Nodes
            weights = self.get_weights(weights, len(post_indices), len(synapsed))

            for i in range(0, len(synapsed)):
                for j in range(0, len(post_indices)):
                    haml["system"]["mappings"][signal_map[conn.post_obj]["inputs"][post_indices[j]]] += " + " + synapsed[i] + " * " + str(weights[j][i])
        
        elif isinstance(conn.post_obj, nengo.Ensemble):
            # Ensembles
            weights = self.get_weights(weights, conn.post_obj.size_in, len(synapsed))
            encoders =  self.sim.signals[self.sim.model.sig[conn.post_obj]["encoders"]]

            for n in range(0, len(signal_map[conn.post_obj]["inputs"])):
                for i in range(0, len(synapsed)):
                    for j in post_indices:
                        haml["system"]["mappings"][signal_map[conn.post_obj]["inputs"][n]] += " + " + synapsed[i] + " * " + str(weights[j][i] * encoders[n][j])
        
        elif isinstance(conn.post_obj, nengo.ensemble.Neurons):
            # Neurons of an ensemble
            weights = self.get_weights(weights, conn.post_obj.size_in, len(synapsed))
            gains = self.sim.data[conn.post_obj.ensemble].gain

            for n in post_indices:
                for i in range(0, len(synapsed)):
                    haml["system"]["mappings"][signal_map[conn.post_obj.ensemble]["inputs"][n]] += " + " + synapsed[i] + " * " + str(weights[n][i] * gains[j])

        elif isinstance(conn.post_obj, nengo.Probe):
            # Probes
            weights = self.get_weights(weights, conn.post_obj.size_in, len(synapsed))

            if isinstance(conn.pre_obj, nengo.ensemble.Neurons):
                # Probe captures neurons
                for i in range(0, len(synapsed)):
                    haml["system"]["mappings"][signal_map[conn.post_obj]["inputs"][i]] += " + " + synapsed[i] + " * " + str(weights[0][i])

            else:
                # Probe captures decoded output
                for j in post_indices:
                    for i in range(0, len(synapsed)):
                        haml["system"]["mappings"][signal_map[conn.post_obj]["inputs"][j]] += " + " + synapsed[i] + " * " + str(weights[j][i])
        
        else:
            # Otherwise we don't handle this output type, so error out
            print("Unhandled output type of connection (" + conn.post_obj.__class__.__name__ + ")")
            exit()

    def create_synapsed_signals(self, haml, synapse, inputs, label):
        synapsed = []

        if synapse == None:
            # If no synapse, we simply use the input signals
            synapsed = inputs
        
        elif isinstance(synapse, nengo.Lowpass):
            # A lowpass filter, we need to ensure we have the definition
            if not "Lowpass" in haml["system"]["definitions"]:
                haml["system"]["definitions"]["LowPass"] = HamlConverter.Include("definitions/lowpass.yaml")
        
            # Now we create the synapse for each input
            for i in range(0, len(inputs)):
                name = label + "_synapse" + str(i)
                haml["system"]["instances"][name] = {
                    "type": "LowPass",
                    "parameters": {
                        "tau": synapse.tau
                    }
                }
                haml["system"]["mappings"][name + ".in"] = inputs[i]
                synapsed.append(name + ".out")

        else:
            # Otherwise we don't handle this synapse type, so error out
            print("Unhandled synapse type (" + synapse.__class__.__name__ + ")")
            exit()

        return synapsed