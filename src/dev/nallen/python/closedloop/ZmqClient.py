import zmq

STARTUP_COMMAND = "ping"
RESET_COMMAND = "reset"

class TimeData:
    def __init__(self, abs=0, dt=0):
        self.abs = abs
        self.dt = dt

class ThreeDimensionalVector:
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z

class MarkerData:
    def __init__(self, node_number, position):
        self.node_number = node_number
        self.position = position

class RodData:
    def __init__(self, tags, position, orientation, mass):
        self.tags = tags
        self.position = position
        self.orientation = orientation
        self.mass = mass

class ReceiveData:
    def __init__(self, time=None, markers=None, rods=None):
        self.time = TimeData() if time is None else time
        self.markers = [] if markers is None else markers
        self.rods = [] if rods is None else rods

class Actuation:
    def __init__(self, tag, value):
        self.tag = tag
        self.value = value


class ZmqClient:
    def __init__(self, *args, **kwargs):
        self.context = zmq.Context()
        self.socket = self.context.socket(zmq.REQ)

    def connect(self, host, port):
        self.socket.connect('tcp://%s:%d' % (host, port))
        # self.socket.send_string(STARTUP_COMMAND)

    def receive(self):
        reply = self.socket.recv_string()

        parts = reply.split(" ")

        data = ReceiveData()

        for part in parts:
            components = part.split(":")

            if components[0] == "time":
                data.time.abs = float(components[1])
                data.time.dt = float(components[2])
            
            elif components[0] == "marker":
                id = int(components[1])
                position = ThreeDimensionalVector(float(components[2]), float(components[3]), float(components[4]))
                data.markers.append(MarkerData(id, position))
            
            elif components[0] == "rod":
                tags = components[1].split(",")
                position = ThreeDimensionalVector(float(components[2]), float(components[3]), float(components[4]))
                orientation = ThreeDimensionalVector(float(components[5]), float(components[6]), float(components[7]))
                mass = float(components[8])
                data.rods.append(RodData(tags, position, orientation, mass))

        return data

    def send(self, actuations=None):
        output = ""
        if actuations != None:
            for actuation in actuations:
                output += "act:" + str(actuation.tag) + ":" + str(actuation.value) + " "

        self.socket.send_string(output.rstrip())

    def reset(self):
        self.socket.send_string(RESET_COMMAND)
        self.socket.recv_string()
        # self.socket.send_string(STARTUP_COMMAND)
