
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
    global exp_count

    w_set = x[0]
    osc_mult = x[1]

    mode, robot, simulation_time, num_sim_iter, save_csv, csv_file_name, gauss_std, abort_tolerance, min_req_displ = args
    
     
    avg_final_displ = 0 
    final_angles = []
    final_displs = []

    lif_model = None
    if mode == 'nengo_lif':
        lif_model = nengo_one_osc_no_readout.get_model(robot, w = x[0], noisy = True, osc_mult = x[1], mu = x[2], tau_synapse = x[3], num_neurons = 400, osc_radius = x[4], feedback_control = x[5])
    
    aborted = False #set to true if the system aborts due to too much inconsistency
    
    final_exp_iter = 0
    for exp_iter in range(num_sim_iter):
        robot.reset()
        
        if mode == 'pure_sine':
            lead_str = "Run " + str(exp_count) + "["+str(exp_iter)+"] (w_set = " + str(w_set) + ", osc_mult = " + str(osc_mult) + "):"
            print(lead_str + " sine simulation time: 0", end='')
            pure_sine_simulation(robot, w_set, osc_mult, simulation_time, lead_str)
        elif mode == 'nengo_lif':
            lead_str = "Nengo Run " + str(exp_count) + "["+str(exp_iter)+"]"
            print(lead_str)
            with nengo.Simulator(lif_model) as sim:
                sim.run(simulation_time)
    
        # result = ('Pure Sinusoid', [pos[::2] for pos in robot.com_history])
        
        # if display_graph:
        #     results.append( result, )

        #get the distance and angle
        final_pos = robot.com_history[-1:]
        #format is x,y,z where y is height
        final_displ = math.sqrt(final_pos[0][0]**2 + final_pos[0][2]**2)
        final_angle = math.atan(final_pos[0][0] / final_pos[0][2])

        print("\r" + lead_str + " final_displ: " + "("+str(final_pos[0][0])+","+str(final_pos[0][2])+") " + str(final_displ) + ", final_angle: " + str(final_angle))
        avg_final_displ += final_displ

        if save_csv:
            with open(csv_file_name, 'a') as file:
                file.write("\n") #we start the write with a newline character so the end of a set can have a score appended
                if mode == 'pure_sine':
                    line = str(exp_count) + "," + str(exp_iter) + "," + str(w_set) + "," + str(osc_mult) + "," + str(final_pos[0][0])+ ","+ str(final_pos[0][2]) + "," + str(final_displ) + "," + str(final_angle) + ","
                elif mode == 'nengo_lif':
                    line = str(exp_count) + "," + str(exp_iter) + "," + str(x[0]) + "," + str(x[1]) + "," + str(x[2]) + "," + str(x[3]) + "," + str(x[4]) + "," + str(x[5]) + "," + str(final_pos[0][0])+ ","+ str(final_pos[0][2]) + "," + str(final_displ) + "," + str(final_angle) + ","
                file.write(line)

        #check if we want to abort
        for prev_final_angle in final_angles:
            if abs(prev_final_angle - final_angle) > abort_tolerance:
                aborted = True
        
        if final_displs: #if it's at least the second run, then check if the distance is acceptable compared with the minimum required
            if final_displ < min_req_displ:
                aborted = True

        final_angles.append(final_angle)
        final_displs.append(final_displ)
        final_exp_iter = exp_iter

        if aborted:
            break

    avg_final_displ /= num_sim_iter
    max_angle_diff = (2 * (max(final_angles) - min(final_angles)))**2
    if aborted: # if we aborted then assume the angle difference could have been up to 2* worse than we saw
        max_angle_diff *= 2

    max_angle_diff = max_angle_diff**2 #square it again to make it quite big.

    max_displ_diff = (max(final_displs) - min(final_displs))**2

    #score = -(avg_final_displ/(1+max_displ_diff+max_angle_diff))
    score = -( min(final_displs)**2 / (0.01 + max_angle_diff))
    #if aborted: #penalty to score if we aborted early (probably the score will already be terrible)
    #    score = score / 2

    if save_csv:
        with open(csv_file_name, 'a') as file:
            line = str(score)
            file.write(line)
    exp_count += 1
    return score

