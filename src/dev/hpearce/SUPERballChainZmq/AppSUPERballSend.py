#!/usr/bin/python3

import zmq
import time
import numpy as np
import math

from time import sleep

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
        1.0 for _ in range(24)
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
        commands = [1 for _ in range(24)] 
        # when sending in a number, it is a percentage of the original rest length. 
        # So, 0.5 = 50% of the original length, 2 = 200% of the original length

        print(lifetime)

        trAmp = 0.4
        trOffs = 0.8
        sTime = (0.05 * lifetime)
        nwp = trOffs - math.sin(2*math.pi*sTime + 0.0 * math.pi) * trAmp
        nwd = trOffs - math.sin(2*math.pi*sTime - 1/4 * math.pi) * trAmp
        swp = trOffs - math.sin(2*math.pi*sTime - 1/2 * math.pi) * trAmp
        swd = trOffs - math.sin(2*math.pi*sTime + 1/2 * math.pi) * trAmp
        sep = trOffs - math.sin(2*math.pi*sTime + 1/4 * math.pi) * trAmp
        sed = trOffs - math.sin(2*math.pi*sTime - 3/4 * math.pi) * trAmp
        nep = sep
        ned = swp
        # tr3 = trOffs + math.sin(2*math.pi*(0.15)*(lifetime) + 1 * math.pi) * trAmp
        # tr4 = trOffs + math.sin(2*math.pi*(0.15)*(lifetime) + 1.5 * math.pi) * trAmp

        if lifetime > 1:
            
            
            for string_name in triangles['SWD']:
                commands[string_names.index(string_name)] = swd

            for string_name in triangles['SEP']:
                commands[string_names.index(string_name)] = sep

            for string_name in triangles['NED']:
                commands[string_names.index(string_name)] = ned

            for string_name in triangles['NWP']:
                commands[string_names.index(string_name)] = nwp
            
            for string_name in triangles['SWP']:
                commands[string_names.index(string_name)] = swp
            
            for string_name in triangles['SED']:
                commands[string_names.index(string_name)] = sed
            
            for string_name in triangles['NEP']:
                commands[string_names.index(string_name)] = nep

            for string_name in triangles['NWD']:
                commands[string_names.index(string_name)] = nwd
            

            #commands[21 - 1] = 0.5 + (tr1*2)
    

        #transmitting a 0.6 gives a nice round SUPERball. Ideally transmit numbers between 0 and 1.

        #msg = ','.join([str(tr * (math.sin(2*math.pi*i/25)+1.0)/2) for i in range(24)])
        msg =  ' '.join([string_names[i]+":"+str(commands[i]) for i in range(24)])
        print(msg)
        socket.send_string(msg)
        
        message = socket.recv()
        print(message)
        lifetime = float(message.split()[0])
        sleep(0.001) #sleep 1ms so Hammond's laptop can multitask

        #lifetime = float(message)
        


### end main    

if __name__ == '__main__':
    main()
