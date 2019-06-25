#!/usr/bin/python3

import zmq
import time
import numpy as np
import math

class SUPERBall:
    def __init__(self,port = 5555):
        self.port = port
        self.context = zmq.Context()
        self.socket = self.context.socket(zmq.REQ)
        self.socket.connect('tcp://localhost:%d' % self.port)
        self.lifetime = 0.0
        self.com_history = []
        self.string_names = [
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
        self.triangles = {
            'NWD': [ 
                'SUPERball_string04',
                'SUPERball_string22',
                'SUPERball_string15',
            ],
            'SWD': [
                'SUPERball_string21',
                'SUPERball_string02',
                'SUPERball_string11',
            ],
            'SED': [ 
                'SUPERball_string06',
                'SUPERball_string23',
                'SUPERball_string12',
            ],
            'NED': [ 
                'SUPERball_string24',
                'SUPERball_string08',
                'SUPERball_string16',
            ],

            'NWP': [
                'SUPERball_string03',
                'SUPERball_string18',
                'SUPERball_string13',
            ],
            'SWP': [ 
                'SUPERball_string17',
                'SUPERball_string01',
                'SUPERball_string09',
            ],
            'SEP': [ 
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

    def __call__(self, time, data):

        #reset command list
        commands = [1 for _ in range(24)] 

        # when sending in a number, it is a percentage of the original rest length. 
        # So, 0.5 = 50% of the original length, 2 = 200% of the original length

        #data is a vector of length 8 representing values for each of the 8 triangles

        #transmitting a 0.6 gives a nice round SUPERball. Ideally transmit numbers between 0 and 1.

        def to_pos(val):
            #val is between -1 and 1, make it between 0.1 and 1
            return val #1 * max(min(1 + val,1),0)

        if self.lifetime > 1:
            
            for string_name in self.triangles['NWP']:
                commands[self.string_names.index(string_name)] = to_pos(data[0])

            for string_name in self.triangles['NWD']:
                commands[self.string_names.index(string_name)] = to_pos(data[1])

            for string_name in self.triangles['SWP']:
                commands[self.string_names.index(string_name)] = to_pos(data[2])

            for string_name in self.triangles['SWD']:
                commands[self.string_names.index(string_name)] = to_pos(data[3])
            
            for string_name in self.triangles['SEP']:
                commands[self.string_names.index(string_name)] = to_pos(data[4])
            
            for string_name in self.triangles['SED']:
                commands[self.string_names.index(string_name)] = to_pos(data[5])
            
            for string_name in self.triangles['NEP']:
                commands[self.string_names.index(string_name)] = to_pos(data[6])

            for string_name in self.triangles['NED']:
                commands[self.string_names.index(string_name)] = to_pos(data[7])
                
        #the following causes a walking motion, it's fun but not very useful
            # for string_name in self.triangles['SWD']:
            #     commands[self.string_names.index(string_name)] = to_pos(data[0])

            # for string_name in self.triangles['SEP']:
            #     commands[self.string_names.index(string_name)] = to_pos(data[3])

            # for string_name in self.triangles['NED']:
            #     commands[self.string_names.index(string_name)] = to_pos(data[6])

            # for string_name in self.triangles['NWP']:
            #     commands[self.string_names.index(string_name)] = to_pos(data[1])
            
            # for string_name in self.triangles['SWP']:
            #     commands[self.string_names.index(string_name)] = to_pos(data[4])
            
            # for string_name in self.triangles['SED']:
            #     commands[self.string_names.index(string_name)] = to_pos(data[7])
            
            # for string_name in self.triangles['NEP']:
            #     commands[self.string_names.index(string_name)] = to_pos(data[2])

            # for string_name in self.triangles['NWD']:
            #     commands[self.string_names.index(string_name)] = to_pos(data[5])


        msg =  ' '.join([self.string_names[i]+":"+str(commands[i]) for i in range(24)])
        print(msg)
        self.socket.send_string(msg)
        
        reply = self.socket.recv()
        #print(reply)
        reply_components = reply.split() 
        self.lifetime = float(reply_components[0])
        pos = (float(reply_components[1]), float(reply_components[2]), float(reply_components[3])) #x, y, z coordinates
        self.com_history.append(pos)

        #sleep(0.001) #sleep 1ms so Hammond's laptop can multitask

        #lifetime = float(message)
        
        return 0,0


