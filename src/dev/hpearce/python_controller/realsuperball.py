#!/usr/bin/python3

import hebi
from time import sleep

class SUPERBall:
    def __init__(self, stabilise_time=2, record_wait=0):
        self.lifetime = 0.0
        self.stabilise_time = stabilise_time
        self.record_wait = record_wait

        #we'll use these numbers to reduce our memory impact when graphing history
        self.append_every = 2
        self.append_at_count = self.append_every
        self.offsets = [0 for _ in range(8)] 
        
        self.init_hebi()

        prefix = 'M'

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

    def init_hebi(self):
        # Fix from Hebi to properly dispose of Hebi python objects
        # Introduced in Hebi API v. 0.99.1
        hebi.util.clear_all_groups()

        # Discover the modules on the network and create a Hebi Group
        self.hebi_group = DiscoverModules()

        # Set command stuctures for SB motors
        self.hebi_cmd = hebi.GroupCommand(self.hebi_group.size)


        self.hebi_slope = -1.0
        self.hebi_offset = 110

        self.hebi_feedback = hebi.GroupFeedback(self.hebi_group.size)

        self.hebi_group.feedback_frequency = 1000.0 #Reduces hebi NaN errors - see Massimo

        # Keep commands active indefinitely
        self.hebi_group.command_lifetime = 0
        print("hebi initialised")


    def set_offsets(self, offsets):
        self.offsets = offsets

    def __call__(self, dt, data):

        #reset command list
        commands = [0 for _ in range(24)] 

        # when sending in a number, it is a percentage of the original rest length. 
        # So, 0.5 = 50% of the original length, 2 = 200% of the original length

        #data is a vector of length 8 representing values for each of the 8 triangles

        #transmitting a 0.6 gives a nice round SUPERball. Ideally transmit numbers between 0 and 1.

        def to_radians(val):
            return val/2 #min(max(val*2,-3.1),3.1) #outside the range -3.3 to 3.3 the simulator might crash

        if self.lifetime > self.stabilise_time:
            
            for string_name in self.triangles['NWP']:
                commands[self.string_names.index(string_name)] = to_radians(data[0] + self.offsets[0])

            for string_name in self.triangles['NWD']:
                commands[self.string_names.index(string_name)] = to_radians(data[1] + self.offsets[1])

            for string_name in self.triangles['SWP']:
                commands[self.string_names.index(string_name)] = to_radians(data[2] + self.offsets[2])

            for string_name in self.triangles['SWD']:
                commands[self.string_names.index(string_name)] = to_radians(data[3] + self.offsets[3])
            
            for string_name in self.triangles['SEP']:
                commands[self.string_names.index(string_name)] = to_radians(data[4] + self.offsets[4])
            
            for string_name in self.triangles['SED']:
                commands[self.string_names.index(string_name)] = to_radians(data[5] + self.offsets[5])
            
            for string_name in self.triangles['NEP']:
                commands[self.string_names.index(string_name)] = to_radians(data[6] + self.offsets[6])

            for string_name in self.triangles['NED']:
                commands[self.string_names.index(string_name)] = to_radians(data[7] + self.offsets[7])
        
        #first we get the feedback from hebi
        while True:
            self.hebi_feedback = self.hebi_group.get_next_feedback(reuse_fbk = self.hebi_feedback)
            if self.hebi_feedback is not None:
                break
            
        #print("effort ", self.hebi_feedback.effort)
        #print("measured_pos", self.hebi_feedback.position)
        cur_efforts = self.hebi_feedback.effort
        cur_positions = self.hebi_feedback.position

        default_string_length = 105 #remember commands[i] is in form of a percentage
        hebi_motor_commands = [0 for _ in range(24)]
        for i in range(len(commands)):
            hebi_motor_commands[i] = (commands[i] * default_string_length) * self.hebi_slope 

        min_effort_to_unwind = 0.4
        max_effort_to_wind = 4

        #only unwind a cable as long as it is tight
        #only wind a cable as long as the effort isn't too high (we don't want to snap anything (again))
        for i in range(24):
            if cur_efforts[i] < min_effort_to_unwind and hebi_motor_commands[i] < cur_positions[i]:
                hebi_motor_commands[i] = cur_positions[i] 
            elif cur_efforts[i] > max_effort_to_wind and hebi_motor_commands[i] > cur_positions[i]:
                hebi_motor_commands[i] = cur_positions[i]
        
        
        #msg =  ' '.join([self.string_names[i]+":"+str(commands[i]) for i in range(24)])
        #print(hebi_motor_commands)

        self.hebi_cmd.position = hebi_motor_commands
        self.hebi_group.send_command(self.hebi_cmd)
        #sleep(0.001)
        self.lifetime += 0.001
        #self.socket.send_string(msg)
        
        #reply = self.socket.recv()
        #print(reply)
        # reply_components = reply.split() 
        # self.lifetime = float(reply_components[0])
        # pos = (float(reply_components[1]), float(reply_components[2]), float(reply_components[3])) #x, y, z coordinates
        # if self.record_wait < self.lifetime: 
        #     if self.append_at_count == self.append_every:
        #         self.com_history.append(pos)
        #         self.append_at_count = 0
        #     else:
        #         self.append_at_count += 1

        #sleep(0.001) #sleep 1ms so Hammond's laptop can multitask

        #lifetime = float(message)
        
        return 0,0

    def reset(self):
        hebi_motor_commands = [0 for _ in range(24)]
        self.hebi_cmd.position = hebi_motor_commands
        self.hebi_group.send_command(self.hebi_cmd)
        sleep(0.5)
        hebi_motor_commands = [0 for _ in range(24)]
        self.hebi_cmd.position = hebi_motor_commands
        self.hebi_group.send_command(self.hebi_cmd)
        sleep(0.25)

        self.lifetime = 0
        self.append_at_count = self.append_every
        self.com_history = []



