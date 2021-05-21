import yaml

class Nif:
    VERSION = "0.1.0"

    class Neuron():
        TYPE = None

        def __init__(self):
            self.type = self.TYPE
    
    class SpikingNeuron(Neuron):
        TYPE = "SpikingNeuron"

        def __init__(self):
            super().__init__()

    class LifNeuron(SpikingNeuron):
        TYPE = "LifNeuron"

        def __init__(self, tau, t_ref, reset):
            super().__init__()

            self.tau = tau
            self.t_ref = t_ref
            self.reset = reset
    

    class NifItem():
        TYPE = None
        PROPERTIES = []
        DEFAULT_PROPERTY = None

        def __init__(self, name):
            self.type = self.TYPE
            self.name = name
        
        def get_size_in(self, property=None):
            return 0
        
        def get_size_out(self, property=None):
            return 0
        
        def check_property(self, property):
            if property == None:
                property = self.DEFAULT_PROPERTY
            
            if not property in self.PROPERTIES:
                raise ValueError("Invalid property")

            return property

    
    class BasicLayer(NifItem):
        TYPE = "BasicLayer"
        PROPERTIES = ["value"]
        DEFAULT_PROPERTY = "value"

        def __init__(self, name, neurons, neuron_type):
            if not isinstance(neuron_type, Nif.Neuron):
                raise ValueError("Invalid neuron type provided to Layer")

            super().__init__(name)

            self.neurons = neurons
            self.neuron_type = neuron_type

        def get_size_in(self, property=None):
            property = self.check_property(property)
            
            if property == "value":
                return self.neurons

        def get_size_out(self, property=None):
            property = self.check_property(property)
            
            if property == "value":
                return self.neurons

    class Ensemble(BasicLayer):
        TYPE = "Ensemble"
        PROPERTIES = ["value", "neurons"]
        DEFAULT_PROPERTY = "value"

        def __init__(self, name, neurons, neuron_type, dimensions, radius):
            if not isinstance(neuron_type, Nif.SpikingNeuron):
                raise ValueError("Invalid neuron type provided to Ensemble")

            super().__init__(name, neurons, neuron_type)

            self.dimensions = dimensions
            self.radius = radius

            self.encoders = None
            self.gain = None
            self.bias = None

        def get_size_in(self, property=None):
            property = self.check_property(property)
            
            if property == "value":
                return self.dimensions
            elif property == "neurons":
                return self.neurons

        def get_size_out(self, property=None):
            property = self.check_property(property)
            
            if property == "value":
                return self.dimensions
            elif property == "neurons":
                return self.neurons


    class Node(NifItem):
        TYPE = "Node"
        PROPERTIES = ["value"]
        DEFAULT_PROPERTY = "value"

        def __init__(self, name, size_in, size_out):
            super().__init__(name)

            self.size_in = size_in
            self.size_out = size_out

        def get_size_in(self, property=None):
            property = self.check_property(property)
            
            if property == "value":
                return self.size_in

        def get_size_out(self, property=None):
            property = self.check_property(property)
            
            if property == "value":
                return self.size_out
    

    class Probe(NifItem):
        TYPE = "Probe"
        PROPERTIES = ["value"]
        DEFAULT_PROPERTY = "value"

        def __init__(self, name, size_in):
            super().__init__(name)

            self.size_in = size_in

        def get_size_in(self, property=None):
            property = self.check_property(property)
            
            if property == "value":
                return self.size_in


    class Synapse():
        TYPE = None

        def __init__(self):
            self.type = self.TYPE

    class LowPass(Synapse):
        TYPE = "LowPass"

        def __init__(self, tau):
            super().__init__()

            self.tau = tau


    class ItemIndex:
        def __init__(self, item, property, slice):
            self.item = item
            self.property = property
            self.slice = slice
        
        def get_size(self, items, direction="out"):
            if direction != "out" and direction != "in":
                raise ValueError("Invalid value provided for direction")
            
            size = 0
            if direction == "in":
                size = items[self.item].get_size_in(self.property)
            elif direction == "out":
                size = items[self.item].get_size_out(self.property)

            size = len(range(0, size)[self.get_python_slice()])

            return size
        
        def get_python_slice(self):
            if self.slice != None:
                parts = self.slice.split(":")
                if len(parts) == 3:
                    return slice(int(parts[0]), int(parts[1]), int(parts[2]))
            
            return slice(None, None, None)

    class Connection:
        def __init__(self, name, pre, post, synapse_type=None):
            if not isinstance(pre, Nif.ItemIndex):
                raise ValueError("Invalid pre provided to Connection")

            if not isinstance(post, Nif.ItemIndex):
                raise ValueError("Invalid post provided to Connection")

            self.name = name
            self.pre = pre
            self.post = post
            self.synapse_type = synapse_type

            self.weights = None



    def __init__(self, name, step_size):
        self.version = Nif.VERSION
        self.name = name
        self.step_size = step_size
        self.items = []
        self.connections = []

    def to_yaml(self, file=None):
        yaml.emitter.Emitter.process_tag = lambda self, *args, **kw: None

        if file == None:
            return yaml.dump(self, sort_keys=False)

        fp = open(file, "w")
        yaml.dump(self, fp, sort_keys=False)
        fp.close()