def main():
    now = datetime.now()
    dt_string = now.strftime("%Y_%m_%d__%H_%M_%S")
    csv_file_name = "./pso_results/" + dt_string + "_pso_results.csv"
    log_file_name = "./pso_results/" + dt_string + "_pso_results.txt"

    save_csv = True
    display_graph = True
    #baseline_sine = True
    #noisy_sine = True
    simulation_time = 32
    stabilise_time = 2
    num_sim_iter = 5
    #exp_count = 0
    #results = []
    gauss_std = 0.1
    abort_tolerance = 0.1
    min_req_displ = 20

    #mode = 'pure_sine'
    mode = 'nengo_lif'

    pso_lb = None
    pso_ub = None
    constraints = None

    if mode == 'pure_sine': #format: [w_set, osc_mult]
        pso_lb = [0.7, 0.8]
        pso_ub = [2, 1.5]
    if mode == 'nengo_lif': #format: [w_set, osc_mult, mu, tau_synapse, osc_radius, feedback_control]
        #pso_lb = [0.9, 0.9, 0.9, 0.1, 0.8, 0.8]
        #pso_ub = [1.7, 1.5, 1.3, 0.35, 1.2, 1.8] 
        pso_lb = [0.91, 1.1, 1.2, 0.18, 0.9, 1]
        pso_ub = [1.01, 1.3, 1.3, 0.26, 1.1, 1.2] 
        
        def no_negative_control_value(x, *args): #make sure that osc_mult * radius doesn't exceed 1.65
            return 1.65 - x[1] * x[4]
        constraints = [no_negative_control_value]

    pso_maxiter = 30
    pso_swarmsize = 15

    approx_runs = num_sim_iter * pso_maxiter * pso_swarmsize

    robot = superball.SUPERBall(stabilise_time = stabilise_time)
    args = (mode, robot, simulation_time, num_sim_iter, save_csv, csv_file_name, gauss_std, abort_tolerance, min_req_displ)
    print("PSO commence")

    if save_csv:
        with open(csv_file_name, 'w') as file:
            if mode == 'pure_sine':
                file.write('run,run_iter,w_set,osc_mult,final_x,final_z,final_displ,final_angle,score')
            elif mode == 'nengo_lif':
                file.write('run,run_iter,w_set,osc_mult,mu,tau_synapse,osc_radius,feedback_control,final_x,final_z,final_displ,final_angle,score')

        with open(log_file_name, 'w') as file:
            file.write('PSO run with the following params:\n')
            file.write('mode: ' + mode + '\n')
            file.write('simulation_time: ' + str(simulation_time) + '\n')
            file.write('stabilise_time: ' + str(stabilise_time) + '\n')
            file.write('num_sim_iter: ' + str(num_sim_iter) + '\n')
            file.write('gauss_std: ' + str(gauss_std) + '\n')
            file.write('abort_tolerance: ' + str(abort_tolerance))
            file.write('pso_lb: ' + str(pso_lb) + '\n')
            file.write('pso_ub: ' + str(pso_ub) + '\n')
            file.write('pso_maxiter: ' + str(pso_maxiter) + '\n')
            file.write('pso_swarmsize: ' + str(pso_swarmsize) + '\n')
            file.write('approx_runs: ' + str(approx_runs) + '\n')

    #lb, ub, and x format is [w_set, osc_mult]


    xopt, fopt = pso(get_robot_score, pso_lb, pso_ub, args=args, maxiter=pso_maxiter, swarmsize=pso_swarmsize, ieqcons=constraints)

    print(xopt, fopt)

    if save_csv:
        with open(log_file_name, 'a') as file:
            file.write('\n')
            file.write('final_result_x:' + str(xopt) + '\n')
            file.write('final_result_f:' + str(fopt) + '\n')


    # result = ('Pure Sine Best Performance (w = '+str(xopt[0])+', osc_mult = '+str(xopt[1])+')', [pos[::2] for pos in robot.com_history])
    
    # if display_graph:
    #     fig = plt.figure()
    #     ax = fig.add_subplot(111)
    #     label = result[0]
    #     positions = result[1]
    #     ax.plot(*zip(*positions), label=label)
    #     ax.legend()
    #     ax.set_xlabel('X Displacement (m)')
    #     ax.set_ylabel('Z Displacement (m)')
    #     plt.title('30s Movement Simulation after PSO')
    #     plt.show()

if __name__ == '__main__':
    main()


