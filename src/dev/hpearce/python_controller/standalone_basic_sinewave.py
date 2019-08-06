'''
@file standalone_basic_sinewave.py - a debugging/test script for the Nengo/Superball project

@author Hammond Pearce and P. Michael Furlong 
@email hammond.pearce@auckland.ac.nz and furlong@nasa.gov
@date 2019-06-13
'''

import nengo
import numpy as np
import superball
import matplotlib.pyplot as plt
import math

from datetime import datetime

def stim_func(t):
    if t < 1.0:
        return 1
    else:
        return 0
    ### end if
### end stim_func

def main():

    now = datetime.now()
    dt_string = now.strftime("%Y_%m_%d__%H_%M_%S")

    robot = superball.SUPERBall()
    print('Robot created')
    results = []
    exp_count = 0
    for w_set in [0.8]*9 + [1]*9 + [1.2] * 9:
        robot.reset()

        master_osc = [0] * 8        

        while robot.lifetime < 62:
            print(robot.lifetime)
            sTime = (w_set / 10 * robot.lifetime)
            osc = math.sin(2*math.pi*sTime)
                
            master_osc[0] = 1.1 * osc
            master_osc[1] = -1.1 * osc
            master_osc[2] = -1.1 * osc
            master_osc[3] = 1.1 * osc
            master_osc[4] = 1.1 * osc
            master_osc[5] = -1.1 * osc
            master_osc[6] = -1.1 * osc
            master_osc[7] = 1.1 * osc
            
            robot.__call__(0.001, master_osc)
        
        
        result = (w_set, [pos[::2] for pos in robot.com_history])
        results.append( result, )

        with open('./results/' + dt_string + '_results'+str(exp_count)+'_w=' + str(result[0])+'.csv', 'w') as file:
            file.write('row,col\n')
            positions = result[1]
            for position in positions:
                file.write(str(position[0]) + ","  + str(position[1]) + "\n")
        
        exp_count += 1

    ### end for

    color_i = 0
    color_N = len(results)
    cmap = plt.get_cmap('jet_r')
    fig = plt.figure()
    ax = fig.add_subplot(111)
    for result in results:
        color = cmap(float(color_i)/color_N)
        label = "w = " + str(result[0])
        positions = result[1]
        ax.plot(*zip(*positions), c=color, label=label)
        color_i += 1
    ax.legend()
    plt.show()

if __name__ == '__main__':
    main()
