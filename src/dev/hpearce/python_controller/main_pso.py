#/bin/python3

'''
@file main_pso.py - entry point for optimising SUPERball under simulation using Nengo. See the README.md for details.

@author Hammond Pearce
@email hammond.pearce@auckland.ac.nz
@date 2019-07-06
'''

import superball
import numpy as np
import nengo_one_osc_no_readout
import nengo
import matplotlib.pyplot as plt
import math
from pyswarm import pso

from datetime import datetime

exp_count = 0

def pure_sine_simulation(robot, w_set, osc_mult, simulation_time, lead_str):
    """
    pure_sine_simulation is used as a placeholder function for debugging pso without using nengo as a controller.
    It won't really give good results to score. 
    """

    master_osc = [0] * 8    
    while robot.lifetime < simulation_time:
        print("\r" + lead_str + " sine simulation time: "+ str(robot.lifetime), end='')
        sTime = (w_set/6 * robot.lifetime)
        osc = math.sin(2*math.pi*sTime)
            
        master_osc[0] = osc_mult * osc
        master_osc[1] = -osc_mult * osc
        master_osc[2] = -osc_mult * osc
        master_osc[3] = osc_mult * osc
        master_osc[4] = osc_mult * osc
        master_osc[5] = -osc_mult * osc
        master_osc[6] = -osc_mult * osc
        master_osc[7] = osc_mult * osc
        
        robot.__call__(0.001, master_osc)

