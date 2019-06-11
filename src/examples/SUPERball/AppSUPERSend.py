#!/usr/bin/python3

import zmq
import time
import numpy as np

def main():
    port = 5555 

    context = zmq.Context()
    socket = context.socket(zmq.REQ)
    socket.connect("tcp://localhost:%s" % port)

    msg = ','.join(['10000' for _ in range(25)])


#     for _ in range(200):
    while True:
        socket.send_string(msg)
        message = socket.recv()
        print(message)


### end main    

if __name__ == '__main__':
    main()
