
import superball
import numpy as np
import matplotlib.pyplot as plt
import math
from pyswarm import pso

from datetime import datetime

exp_count = 0

def get_robot_score(x, *args):
    global exp_count

    w_set = x[0]
    osc_mult = x[1]

    robot, simulation_time, num_sim_iter, save_csv, csv_file_name = args
    
    master_osc = [0] * 8     
    avg_final_displ = 0 
    final_angles = []
    final_displs = []
    
    for exp_iter in range(num_sim_iter):
        robot.reset()
        lead_str = "Run " + str(exp_count) + "["+str(exp_iter)+"] (w_set = " + str(w_set) + ", osc_mult = " + str(osc_mult) + "):"
        print(lead_str + "): sine simulation time: 0", end='')
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
    
        # result = ('Pure Sinusoid', [pos[::2] for pos in robot.com_history])
        
        # if display_graph:
        #     results.append( result, )

        #get the distance and angle
        final_pos = robot.com_history[-1:]
        #format is x,y,z where y is height
        final_displ = math.sqrt(final_pos[0][0]**2 + final_pos[0][2]**2)
        final_angle = math.atan(final_pos[0][0] / final_pos[0][2])

        print("\r" + lead_str + " final displacement: " + "("+str(final_pos[0][0])+","+str(final_pos[0][2])+") " + str(final_displ) + "final angle: " + str(final_angle))
        avg_final_displ += final_displ
        final_angles.append(final_angle)
        final_displs.append(final_displ)

        if save_csv:
            with open(csv_file_name, 'a') as file:
                file.write("\n") #we start the write with a newline character so the end of a set can have a score appended
                line = str(exp_count) + "," + str(exp_iter) + "," + str(w_set) + "," + str(osc_mult) + "," + str(final_pos[0][0])+ ","+ str(final_pos[0][2]) + "," + str(final_displ) + "," + str(final_angle) + ","
                file.write(line)

    avg_final_displ /= num_sim_iter
    max_angle_diff = abs(max(final_angles) - min(final_angles))
    max_displ_diff = abs(max(final_displs) - min(final_displs))

    score = -(avg_final_displ/(1+max_displ_diff) * 1/(1+max_angle_diff))
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
    simulation_time = 30
    stabilise_time = 2
    num_sim_iter = 5
    #exp_count = 0
    #results = []
    #gauss_std = 0.3

    pso_lb = [0.7, 0.8]
    pso_ub = [2, 1.5]
    pso_maxiter = 6
    pso_swarmsize = 6

    total_runs = num_sim_iter * pso_maxiter * pso_swarmsize

    robot = superball.SUPERBall(stabilise_time = stabilise_time)
    args = (robot, simulation_time, num_sim_iter, save_csv, csv_file_name)
    print("PSO commence")

    if save_csv:
        with open(csv_file_name, 'w') as file:
            file.write('run,run_iter,w_set,osc_mult,final_x,final_z,final_displ,final_angle,score')
        with open(log_file_name, 'w') as file:
            file.write('PSO run with the following params:\n')
            file.write('simulation_time: ' + str(simulation_time) + '\n')
            file.write('stabilise_time: ' + str(stabilise_time) + '\n')
            file.write('num_sim_iter: ' + str(num_sim_iter) + '\n')
            file.write('pso_lb: ' + str(pso_lb) + '\n')
            file.write('pso_ub: ' + str(pso_ub) + '\n')
            file.write('pso_maxiter: ' + str(pso_maxiter) + '\n')
            file.write('pso_swarmsize: ' + str(pso_swarmsize) + '\n')
            file.write('maximum_runs: ' + str(total_runs) + '\n')

    #lb, ub, and x format is [w_set, osc_mult]


    xopt, fopt = pso(get_robot_score, pso_lb, pso_ub, args=args, maxiter=pso_maxiter, swarmsize=pso_swarmsize)

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