def get_robot_score(x, *args):
    """
    get_robot_score is a function called by pso which will, depending on the mode set (in *args), call NTRT via ZMQ and score the performance.
    The mode chooses how the performance is scored. 
    Configure this function using the configuration variables in main()
    """

    global exp_count

    #these vars are only used in the pure_sine mode
    w_set = x[0]
    osc_mult = x[1]

    #extract the args from *xargs
    mode, robot, simulation_time, num_sim_iter, save_csv, csv_file_name, gauss_std, abort_tolerance, min_req_displ, num_neurons, use_params = args
    
    #configure initial variables
    avg_final_displ = 0 
    final_angles = []
    final_displs = []
    final_x_displs = []
    avg_angles = []

    #when using nengo_lif_target_trajectory, this sets the target trajectory as 0 radians
    target_angle = 0

    lif_model = None

    if mode == 'nengo_lif_maximum_displacement_enable_offsets' or mode == 'nengo_lif_maximum_x_displacement_enable_offsets':
        robot.set_offsets(x[8:16])

    if mode == 'nengo_lif':
        lif_model = nengo_one_osc_no_readout.get_model(robot, w = x[0], noisy = True, osc_mult = x[1], mu = x[2], tau_synapse = x[3], num_neurons = num_neurons, osc_radius = x[4], feedback_control = x[5], gauss_std=gauss_std)
    if mode == 'nengo_lif_target_trajectory' or mode == 'nengo_lif_maximum_displacement' or mode == 'nengo_lif_maximum_displacement_enable_offsets' or mode == 'nengo_lif_maximum_x_displacement_enable_offsets':
        lif_model = nengo_one_osc_no_readout.get_model(robot, w = use_params[0], noisy = True, osc_mult = use_params[1], mu = use_params[2], tau_synapse = use_params[3], num_neurons = num_neurons, osc_radius = use_params[4], feedback_control = use_params[5], gauss_std=gauss_std, triangle_control=x)
    

    aborted = False #this variable is set to true if the system aborts due to too much inconsistency
    
    final_exp_iter = 0
    for exp_iter in range(num_sim_iter):
        robot.reset()
        
        if mode == 'pure_sine':
            lead_str = "Run " + str(exp_count) + "["+str(exp_iter)+"] (w_set = " + str(w_set) + ", osc_mult = " + str(osc_mult) + "):"
            print(lead_str + " sine simulation time: 0", end='')
            pure_sine_simulation(robot, w_set, osc_mult, simulation_time, lead_str)
        elif mode == 'nengo_lif' or mode == 'nengo_lif_target_trajectory' or mode == 'nengo_lif_maximum_displacement' or mode == 'nengo_lif_maximum_displacement_enable_offsets' or mode == 'nengo_lif_maximum_x_displacement_enable_offsets':
            lead_str = "Nengo Run " + str(exp_count) + "["+str(exp_iter)+"]"
            print(lead_str)
            with nengo.Simulator(lif_model) as sim:
                sim.run(simulation_time)

        #get the distance and angle
        start_pos = robot.com_history[0]
        final_pos = robot.com_history[-1]
        final_x_displ = final_pos[0] - start_pos[0]
        final_z_displ = final_pos[2] - start_pos[2]

        #format is x,y,z where y is height
        final_displ = math.sqrt(final_x_displ**2 + final_z_displ**2)
        final_angle = math.atan(final_x_displ / final_z_displ)

        #get the average angle
        avg_angle = 0
        for pos in robot.com_history:
            pos_x_displ = pos[0] - start_pos[0]
            pos_z_displ = pos[2] - start_pos[2]
            if pos_z_displ == 0: #prevent divide by zero errors
                pos_z_displ = 0.0001
            avg_angle += math.atan(pos_x_displ / pos_z_displ)
        avg_angle /= len(robot.com_history)

        print("\r" + lead_str + " final_displ: " + "("+str(final_pos[0])+","+str(final_pos[2])+") " + str(final_displ) + ", avg_angle: " + str(avg_angle))
        avg_final_displ += final_displ

        if save_csv:
            with open(csv_file_name, 'a') as file:
                file.write("\n") #we start the write with a newline character so the end of a set can have a score appended
                if mode == 'pure_sine':
                    line = str(exp_count) + "," + str(exp_iter) + "," + str(w_set) + "," + str(osc_mult) + "," + str(final_pos[0])+ ","+ str(final_pos[2]) + "," + str(final_displ) + "," + str(final_angle) + "," + str(avg_angle) + ","
                elif mode == 'nengo_lif':
                    line = str(exp_count) + "," + str(exp_iter) + "," + str(x[0]) + "," + str(x[1]) + "," + str(x[2]) + "," + str(x[3]) + "," + str(x[4]) + "," + str(x[5]) + "," + str(final_pos[0])+ ","+ str(final_pos[2]) + "," + str(final_displ) + "," + str(final_angle) + "," + str(avg_angle) + ","
                elif mode == 'nengo_lif_target_trajectory' or mode == 'nengo_lif_maximum_displacement':
                    line = str(exp_count) + "," + str(exp_iter) + "," + str(x[0]) + "," + str(x[1]) + "," + str(x[2]) + "," + str(x[3]) + "," + str(x[4]) + "," + str(x[5]) + "," + str(x[6]) + "," + str(x[7]) + "," + str(final_pos[0])+ ","+ str(final_pos[2]) + "," + str(final_displ) + "," + str(final_angle) + "," + str(avg_angle) + ","
                elif mode == 'nengo_lif_maximum_displacement_enable_offsets' or mode == 'nengo_lif_maximum_x_displacement_enable_offsets':
                    line = str(exp_count) + "," + str(exp_iter) + "," + str(x[0]) + "," + str(x[1]) + "," + str(x[2]) + "," + str(x[3]) + "," + str(x[4]) + "," + str(x[5]) + "," + str(x[6]) + "," + str(x[7]) + "," + str(x[8]) + "," + str(x[9]) + "," + str(x[10]) + "," + str(x[11]) + "," + str(x[12]) + "," + str(x[13]) + "," + str(x[14]) + "," + str(x[15]) + "," + str(final_pos[0])+ ","+ str(final_pos[2]) + "," + str(final_displ) + "," + str(final_angle) + "," + str(avg_angle) + ","
                
                file.write(line)

        if mode == 'nengo_lif_target_trajectory':
            if abs(final_angle - target_angle) > abort_tolerance:
                aborted = True

        if mode == 'nengo_lif' or mode == 'pure_sine' or mode == 'nengo_lif_maximum_displacement' or mode == 'nengo_lif_maximum_displacement_enable_offsets':
            #check if we want to abort
            for prev_final_angle in final_angles:
                if abs(prev_final_angle - final_angle) > abort_tolerance:
                    aborted = True
        
        if final_displs: #if it's at least the second run, then check if the distance is acceptable compared with the minimum required
            if final_displ < min_req_displ:
                aborted = True

        final_angles.append(final_angle)
        final_displs.append(final_displ)
        final_x_displs.append(final_x_displ)
        avg_angles.append(avg_angle)
        final_exp_iter = exp_iter

        if aborted:
            break

    #endfor

    #it's difficult to come up with a good scoring algorithm. Below are my attempts for the different modes.
    #You'll probably want to change these a lot depending on what you're doing.
    #i've played with finding the differences between final_angles, the average_angles, the displacements...

    score = None
    if mode == 'pure_sine' or mode == 'nengo_lif' or mode == 'nengo_lif_maximum_displacement' or mode == 'nengo_lif_maximum_displacement_enable_offsets':
        avg_final_displ /= num_sim_iter
        max_angle_diff = abs((max(final_angles) - min(final_angles)))
        
        # if we aborted then num_sim_iter and final_exp_iter will differ
        # we assume the angle difference could have been worse based on the time before this went wrong
        max_angle_diff *= ((num_sim_iter - final_exp_iter))
    
        #increase the 5 to emphasize the displacement reward
        #increase the 0.08 to cap the accuracy reward
        score = -( (5 * min(final_displs))**2 / (0.08 + max_angle_diff))
    
    if mode == 'nengo_lif_target_trajectory':
        avg_final_displ /= num_sim_iter
        max_angle_diff = 0
        for angle in avg_angles:
            if abs(angle - target_angle) > max_angle_diff:
                max_angle_diff = abs(angle - target_angle)
        
        score = -( (2 * min(final_displs))**2 / (0.05 + max_angle_diff))

    if mode == 'nengo_lif_maximum_x_displacement_enable_offsets': 
        #todo: this scoring function is pretty tragic and doesn't work well (PSO didn't want to converge on a useful solution with it)
        max_angle_diff = abs((max(final_angles) - min(final_angles)))
        max_angle_diff *= ((num_sim_iter - final_exp_iter))
        
        score = -( (2 * min(final_x_displs))**2 / (0.05 + max_angle_diff))

    if save_csv:
        with open(csv_file_name, 'a') as file:
            line = str(score)
            file.write(line)

    exp_count += 1
    return score

