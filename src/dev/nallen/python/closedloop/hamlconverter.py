import nengo
import ruamel.yaml

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
            if n.size_in == 0:
                # Input signal
                haml["system"]["inputs"][self.get_label(n, label_map)] = "REAL"
                signal_map[n]["outputs"].append(self.get_label(n, label_map))

            else:
                # Both directions? Error for now, not sure how to handle
                print("Node which is both inputs and outputs, can't handle")
                exit()

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
                    else:
                        print("Unable to generate name for " + item.__class__.__name__)
                        exit()
        
        if index == None:
            return label_map[item]
        
        return label_map[item] + "_" + str(index)

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
        
        synapses = []

        # Create the correct type of synapse
        if conn.synapse == None:
            if isinstance(conn.pre_obj, nengo.Node):
                name = self.get_label(conn.pre_obj, label_map)
                synapses.append({
                    "out": signal_map[conn.pre_obj]["outputs"][0],
                    "weight": self.sim.signals[self.sim.model.sig[conn]["weights"]]
                })
            else:
                for i in range(0, len(self.sim.signals[self.sim.model.sig[conn]["weights"]][0])):
                    name = self.get_label(conn.pre_obj, label_map, i)
                    synapses.append({
                        "out": "check_spike(" + signal_map[conn.pre_obj]["outputs"][i] + ".spike, " + str(neuron_amplitudes[conn.pre_obj]) + ")",
                        "weight": self.sim.signals[self.sim.model.sig[conn]["weights"]][0][i]
                    })
        
        elif isinstance(conn.synapse, nengo.Lowpass):
            if not "Lowpass" in haml["system"]["definitions"]:
                haml["system"]["definitions"]["LowPass"] = HamlConverter.Include("definitions/lowpass.yaml")
            
            if isinstance(conn.pre_obj, nengo.Node):
                name = self.get_label(conn.pre_obj, label_map) + "_synapse"
                synapses.append({
                    "out": name + ".out",
                    "weight": self.sim.signals[self.sim.model.sig[conn]["weights"]]
                })
                haml["system"]["instances"][name] = {
                    "type": "LowPass",
                    "parameters": {
                        "tau": conn.synapse.tau
                    }
                }
                haml["system"]["mappings"][name + ".in"] = signal_map[conn.pre_obj]["outputs"][0]
            else:
                neurons = conn.pre_obj.size_out
                if isinstance(conn.pre_obj, nengo.Ensemble):
                    neurons = conn.pre_obj.n_neurons
                
                for i in range(0, neurons):
                    name = self.get_label(conn.pre_obj, label_map, i) + "_synapse"
                    
                    weight = 1.0
                    if isinstance(conn.pre_obj, nengo.Ensemble):
                        weight = self.sim.signals[self.sim.model.sig[conn]["weights"]][0][i]

                    synapses.append({
                        "out": name + ".out",
                        "weight": weight
                    })
                    haml["system"]["instances"][name] = {
                        "type": "LowPass",
                        "parameters": {
                            "tau": conn.synapse.tau
                        }
                    }
                    if isinstance(conn.pre_obj, nengo.ensemble.Neurons):
                        haml["system"]["mappings"][name + ".in"] = "check_spike(" + signal_map[conn.pre_obj.ensemble]["outputs"][i] + ", " + str(neuron_amplitudes[conn.pre_obj.ensemble]) + ")"
                    else:
                        haml["system"]["mappings"][name + ".in"] = "check_spike(" + signal_map[conn.pre_obj]["outputs"][i] + ", " + str(neuron_amplitudes[conn.pre_obj]) + ")"
        
        else:
            # Otherwise we don't handle this synapse type, so error out
            print("Unhandled synapse type (" + conn.synapse.__class__.__name__ + ")")
            exit()

        to_obj = conn.post_obj
        if isinstance(conn.post_obj, nengo.ensemble.Neurons):
            to_obj = conn.post_obj.ensemble

        for j in range(0, len(synapses)):
            synapse = synapses[j]
            for i in range(0, len(signal_map[to_obj]["inputs"])):
                actual_weight = synapse["weight"]
                if isinstance(conn.post_obj, nengo.ensemble.Neurons):
                    actual_weight = synapse["weight"][i][0]
                elif isinstance(conn.post_obj, nengo.Ensemble):
                    actual_weight = actual_weight * self.sim.signals[self.sim.model.sig[conn.post_obj]["encoders"]][i][0]

                if isinstance(conn.pre_obj, nengo.ensemble.Neurons):
                    if j != i:
                        continue

                haml["system"]["mappings"][signal_map[to_obj]["inputs"][i]] += " + " + synapse["out"] + " * " + str(actual_weight)
