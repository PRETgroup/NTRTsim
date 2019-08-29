#!/usr/bin/python3

import zmq
import time
import numpy as np
import math

class SUPERBall:
    def __init__(self,port = 5555,stabilise_time = 2, record_wait=0, marc_config = True):
        self.port = port
        self.context = zmq.Context()
        self.socket = self.context.socket(zmq.REQ)
        self.socket.connect('tcp://localhost:%d' % self.port)
        self.lifetime = 0.0
        self.stabilise_time = stabilise_time
        self.record_wait = record_wait

        #we'll use these numbers to reduce our memory impact when graphing history
        self.append_every = 2
        self.append_at_count = self.append_every
        self.marc_config = marc_config
        self.offsets = [0 for _ in range(8)] 

        self.com_history = []
        
        prefix = 'm'
        if marc_config:
            prefix = 'SUPERball_string' #marc's YAML uses a different naming style

        self.string_names = [
            prefix + '01',
            prefix + '02',
            prefix + '03',
            prefix + '04',
            prefix + '05',
            prefix + '06',
            prefix + '07',
            prefix + '08',
            prefix + '09',
            prefix + '10',
            prefix + '11',
            prefix + '12',
            prefix + '13',
            prefix + '14',
            prefix + '15',
            prefix + '16',
            prefix + '17',
            prefix + '18',
            prefix + '19',
            prefix + '20',
            prefix + '21',
            prefix + '22',
            prefix + '23',
            prefix + '24',
        ]
        self.triangles = {
            'NWD': [ 
                prefix + '04',
                prefix + '22',
                prefix + '15',
            ],
            'SWD': [
                prefix + '21',
                prefix + '02',
                prefix + '11', #6
            ],
            'SED': [ 
                prefix + '06',
                prefix + '23',
                prefix + '12', #5
            ],
            'NED': [ 
                prefix + '24',
                prefix + '08', #4
                prefix + '16',
            ],

            'NWP': [
                prefix + '03',
                prefix + '18', #2
                prefix + '13',
            ],
            'SWP': [ 
                prefix + '17',
                prefix + '01', #1
                prefix + '09',
            ],
            'SEP': [ 
                prefix + '05',
                prefix + '19',
                prefix + '10',
            ],
            'NEP': [
                prefix + '20',
                prefix + '07',
                prefix + '14', #3
            ],
        }

        self.roller_strings = [
            prefix + '01', #1
            prefix + '18', #2
            prefix + '14', #3
            prefix + '08', #4
            prefix + '12', #5
            prefix + '11', #6
        ]

    def set_offsets(self, offsets):
        self.offsets = offsets

    def __call__(self, dt, data):

        #reset command list
        commands = [0 for _ in range(24)] 

        # when sending in a number, it is a percentage of the original rest length. 
        # So, 0.5 = 50% of the original length, 2 = 200% of the original length

        #data is a vector of length 8 representing values for each of the 8 triangles

        def to_pos(val):
            return min(max(val/2,0),2) 

        if len(data) == 24:
            commands = [to_pos(d) for d in data]
        
        else:
            if self.lifetime > self.stabilise_time:
                
                for string_name in self.triangles['NWP']:
                    commands[self.string_names.index(string_name)] = to_pos(data[0] + self.offsets[0])

                for string_name in self.triangles['NWD']:
                    commands[self.string_names.index(string_name)] = to_pos(data[1] + self.offsets[1])

                for string_name in self.triangles['SWP']:
                    commands[self.string_names.index(string_name)] = to_pos(data[2] + self.offsets[2])

                for string_name in self.triangles['SWD']:
                    commands[self.string_names.index(string_name)] = to_pos(data[3] + self.offsets[3])
                
                for string_name in self.triangles['SEP']:
                    commands[self.string_names.index(string_name)] = to_pos(data[4] + self.offsets[4])
                
                for string_name in self.triangles['SED']:
                    commands[self.string_names.index(string_name)] = to_pos(data[5] + self.offsets[5])
                
                for string_name in self.triangles['NEP']:
                    commands[self.string_names.index(string_name)] = to_pos(data[6] + self.offsets[6])

                for string_name in self.triangles['NED']:
                    commands[self.string_names.index(string_name)] = to_pos(data[7] + self.offsets[7])
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
        #print(msg)
        self.socket.send_string(msg)
        
        reply = self.socket.recv()
        #print(reply)
        reply_components = reply.split() 
        self.lifetime = float(reply_components[0])
        pos = (float(reply_components[1]), float(reply_components[2]), float(reply_components[3])) #x, y, z coordinates
        if self.record_wait < self.lifetime: 
            if self.append_at_count == self.append_every:
                self.com_history.append(pos)
                self.append_at_count = 0
            else:
                self.append_at_count += 1

        #sleep(0.001) #sleep 1ms so Hammond's laptop can multitask

        #lifetime = float(message)
        
        return 0,0

    def reset(self):

        self.socket.send_string("reset") #send reset request to NTRTsim
        self.socket.recv() #throw away response

        self.lifetime = 0
        self.append_at_count = self.append_every
        self.com_history = []
