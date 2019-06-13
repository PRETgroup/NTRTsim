import zmq
import math
import numpy as np

class SUPERBall:
    def __init__(self,port=5555):
        self.port = port
        self.context = zmq.Context()
        self.socket = self.context.socket(zmq.REQ)
        self.socket.connect('tcp://localhost:%d' % self.port)
        self.lifetime = 0.0
    ### end __init__


    def __call__(self, time, data):

        angle = np.arctan2(data[1], data[0])

        tr = math.sin(2 * math.pi * angle) + 1.0

        msg = ','.join([str(tr*10000) for _ in range(25)])
        self.socket.send_string(msg)

        self.lifetime = float(self.socket.recv())
        return 0, 0
    ### end __call__

    def __del__(self):
        self.socket.close()
    ### end __del__
### end class


