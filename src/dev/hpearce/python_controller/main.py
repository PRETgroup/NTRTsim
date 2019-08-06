#/bin/python3

'''
@file main.py - entry point for controlling SUPERball under simulation, or in reality, using Nengo. See the README.md for details.
This file is a little messier than main_pso.py, as it may be altered freely to achieve the desired test behaviour at any time.

@author Hammond Pearce
@email hammond.pearce@auckland.ac.nz
@date 2019-07-06
'''


import superball
import realsuperball
import nengo_one_osc_no_readout
import numpy as np
import matplotlib.pyplot as plt
import nengo
import math
from time import sleep
import hebi

from datetime import datetime

def main():
    """
    main - the entry point for this program. This is used for examining in detail the results of a pso from main_pso.py.
    You can configure main using variables defined inside the function. See README.md for more details.
    """

    #configuration variables begin 
    now = datetime.now()
    dt_string = now.strftime("%Y_%m_%d__%H_%M_%S")

    use_real_superball = False   #Set to True to use the real robot (via hebi-py) instead of the simulated robot (via ZMQ)
    
    save_csv = False            #Set to True to save location data of the simulated robot (does nothing for real robot)
    display_graph = False       #Set to True to display results of the simulated robot (does nothing for real robot)
    baseline_sine = False       #Set to True to compute performance of robot with single sine oscillator. Note that it used to work a lot better with Marc's original model...
    noisy_sine = False          #Set to True to compute performance of robot with a noisy sine oscillator.

    #to define nengo experiments, go to where experiments = [] are defined in this function.
    
    simulation_time = 42
    stabilise_time = 2
    gauss_std = 0.1
    num_neurons = 500

    #IMPORTANT: the real robot can't keep up with nengo running at default speed and with oscillator running above about 0.5.
    #as a result, we have two options: we can either slow down nengo, or we can slow down the oscillator.
    #Control these options using the two variables nengo_simulation_dt and oscillator_multiplier
    nengo_simulation_dt = 0.001 #0.0006 #default is 0.001
    oscillator_multiplier = 1    #default is 0.6

    #variables defined using main_pso.py follow.

    #best oscillator settings, you may want to multiply first arg (which is w) by 0.6 if running on real robot since 
    # it can't keep up otherwise
    x = [0.943409155447694*oscillator_multiplier, 1.1362360516795893, 1.2498347185225787, 0.24354977039092154, 1.0820318501593955, 1.0] #-62
    
    #best pure triangles with fast oscillator:
    triangles =  [-0.3802, 0.9603, -0.9855, 0.9060, 0.5587, -0.3954, -0.0334, 0.9194]
    offsets = [0 for _ in range(8)]

    #best triangles+offsets with fast oscillator
    #triangles = [-0.7148297411036596,   0.3240215197811036, -0.9667154832748273,   0.8925040046624605,  -0.9883450720199211,  -0.30065676834917787,  0.852027854986793,     0.8963933944220774  ]
    #offsets =   [-0.10118825437204569, -0.3190824611222042, -0.15492661257500742, -0.30500607853487355, -0.24359791498258165, -0.08943241803886946, -0.027331519071941198, -0.009905225132451912]
    
    #second best triangles+offsets with slow osicllator
    #triangles = [-0.8432965632608778,  0.4152025040048478,  -0.6007319632860513,   0.7828493067287403,  -0.6503761579546807, -0.14796287857760093,  0.9288787300170274,  0.7732824824255025 ]
    #offsets =   [0.03297997152932941, -0.4268132031208452,   0.15693730330711403, -0.14096466982312605, -0.4333835180251198,  0.14232821633797144,  0.04323382213858212, 0.09722186863541799]

    #best triangles+offsets with slow osicllator
    #triangles = [-0.7414,  0.1060,  -0.9903,  0.9046, -0.8898, -0.3817,  0.9847,  0.9282 ]
    #offsets   = [ 0.1112, -0.3539,   0.0987, -0.4780, -0.3987,  0.0184, -0.0479,  0.1932 ]

    #even better triangles+offsets
    #triangles =  [-0.6001,  0.0,     -0.7113,  0.7986, -0.5856,    -0.5,     1.0,   1.0    ]
    #offsets   =  [ 0.0664, -0.5,     -0.25,   -0.5,    -0.3793, -0.1947,   -0.25,   0.0225 ]

    #robot definition location (you probably won't need to change this)
    global robot #a global makes it easier to catch errors with Ctrl+C
    if use_real_superball:
        robot = realsuperball.SUPERBall(stabilise_time=stabilise_time)
    else:
        robot = superball.SUPERBall(stabilise_time = stabilise_time)

    robot.set_offsets(offsets)
    print('Robot created')

    #robot definition location end

    #nengo experiment definition location

    #define and add more models and experiments as neccessary
    lif_model = nengo_one_osc_no_readout.get_model(robot, w = x[0], noisy = True, osc_mult = x[1], mu = x[2], tau_synapse = x[3], num_neurons = num_neurons, osc_radius = x[4], feedback_control = x[5], gauss_std=gauss_std, triangle_control=triangles)

    experiments = [ #format: ('experiment/model name', model)
        ('Here we go', lif_model)
    ]

    #nengo experiment definition location end

    #pure sine definition location begin

    sine_w = 0.25
    sine_osc_mult = 1
    sine_osc_radius = 1

    #pure sine definition location end

    #configuration section end

    #initialise storage variables
    exp_count = 0
    results = []

    # baseline_sine can give us an idea of our performance. Note that it used to work a lot better with Marc's original model...
    if baseline_sine:
        for _ in range(1):
            robot.reset()

            master_osc = [0] * 8        

            print("Experiment " + str(exp_count) + ": Sine simulation time: 0", end='')
            
            while robot.lifetime < simulation_time:
                print("\rExperiment " + str(exp_count) + ": Sine simulation time: " + str(robot.lifetime), end='')
                sTime = (sine_w/6 * robot.lifetime)
                osc = sine_osc_radius * math.sin(2*math.pi*sTime)
                    
                master_osc[0] = sine_osc_mult * osc
                master_osc[1] = -sine_osc_mult * osc
                master_osc[2] = -sine_osc_mult * osc
                master_osc[3] = sine_osc_mult * osc
                master_osc[4] = sine_osc_mult * osc
                master_osc[5] = -sine_osc_mult * osc
                master_osc[6] = -sine_osc_mult * osc
                master_osc[7] = sine_osc_mult * osc
                
                robot.__call__(0.001, master_osc)
                
            print("\nExperiment " + str(exp_count) + ": Sine simulation done.")
            
            if not use_real_superball:
                final_pos = robot.com_history[-1:]
                #format is x,y,z where y is height
                final_displ = math.sqrt(final_pos[0][0]**2 + final_pos[0][2]**2)
                final_angle = math.atan(final_pos[0][0] / final_pos[0][2])
                print("final_displ: " + "("+str(final_pos[0][0])+","+str(final_pos[0][2])+") " + str(final_displ) + ", final_angle: " + str(final_angle))
                exp_name = 'Pure Sinusoid'

                result = (exp_name, [pos[::2] for pos in robot.com_history])
                if save_csv:
                    with open('results/' + dt_string + '_results'+str(exp_count)+'_'+exp_name+'.csv', 'w') as file:
                        file.write('row,col\n')
                        positions = result[1]
                        for position in positions:
                            file.write(str(position[0]) + ","  + str(position[1]) + "\n")
                
                if display_graph:
                    results.append( result, )
            else: #real superball
                print("No real data collected.")

            exp_count += 1

    if noisy_sine:
        robot.reset()

        master_osc = [0] * 8   
        gauss_dist = nengo.dists.Gaussian(mean=0,std=gauss_std)     

        print("Experiment " + str(exp_count) + ": Noisy sine simulation time: 0", end='')
        while robot.lifetime < simulation_time:
            print("\rExperiment " + str(exp_count) + ": Noisy sine simulation time: " + str(robot.lifetime), end='')
            sTime = (sine_w/6 * robot.lifetime)
            noise = gauss_dist.sample(1)[0]
            if noise > 1: 
                noise = 1
            if noise < -1:
                noise = -1
            osc = math.sin(2*math.pi*sTime + noise) #* (1 + noise)
                
            master_osc[0] = 1.1 * osc
            master_osc[1] = -1.1 * osc
            master_osc[2] = -1.1 * osc
            master_osc[3] = 1.1 * osc
            master_osc[4] = 1.1 * osc
            master_osc[5] = -1.1 * osc
            master_osc[6] = -1.1 * osc
            master_osc[7] = 1.1 * osc
            
            robot.__call__(0.001, master_osc)
        
        print("\nExperiment " + str(exp_count) + ": Noisy sine simulation done.")
        
        if not use_real_superball:
            final_pos = robot.com_history[-1:]
            #format is x,y,z where y is height
            final_displ = math.sqrt(final_pos[0][0]**2 + final_pos[0][2]**2)
            final_angle = math.atan(final_pos[0][0] / final_pos[0][2])
            print("final_displ: " + "("+str(final_pos[0][0])+","+str(final_pos[0][2])+") " + str(final_displ) + ", final_angle: " + str(final_angle))
            exp_name = 'Noisy Sinusoid ('+ str(gauss_std) + ')'
            result = (exp_name, [pos[::2] for pos in robot.com_history])
            if save_csv:
                with open('results/' + dt_string + '_results'+str(exp_count)+'_' + exp_name+'.csv', 'w') as file:
                    file.write('x,z\n')
                    positions = result[1]
                    for position in positions:
                        file.write(str(position[0]) + ","  + str(position[1]) + "\n")
            
            if display_graph:
                results.append( result, )

        else: #real_superball
            print("No real data collected")

        exp_count += 1

    for experiment in experiments:
        exp_name = experiment[0]
        model = experiment[1]
        with nengo.Simulator(model, dt=nengo_simulation_dt) as sim:
            print("Experiment " + str(exp_count) + ": (Nengo) " + exp_name)

            robot.reset()
            sim.run(simulation_time)

            if not use_real_superball:
                result = (exp_name, [pos[::2] for pos in robot.com_history])

                if save_csv:
                    with open('results/' + dt_string + '_results'+str(exp_count)+'_' + exp_name+'.csv', 'w') as file:
                        file.write('x,z\n')
                        positions = result[1]
                        for position in positions:
                            file.write(str(position[0]) + ","  + str(position[1]) + "\n")

                if display_graph:
                    results.append(result, )

                final_pos = robot.com_history[-1:]
                #format is x,y,z where y is height
                final_displ = math.sqrt(final_pos[0][0]**2 + final_pos[0][2]**2)
                final_angle = math.atan(final_pos[0][0] / final_pos[0][2])
                print("\nExperiment " + str(exp_count) + ": (Nengo) " + experiment[0] + " done.")
                print("final_displ: " + "("+str(final_pos[0][0])+","+str(final_pos[0][2])+") " + str(final_displ) + ", final_angle: " + str(final_angle))

            else:
                print("No real data collected")

        exp_count += 1

    
    

    if display_graph:
        #color_i = 0
        #color_N = len(results)
        #cmap = plt.get_cmap('jet_r')
        fig = plt.figure()
        ax = fig.add_subplot(111)
        for result in results:
            #color = cmap(float(color_i)/color_N)
            label = str(result[0])
            positions = result[1]
            ax.plot(*zip(*positions), label=label)
            #color_i += 1
        ax.legend()
        ax.set_xlabel('X Displacement (dm)')
        ax.set_ylabel('Z Displacement (dm)')
        plt.title(str(simulation_time-stabilise_time)+'s Movement Simulation')
        plt.show()

robot = None
if __name__ == '__main__':
    try:
        main()
        robot.reset()
    except KeyboardInterrupt:
        if robot is not None:
            robot.reset()
        print("Keyboard abort")

    if robot is not None:
        robot.reset()
    hebi.util.clear_all_groups()


