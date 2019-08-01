import hebi
from time import sleep
import math

class TestHebiMotors:

    def __init__(self, numModules=24):
        self.numModules = numModules
        self.largest_effort = 0
        self.smallest_effort = 1
        self.init_hebi()

    def init_hebi(self):
        # Fix from Hebi to properly dispose of Hebi python objects
        # Introduced in Hebi API v. 0.99.1
        hebi.util.clear_all_groups()

        # Discover the modules on the network and create a Hebi Group
        self.hebi_group = DiscoverModules(self.numModules)

        # Set command stuctures for SB motors
        self.hebi_cmd = hebi.GroupCommand(self.hebi_group.size)


        self.hebi_slope = -1.0
        self.hebi_offset = 110

        self.hebi_feedback = hebi.GroupFeedback(self.hebi_group.size)

        self.hebi_group.feedback_frequency = 50.0 #Reduces hebi NaN errors - see Massimo

        # Keep commands active indefinitely
        self.hebi_group.command_lifetime = 0

    def set_motors(self, action):
        # Converts from NTRT actions to SUPERball motor positions 
        #positions = action / 10 # Converts cable length from decimiters to meters
        #cmdMotorPositions = ( 100 * positions ) * self.hebi_slope + self.hebi_offset #Converts cable length into spool actuation
        while True:
            self.hebi_feedback = self.hebi_group.get_next_feedback(reuse_fbk = self.hebi_feedback)
            if self.hebi_feedback is not None:
                break
        
        #print("effort ", self.hebi_feedback.effort)
        #print("measured_pos", self.hebi_feedback.position)
        cur_efforts = self.hebi_feedback.effort
        cur_positions = self.hebi_feedback.position

        cmdMotorPositions = [0 for _ in range(self.numModules)]
        cmdMotorPositions[8] = action

        cmdMotorPositions[11] = action

        #only unwind a cable as long as it is tight
        for i in range(self.numModules):
            if cur_efforts[i] < 0.4 and cmdMotorPositions[i] < cur_positions[i]:
                cmdMotorPositions[i] = cur_positions[i] 

        self.hebi_cmd.position = cmdMotorPositions
        
        # self.hebi_cmd.effort[0] = 0.05
        # self.hebi_cmd.position_limit_min[0] = -20
        # self.hebi_cmd.position_limit_max[0] = -10

        self.hebi_group.send_command(self.hebi_cmd)


def DiscoverModules( numModules = 24 ):
    """Look for SUPERball v2 Hebi modules in the network and return their Hebi Group."""

    from hebi import Lookup
    from hebi import GroupCommand

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

    sleep(1)

    # try:
    #     for i in range(10):
    #         infoTableSB = GroupSB.request_info()
    #         if infoTableSB is not None:
    #             break
    #         print("infoTableSB is None, trying again (%d/10)" % (i+1))
    #         sleep(0.25)
    # except AttributeError:
    #     raise Exception('Attribute Error in GroupSB')
    
    # if infoTableSB is None:
    #     raise Exception('infoTableSB is None!')

    # try:
    #     print('{} module(s) found!'.format(len(infoTableSB.name)))
    # except AttributeError:
    #     raise Exception('Attribute Error in infoTableSB')

    # if len(infoTableSB.name) != numModules:
    #     raise Exception('Number of modules mismatch')
    
    # print('SUPERball Motors Found:')
    # for module in range(len(infoTableSB.name)):
    #     print(infoTableSB.name[module])

    return GroupSB

try:
    x = 1
    dir = 0.5
    count = 0
    hm = TestHebiMotors(numModules=24)
    while count < 3000:
        count += 1
        x += dir
        if x >= 5:
            dir = -0.5
        if x <= -130:
            dir = 0.5
        hm.set_motors(x)
        sleep(0.01)
except Exception as e:
    print("Exception:")
    print(e)


hebi.util.clear_all_groups()