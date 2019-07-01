'''
@file main.py - entry point for controlling SUPERball from Nengo

@author P. Michael Furlong 
@email furlong@nasa.gov
@date 2019-06-13
'''

import nengo
import numpy as np
import superball
import matplotlib.pyplot as plt
import math

def stim_func(t):
    if t < 1.0:
        return 1
    else:
        return 0
    ### end if
### end stim_func

def main():

    robot = superball.SUPERBall()
    print('Robot created')
    results = []
    for w_set in [1.25]: #0.25, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2]:
        robot.reset()


        master_osc = [0] * 8        

        while robot.lifetime < 60:
            print(robot.lifetime)
            sTime = (w_set / 10 * robot.lifetime)
            osc = math.sin(2*math.pi*sTime)
                
            master_osc[0] = 1 * osc
            master_osc[1] = -1 * osc
            master_osc[2] = -1 * osc
            master_osc[3] = 1 * osc
            master_osc[4] = 1 * osc
            master_osc[5] = -1 * osc
            master_osc[6] = -1 * osc
            master_osc[7] = 1 * osc
            
            robot.__call__(0.001, master_osc)
        
        
        results.append( (w_set, [pos[::2] for pos in robot.com_history]), )

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
