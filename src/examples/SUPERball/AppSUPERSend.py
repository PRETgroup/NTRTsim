#!/usr/bin/python3

import zmq
import time
import numpy as np
import math

def main():
    port = 5555 

    context = zmq.Context()
    socket = context.socket(zmq.REQ)
    socket.connect("tcp://localhost:%s" % port)

    lifetime = 0.0

#     for _ in range(200):
    while True:
        tr = math.sin(2*math.pi*(0.25)*lifetime)+1.0

        msg = ','.join([str(tr*10000) for _ in range(25)])

        socket.send_string(msg)
        message = socket.recv()
        
        lifetime = float(message)
        print(lifetime)
        


### end main    

if __name__ == '__main__':
    main()
