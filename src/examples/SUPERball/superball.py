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

#         angle = np.arctan2(data[1], data[0])
#         tr = math.sin(2 * math.pi * angle) + 1.0
#         msg = ','.join([str(tr*1000000) for _ in range(25)])


        tri_to_string = {
                0:[2, 12, 18],
                1:[3, 14, 21],
                2:[0, 9, 16],
                3:[1, 10, 20],
                4:[4, 9, 18],
                5:[5, 11, 22],
                6:[6, 13, 19],
                7:[7, 15, 23]
                }

        def to_tension(d):
            return 1000000. * (1. + 0.5 * d)

        cmds = np.zeros((25,))
        for (d_idx, d) in enumerate(data):
            for (cable_idx, cable_no) in enumerate(tri_to_string[d_idx]):
#                 cmds[cable_idx+1] = to_tension(d)
                cmds[(d_idx*3) + cable_idx] = to_tension(d)

        msg = ','. join([str(x) for x in cmds])
        self.socket.send_string(msg)
        
        resp = self.socket.recv()
        vals = [float(m) for m in resp.split()]

#         self.lifetime = float(self.socket.recv())
        return 0, 0
    ### end __call__

    def __del__(self):
        self.socket.close()
    ### end __del__
### end class