def DiscoverModules( numModules = 24 ):
    """Look for SUPERball v2 Hebi modules in the network and return their Hebi Group."""

    from hebi import Lookup
    from hebi import GroupCommand
    from time import sleep

    # Module Names on SUPERball V2 [M01 M02 ... M24]
    SBModuleNames = (['M' + str(i + 1).zfill(2) for i in range(numModules)])

    # Get table of all Hebi motors
    lookup = Lookup()
    sleep(2)  # gives the Lookup process time to discover modules

    # Count how many modules were found
    num_modules_found = 0
    for entry in lookup.entrylist:
        num_modules_found = num_modules_found + 1

    if num_modules_found == 0:
        # No modules were found!
        raise Exception('No modules found!')
    elif num_modules_found != numModules:
        # Module number mismatch
        raise Exception('Could not find all the modules!')

    # Get the modules using the correct name order 
    GroupSB = lookup.get_group_from_names('*', SBModuleNames)

    try:
        if GroupSB.size == 0:
            # Empty group!
            raise Exception('GroupSB is empty!')
        elif GroupSB.size != numModules:
            # Module number mismatch
            raise Exception('GroupSB size mismatch!')
    except AttributeError:
        raise Exception('Attribute Error while accessing GroupSB.size')

    return GroupSB
    try:
        for i in range(15):
            infoTableSB = GroupSB.request_info()
            if infoTableSB is not None:
                break
    except AttributeError:
        raise Exception('Attribute Error in GroupSB')
    
    if infoTableSB is None:
        raise Exception('infoTableSB is None!')

    try:
        print('{} module(s) found!'.format(len(infoTableSB.name)))
    except AttributeError:
        raise Exception('Attribute Error in infoTableSB')

    if len(infoTableSB.name) != numModules:
        raise Exception('Number of modules mismatch')
    
    print('SUPERball Motors Found:')
    for module in range(len(infoTableSB.name)):
        print(infoTableSB.name[module])

    return GroupSB