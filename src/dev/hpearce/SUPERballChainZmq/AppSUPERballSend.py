#!/usr/bin/python3

import zmq
import time
import numpy as np
import math

def main():

    string_names = [
        'SUPERball_string01',
        'SUPERball_string02',
        'SUPERball_string03',
        'SUPERball_string04',
        'SUPERball_string05',
        'SUPERball_string06',
        'SUPERball_string07',
        'SUPERball_string08',
        'SUPERball_string09',
        'SUPERball_string10',
        'SUPERball_string11',
        'SUPERball_string12',
        'SUPERball_string13',
        'SUPERball_string14',
        'SUPERball_string15',
        'SUPERball_string16',
        'SUPERball_string17',
        'SUPERball_string18',
        'SUPERball_string19',
        'SUPERball_string20',
        'SUPERball_string21',
        'SUPERball_string22',
        'SUPERball_string23',
        'SUPERball_string24',
    ]

    commands = [
        0.0 for _ in range(24)
    ]

    triangles = {
        'NWD': [ #
            'SUPERball_string04',
            'SUPERball_string22',
            'SUPERball_string15',
        ],
        'SWD': [
            'SUPERball_string21',
            'SUPERball_string02',
            'SUPERball_string11',
        ],
        'SED': [ #maybe?
            'SUPERball_string06',
            'SUPERball_string23',
            'SUPERball_string12',
        ],
        'NED': [ #
            'SUPERball_string24',
            'SUPERball_string08',
            'SUPERball_string16',
        ],

        'NWP': [
            'SUPERball_string03',
            'SUPERball_string18',
            'SUPERball_string13',
        ],
        'SWP': [ #
            'SUPERball_string17',
            'SUPERball_string01',
            'SUPERball_string09',
        ],
        'SEP': [ #
            'SUPERball_string05',
            'SUPERball_string19',
            'SUPERball_string10',
        ],
        'NEP': [
            'SUPERball_string20',
            'SUPERball_string07',
            'SUPERball_string14',
        ],
    }

    port = 5555 

    context = zmq.Context()
    socket = context.socket(zmq.REQ)
    socket.connect("tcp://localhost:%s" % port)

    lifetime = 0.0

#     for _ in range(200):
    while True:
        #reset command list
        commands = [0.65 for _ in range(24)] #0.5 is a nice neutral number

        tr1 = math.sin(2*math.pi*(0.15)*(lifetime) + 0 * math.pi) * 0.25
        tr2 = math.sin(2*math.pi*(0.15)*(lifetime) + 0.5 * math.pi) * 0.25
        tr3 = math.sin(2*math.pi*(0.15)*(lifetime) + 1 * math.pi) * 0.25
        tr4 = math.sin(2*math.pi*(0.15)*(lifetime) + 1.5 * math.pi) * 0.25

        if lifetime > 1:
            for string_name in triangles['NWD']:
                commands[string_names.index(string_name)] += tr2

            for string_name in triangles['SWD']:
                commands[string_names.index(string_name)] += tr4
        
            for string_name in triangles['SED']:
                commands[string_names.index(string_name)] += tr2

            for string_name in triangles['NED']:
                commands[string_names.index(string_name)] += tr4

            for string_name in triangles['NWP']:
                commands[string_names.index(string_name)] += tr1
            
            for string_name in triangles['SWP']:
                commands[string_names.index(string_name)] += tr3
            
            for string_name in triangles['SEP']:
                commands[string_names.index(string_name)] += tr1
            
            for string_name in triangles['NEP']:
                commands[string_names.index(string_name)] += tr3
    

        #transmitting a 0.6 gives a nice round SUPERball. Ideally transmit numbers between 0 and 1.

        #msg = ','.join([str(tr * (math.sin(2*math.pi*i/25)+1.0)/2) for i in range(24)])
        msg =  ' '.join([string_names[i]+":"+str(commands[i]) for i in range(24)])
        print(msg)
        socket.send_string(msg)
        message = socket.recv()
        
        lifetime = float(message.split()[0])

        #lifetime = float(message)
        print(lifetime)
        


### end main    

if __name__ == '__main__':
    main()
