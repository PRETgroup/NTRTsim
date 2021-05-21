import nengo
import numpy as np

import nif

class NengoNifConverter:
    
    def __init__(self, sim):
        self.sim = sim
        self.network = sim.model.toplevel

    def create(self):
        model = nif.Nif(self.network.label, self.sim.dt)
        items_map = {}
        positions_map = {}

        for e in self.network.all_ensembles:
            nif_ensemble = nif.Nif.Ensemble(
                e.label,
                e.n_neurons,
                self.create_neuron(e.neuron_type),
                e.dimensions,
                e.radius
            )
            items_map[e] = nif_ensemble
            positions_map[e] = len(model.items)
            model.items.append(nif_ensemble)

            # Scaled encoder = encoder * gain / 10

            try:
                # Get the encoders for the ensemble
                encoders = self.sim.data[e].encoders

                # Check that the encoders are a valid format
                if not isinstance(encoders, np.ndarray):
                    raise ValueError("Unexpected type for encoders")

                # Check the encoders have valid dimensions
                if len(encoders.shape) != 2 or encoders.shape[1] != e.dimensions or encoders.shape[0] != e.n_neurons:
                    raise ValueError("Dimensions for encoders do not match")

                nif_ensemble.encoders = encoders.astype(np.float64)#.tobytes()

            except ValueError as error:
                print("Unable to parse encoders for ensemble", e)
                print("Reason:", error)
                print()

            try:
                # Get the gain for the ensemble
                gain = self.sim.data[e].gain

                # Check that the gain is a valid format
                if not isinstance(gain, np.ndarray):
                    raise ValueError("Unexpected type for gain")

                # Check the gain has valid dimensions
                if len(gain.shape) != 1 or gain.shape[0] != e.n_neurons:
                    raise ValueError("Dimensions for gain do not match")

                nif_ensemble.gain = gain.astype(np.float64)#.tobytes()

            except ValueError as error:
                print("Unable to parse gain for ensemble", e)
                print("Reason:", error)
                print()

            try:
                # Get the bias for the ensemble
                bias = self.sim.data[e].bias

                # Check that the bias is a valid format
                if not isinstance(bias, np.ndarray):
                    raise ValueError("Unexpected type for bias")

                # Check the bias has valid dimensions
                if len(bias.shape) != 1 or bias.shape[0] != e.n_neurons:
                    raise ValueError("Dimensions for bias do not match")

                nif_ensemble.bias = bias.astype(np.float64)#.tobytes()

            except ValueError as error:
                print("Unable to parse bias for ensemble", e)
                print("Reason:", error)
                print()

        for n in self.network.all_nodes:
            nif_node = nif.Nif.Node(
                n.label,
                n.size_in,
                n.size_out
            )
            items_map[n] = nif_node
            positions_map[n] = len(model.items)
            model.items.append(nif_node)

        for c in self.network.all_connections:
            nif_connection = None

            if isinstance(c.post_obj, nengo.connection.LearningRule):
                print("Skipping learning rule connection", c)
                print()
                continue

            try:
                # Check whether this is a direct or decoded connection
                decoded = isinstance(c.pre_obj, nengo.Ensemble) and not isinstance(c.pre_obj.neuron_type, nengo.Direct)

                # Currently can't handle direct connections with custom functions
                if not decoded and c.function != None:
                    raise ValueError("Direct connection with custom functions not supported")

                # Create the mappings to our data types for each end of the connection
                pre = self.create_item_index(c.pre_obj, c.pre_slice, positions_map, items_map)
                post = self.create_item_index(c.post_obj, c.post_slice, positions_map, items_map)

                if isinstance(c.pre_obj, nengo.Ensemble):
                    pre = self.create_item_index(c.pre_obj.neurons, slice(None, None, None), positions_map, items_map)

                # Create the connection
                nif_connection = nif.Nif.Connection(
                    c.label,
                    pre,
                    post,
                    self.create_synapse(c.synapse)
                )
                model.connections.append(nif_connection)
                
            except ValueError as e:
                print("Unable to parse connection", c)
                print("Reason:", e)
                print()
                continue


            try:
                # Get the weights for the connection, if they exist
                if self.sim.model.sig[c]["weights"] != None:
                    weights = self.sim.signals[self.sim.model.sig[c]["weights"]]

                    # Check that the weights are a valid format
                    if not isinstance(weights, np.ndarray):
                        raise ValueError("Unexpected type for weights")

                    # Check the weights have valid dimensions
                    if weights.shape[1] != pre.get_size(model.items, "out"):
                        raise ValueError("Dimension for pre object does not match")
                    
                    if weights.shape[0] != post.get_size(model.items, "in"):
                        raise ValueError("Dimension for post object does not match")

                    # Add the weights
                    nif_connection.weights = weights.astype(np.float64)#.tobytes()

            except ValueError as e:
                print("Unable to parse weights for connection", c)
                print("Reason:", e)
                print()

        for p in self.network.all_probes:
            nif_probe = nif.Nif.Probe(
                p.label,
                p.size_in
            )
            items_map[p] = nif_probe
            positions_map[p] = len(model.items)
            model.items.append(nif_probe)

            nif_connection = None

            # Create the connection between the probe and source
            try:
                probed_object = p.target
                probed_slice = slice(None)

                if isinstance(p.target, nengo.base.ObjView):
                    probed_object = p.target.obj
                    probed_slice = p.target.slice

                # Create the mappings to our data types for each end of the connection
                pre = self.create_item_index(probed_object, probed_slice, positions_map, items_map)
                post = self.create_item_index(p, slice(None), positions_map, items_map)

                if isinstance(probed_object, nengo.Ensemble):
                    pre = self.create_item_index(probed_object.neurons, slice(None, None, None), positions_map, items_map)

                # Create the connection
                nif_connection = nif.Nif.Connection(
                    None,
                    pre,
                    post,
                    self.create_synapse(p.synapse)
                )
                model.connections.append(nif_connection)
                
            except ValueError as e:
                print("Unable to parse connection for probe", p)
                print("Reason:", e)
                print()
                continue

            # Get the weights for this connection
            try:
                c = None
                for key in self.sim.model.sig.keys():
                    if isinstance(key, nengo.Connection):
                        if key.pre == p.target and key.post == p:
                            c = key
                            break
                
                if c != None:
                    # Get the weights for the connection, if they exist
                    if self.sim.model.sig[c]["weights"] != None:
                        weights = self.sim.signals[self.sim.model.sig[c]["weights"]]

                        # Check that the weights are a valid format
                        if not isinstance(weights, np.ndarray):
                            raise ValueError("Unexpected type for weights")

                        # Check the weights have valid dimensions
                        if weights.shape[1] != pre.get_size(model.items, "out"):
                            raise ValueError("Dimension for pre object does not match")
                        
                        if weights.shape[0] != post.get_size(model.items, "in"):
                            raise ValueError("Dimension for post object does not match")

                        # Add the weights
                        nif_connection.weights = weights.astype(np.float64)#.tobytes()

            except ValueError as e:
                print("Unable to parse weights for connection of probe", p)
                print("Reason:", e)
                print()
        
        return model

    def create_item_index(self, obj, slice, positions_map, items_map):
        values = range(0, obj.size_out)[slice]
        
        item_slice = None
        if len(values) != obj.size_out:
            item_slice = str(values.start) + ":" + str(values.stop) + ":" + str(values.step)
        
        item_index = nif.Nif.ItemIndex(None, None, item_slice)

        if isinstance(obj, nengo.ensemble.Neurons):
            obj = obj.ensemble
            item_index.property = "neurons"

        if not obj in positions_map or not obj in items_map:
            raise ValueError("Object missing from maps")

        item_index.item = positions_map[obj]

        if item_index.property == None:
            item_index.property = items_map[obj].DEFAULT_PROPERTY

        if not item_index.property in items_map[obj].PROPERTIES:
            raise ValueError("Invalid property")
        
        return item_index

    def create_neuron(self, neuron_type):
        # Create the correct type of neuron
        if isinstance(neuron_type, nengo.LIF):
            # Create the instance
            return nif.Nif.LifNeuron(
                neuron_type.tau_rc,
                neuron_type.tau_ref,
                neuron_type.min_voltage
            )
        else:
            # Otherwise we don't handle this neuron type, so error out
            raise ValueError("Unhandled neuron type (" + neuron_type.__class__.__name__ + ")")
    
    def create_synapse(self, synapse):
        if synapse == None:
            return None

        if isinstance(synapse, nengo.Lowpass):
            return nif.Nif.LowPass(
                synapse.tau
            )
        else:
            # Otherwise we don't handle this synapse type, so error out
            raise ValueError("Unhandled synapse type (" + synapse.__class__.__name__ + ")")
