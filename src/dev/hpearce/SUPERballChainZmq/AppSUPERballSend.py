#!/usr/bin/python3

import zmq
import time
import numpy as np
import math

def main():

    names = [
        'SUPERball_string03',
        'SUPERball_string18',
        'SUPERball_string13',
        'SUPERball_string04',
        'SUPERball_string22',
        'SUPERball_string15',
        'SUPERball_string01',
        'SUPERball_string17',
        'SUPERball_string09',
        'SUPERball_string02',
        'SUPERball_string21',
        'SUPERball_string11',
        'SUPERball_string05',
        'SUPERball_string19',
        'SUPERball_string10',
        'SUPERball_string06',
        'SUPERball_string23',
        'SUPERball_string12',
        'SUPERball_string07',
        'SUPERball_string20',
        'SUPERball_string14',
        'SUPERball_string08',
        'SUPERball_string24',
        'SUPERball_string16',
        'SUPERball_string03',
    ]
    port = 5555 

    context = zmq.Context()
    socket = context.socket(zmq.REQ)
    socket.connect("tcp://localhost:%s" % port)

    lifetime = 0.0

#     for _ in range(200):
    while True:
        tr = (math.sin(2*math.pi*(0.2)*lifetime)+1.0) / 2

        #transmitting a 0.6 gives a nice round SUPERball. Ideally transmit numbers between 0 and 1.

        #msg = ','.join([str(tr * (math.sin(2*math.pi*i/25)+1.0)/2) for i in range(24)])
        msg =  ' '.join([names[i]+":"+str(tr) for i in range(24)])
        print(msg)
        socket.send_string(msg)
        message = socket.recv()
        
        lifetime = float(message.split()[0])

        #lifetime = float(message)
        print(lifetime)
        


### end main    

if __name__ == '__main__':
    main()