def main():
    """
    main - this function is for running the pso algorithm developed by Hammond over the 2019 Summer Internship
    Configuration of the PSO algorithm is done internal to this function.
    """
    #configuration is done using the variables below:

    now = datetime.now()
    dt_string = now.strftime("%Y_%m_%d__%H_%M_%S")
    csv_file_name = "./pso_results/" + dt_string + "_pso_results.csv"
    log_file_name = "./pso_results/" + dt_string + "_pso_results.txt"

    save_csv = True       #save each PSO result to a file. I strongly recommend leaving this set to true.
    
    simulation_time = 61  #how long should each simulation run? the best results are >45 seconds.
    stabilise_time = 1    #a stabilisation time of between 1-3 seconds is good for NTRTsim.
    
    num_sim_iter = 4      #how many iterations of a given set of parameters should be performed? Good for scoring accuracy/consistency.
                          #i like values of between 3-9
                          #abort paremeters (below) control if all iterations are performed

    gauss_std = 0.1       #how noisy should our LIF neurons be?
    num_neurons = 500     #how many neurons will our system have? (I always set this to 500)
    
    abort_tolerance = 0.1 #if we are doing a mode with aborted iterations, how large may the tolerance between final angles be?
    min_req_displ = 20    #if we are doing a mode with aborted iterations, what is the minimum required displacement (dm)? 
                          #(consider the length of the simulation time when setting this - obviously a short sim with a large displacement
                          # will result in all iterations being preemptively aborted)
    
    record_wait = 0       #when scoring, how long to wait before we set the 0 point? I usually set this to 0, but
                          # sometimes it is necessary to put it higher (if for instance the initial config of the robot is
                          # messing with your results)

    pso_maxiter = 30      #PSO configuration: how many PSO iterations will you perform? (The higher the better, but the longer it will take)
    pso_swarmsize = 30    #PSO configuration: how large is the swarm size? (The higher the better, but the longer it will take)

    #choose your mode below: these are the options.
    #if you are unsure, nengo_lif_maximum_displacement_enable_offsets is a good default (although it doesn't care about steering).

    #mode = 'pure_sine'                                      #optimising for a pure sine wave (freq + amp): mostly only useful for debugging. This was done using Marc's original model and may no longer be compatible
    #mode = 'nengo_lif'                                      #optimising the oscillator params. This was done using Marc's original model and may no longer give satisfactory results, as the symmetrical robot no longer rolls on its own.
    #mode = 'nengo_lif_maximum_displacement'                 #using the best oscillator, let us try and deduce triangle params to get maximum distance (with accuracy)
    #mode = 'nengo_lif_target_trajectory'                    #using the best oscillator, let us try and deduce triangle params to get maximum distance (with accuracy) to target trajectory 0 radians
    #mode = 'nengo_lif_maximum_displacement_enable_offsets'  #using the best oscillator, let us try and deduce triangle params+offsets to get maximum distance (with accuracy)
    mode = 'nengo_lif_maximum_x_displacement_enable_offsets' #using the best oscillator, let us try and deduce triangle params+offsets to get maximum distance in x dimension (with accuracy)

    #end configuration variables

    pso_lb = None
    pso_ub = None
    constraints = []
    use_params = None

    #PSO setup. You may change the upper and lower bound variables to have more targeted optimisation strategies if suitable
    # (it can be hard to judge what is suitable)
    # The format of _lb and _ub is denoted in a comment at the start of each mode
    if mode == 'pure_sine': #format: [w_set, osc_mult]
        pso_lb = [0.7, 0.8]
        pso_ub = [1.5, 1.7]
    if mode == 'nengo_lif': #format: [w_set, osc_mult, mu, tau_synapse, osc_radius, feedback_control]
        #pso_lb = [0.9, 0.9, 0.9, 0.1, 0.8, 0.8]
        #pso_ub = [1.7, 1.5, 1.3, 0.35, 1.2, 1.8] 
        pso_lb = [0.15, 1.1, 1.2, 0.18, 0.9, 1]
        pso_ub = [0.40, 1.3, 1.3, 0.26, 1.1, 1.2] 
    
        def no_negative_control_value(x, *args): #make sure that osc_mult * radius doesn't exceed 1.65
            return 1.65 - x[1] * x[4]
        constraints = [no_negative_control_value]
    
    if mode == 'nengo_lif_maximum_displacement': #format [triangle[0], triangle[1],..., triangle[7]]
        #pso_lb = [-1, -1, -1, -1, -1, -1, -1, -1]
        #pso_ub = [1, 1, 1, 1, 1, 1, 1, 1]
        #use_params = [0.943409155447694*0.6, 1.1362360516795893, 1.2498347185225787, 0.24354977039092154, 1.0820318501593955, 1.0]
        pso_lb = [-0.5, 0.7, -1,   0.5, 0.25,  0.25, -0.25, 0.5]
        pso_ub = [ 0,   1,   -0.7,   1, 0.75,  0.75,  0.25, 1  ]
        use_params = [0.943409155447694, 1.1362360516795893, 1.2498347185225787, 0.24354977039092154, 1.0820318501593955, 1.0]

    if mode == 'nengo_lif_target_trajectory': #format [triangle[0], triangle[1],..., triangle[7]]
        pso_lb = [-1, -1, -1, -1, -1, -1, -1, -1]
        pso_ub = [1, 1, 1, 1, 1, 1, 1, 1]
        use_params = [0.943409155447694, 1.1362360516795893, 1.2498347185225787, 0.24354977039092154, 1.0820318501593955, 1.0]

    if mode == 'nengo_lif_maximum_displacement_enable_offsets': #format [triangle[0], triangle[1],..., triangle[7], offsets[0], offsets[1], ..., offsets[7]]
        pso_lb = [-1,    0,   -1,   0.5,  -1,    -0.5, 0.5, 0.5, -0.25, -0.5, -0.25, -0.5, -0.5, -0.25, -0.25, -0.25]
        pso_ub = [-0.5,  0.5, -0.5,   1,   -0.5,  0  ,   1,  1,   0.25,    0,  0.25,  0  ,  0  ,  0.25,  0.25,  0.25]
        use_params = [0.943409155447694*0.6, 1.1362360516795893, 1.2498347185225787, 0.24354977039092154, 1.0820318501593955, 1.0]

    if mode == 'nengo_lif_maximum_x_displacement_enable_offsets': #format [triangle[0], triangle[1],..., triangle[7], offsets[0], offsets[1], ..., offsets[7]
        pso_lb = [-1, -1, -1, -1, -1, -1, -1, -1, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5]
        pso_ub = [1, 1, 1, 1, 1, 1, 1, 1, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5]
        use_params = [0.943409155447694*0.6, 1.1362360516795893, 1.2498347185225787, 0.24354977039092154, 1.0820318501593955, 1.0]
    
    #let us determine an approx upper limit for the number of simulations (it will be saved in the .txt for perusal later)
    approx_runs = num_sim_iter * pso_maxiter * pso_swarmsize

    #construct the robot and the robot's arguments to be passed into the simulation control environment
    robot = superball.SUPERBall(stabilise_time = stabilise_time, record_wait=record_wait)
    args = (mode, robot, simulation_time, num_sim_iter, save_csv, csv_file_name, gauss_std, abort_tolerance, min_req_displ, num_neurons, use_params)
    print("PSO commence")

    if save_csv: #each mode has different formats for the saved csv
        with open(csv_file_name, 'w') as file:
            if mode == 'pure_sine':
                file.write('run,run_iter,w_set,osc_mult,final_x,final_z,final_displ,final_angle,avg_angle,score')
            elif mode == 'nengo_lif':
                file.write('run,run_iter,w_set,osc_mult,mu,tau_synapse,osc_radius,feedback_control,final_x,final_z,final_displ,final_angle,avg_angle,score')
            elif mode == 'nengo_lif_target_trajectory' or mode == 'nengo_lif_maximum_displacement':
                file.write('run,run_iter,triangles[0],triangles[1],triangles[2],triangles[3],triangles[4],triangles[5],triangles[6],triangles[7],final_x,final_z,final_displ,final_angle,avg_angle,score')
            elif mode == 'nengo_lif_maximum_displacement_enable_offsets' or mode == 'nengo_lif_maximum_x_displacement_enable_offsets':
                file.write('run,run_iter,triangles[0],triangles[1],triangles[2],triangles[3],triangles[4],triangles[5],triangles[6],triangles[7],offsets[0],offsets[1],offsets[2],offsets[3],offsets[4],offsets[5],offsets[6],offsets[7],final_x,final_z,final_displ,final_angle,avg_angle,score')

        with open(log_file_name, 'w') as file:
            file.write('PSO run with the following params:\n')
            file.write('mode: ' + mode + '\n')
            file.write('simulation_time: ' + str(simulation_time) + '\n')
            file.write('stabilise_time: ' + str(stabilise_time) + '\n')
            file.write('num_sim_iter: ' + str(num_sim_iter) + '\n')
            file.write('gauss_std: ' + str(gauss_std) + '\n')
            file.write('num_neurons: ' + str(num_neurons) + '\n')
            file.write('abort_tolerance: ' + str(abort_tolerance) + '\n')
            file.write('pso_lb: ' + str(pso_lb) + '\n')
            file.write('pso_ub: ' + str(pso_ub) + '\n')
            file.write('pso_maxiter: ' + str(pso_maxiter) + '\n')
            file.write('pso_swarmsize: ' + str(pso_swarmsize) + '\n')
            file.write('approx_runs: ' + str(approx_runs) + '\n')


    #actually perform the requested pso
    xopt, fopt = pso(get_robot_score, pso_lb, pso_ub, args=args, maxiter=pso_maxiter, swarmsize=pso_swarmsize, ieqcons=constraints)

    #print the best result
    print(xopt, fopt)

    if save_csv:
        with open(log_file_name, 'a') as file:
            file.write('\n')
            file.write('final_result_x:' + str(xopt) + '\n')
            file.write('final_result_f:' + str(fopt) + '\n')


if __name__ == '__main__':
    main()


