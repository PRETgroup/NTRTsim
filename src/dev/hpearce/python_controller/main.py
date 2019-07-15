
import superball
import nengo_one_osc_no_readout
import numpy as np
import matplotlib.pyplot as plt
import nengo
import math

from datetime import datetime

def main():
    now = datetime.now()
    dt_string = now.strftime("%Y_%m_%d__%H_%M_%S")

    save_csv = True
    display_graph = True
    baseline_sine = True
    noisy_sine = False
    simulation_time = 62
    stabilise_time = 2
    exp_count = 0
    results = []
    gauss_std = 0.1

    #params from PSO optimiser

    res_1 = [0.9251017625626268, 1.287327333190884, 1.2514109393818078, 0.2636043789932688, 1.0253428943606857, 1.1583520674216297] #-19562.264964537255
    res_2 = [0.9197863824800266, 1.2920062157164014, 1.2053631166933667, 0.2161665594859186, 1.048807149650496, 1.1222388842726918] #-32201.242647750358
    res_3 = [0.920930100055796, 1.284049727911602, 1.2093044370452128, 0.22562752772837646, 1.0401089823589647, 1.1376669466382245] #-12361.513688249037
    res_4 = [0.9861775312462058, 1.3054955628762404, 1.2349094429928538, 0.19787005402255214, 1.0411560105693027, 1.1385083039227004] #-20819.609739116197
    res_5 = [0.9197858747699997, 1.2915300840669903, 1.2049907322553557, 0.2164010050303094, 1.0488342592498838, 1.1222963213979398] #-14177.13771503867
    res_6 = [0.9332605645466925, 1.3107164870325203, 1.1974236648685326, 0.2146326594576146, 1.0233095791676254, 1.274695080647866] #-13848.714821055113
    res_7 = [1.011460032338118, 1.2091793421001704, 1.2103061919575318, 0.20995188324897773, 1.034679193298433, 1.3543045073578006] #-12975.271476094147
    res_8 = [0.9122508534819831, 1.33227259551396, 1.2344208418986893, 0.18717205241535587, 1.0324996333783578, 1.1016074658872594] #-14680.208574328537
    res_9 = [0.9189953224429923, 1.2945953752545716, 1.2106765101202823, 0.21272113557661268, 1.0893544026097717, 1.1097534731782535] #-16065.145204866001

    w = 0.85

    robot = superball.SUPERBall(stabilise_time = stabilise_time)
    lif_model_1 = nengo_one_osc_no_readout.get_model(robot, w = w, noisy = True, osc_mult = res_1[1], mu = res_1[2], tau_synapse = res_1[3], num_neurons = 400, osc_radius = res_1[4], feedback_control = res_1[5])
    lif_model_2 = nengo_one_osc_no_readout.get_model(robot, w = res_2[0], noisy = True, osc_mult = res_2[1], mu = res_2[2], tau_synapse = res_2[3], num_neurons = 400, osc_radius = res_2[4], feedback_control = res_2[5])
    lif_model_3 = nengo_one_osc_no_readout.get_model(robot, w = res_3[0], noisy = True, osc_mult = res_3[1], mu = res_3[2], tau_synapse = res_3[3], num_neurons = 400, osc_radius = res_3[4], feedback_control = res_3[5])
    lif_model_4 = nengo_one_osc_no_readout.get_model(robot, w = w, noisy = True, osc_mult = res_4[1], mu = res_4[2], tau_synapse = res_4[3], num_neurons = 400, osc_radius = res_4[4], feedback_control = res_4[5])
    lif_model_5 = nengo_one_osc_no_readout.get_model(robot, w = res_5[0], noisy = True, osc_mult = res_5[1], mu = res_5[2], tau_synapse = res_5[3], num_neurons = 400, osc_radius = res_5[4], feedback_control = res_5[5])
    lif_model_6 = nengo_one_osc_no_readout.get_model(robot, w = res_6[0], noisy = True, osc_mult = res_6[1], mu = res_6[2], tau_synapse = res_6[3], num_neurons = 400, osc_radius = res_6[4], feedback_control = res_6[5])
    lif_model_7 = nengo_one_osc_no_readout.get_model(robot, w = res_7[0], noisy = True, osc_mult = res_7[1], mu = res_7[2], tau_synapse = res_7[3], num_neurons = 400, osc_radius = res_7[4], feedback_control = res_7[5])
    lif_model_8 = nengo_one_osc_no_readout.get_model(robot, w = res_8[0], noisy = True, osc_mult = res_8[1], mu = res_8[2], tau_synapse = res_8[3], num_neurons = 400, osc_radius = res_8[4], feedback_control = res_8[5])
    lif_model_9 = nengo_one_osc_no_readout.get_model(robot, w = res_9[0], noisy = True, osc_mult = res_9[1], mu = res_9[2], tau_synapse = res_9[3], num_neurons = 400, osc_radius = res_9[4], feedback_control = res_9[5])
    print('Robot created')

    experiments = [
        ("LIF model 1 w=" + str(w), lif_model_1),
        ("LIF model 1 w=" + str(w), lif_model_1),
        ("LIF model 1 w=" + str(w), lif_model_1),
        ("LIF model 1 w=" + str(w), lif_model_1),
        ("LIF model 1 w=" + str(w), lif_model_1),
        ("LIF model 4 w=" + str(w), lif_model_4),
        ("LIF model 4 w=" + str(w), lif_model_4),
        ("LIF model 4 w=" + str(w), lif_model_4),
        ("LIF model 4 w=" + str(w), lif_model_4),
        ("LIF model 4 w=" + str(w), lif_model_4),
        #("Nengo LIFRate", lifrate_model),
    ]

    sine_w = 0.9
    sine_osc_mult = 1.1
    sine_osc_radius = 1

    # baseline_sine gives us an idea of our performance
    if baseline_sine:
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

        exp_count += 1

    for experiment in experiments:
        exp_name = experiment[0]
        model = experiment[1]
        with nengo.Simulator(model) as sim:
            print("Experiment " + str(exp_count) + ": (Nengo) " + exp_name)

            robot.reset()
            sim.run(simulation_time)
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


        exp_count += 1

    
    

    if display_graph:
        #color_i = 0
        #color_N = len(results)
        #cmap = plt.get_cmap('jet_r')
        fig = plt.figure()
        ax = fig.add_subplot(111)
        for result in results:
            #color = cmap(float(color_i)/color_N)
            label = "w = " + str(result[0])
            positions = result[1]
            ax.plot(*zip(*positions), label=label)
            #color_i += 1
        ax.legend()
        ax.set_xlabel('X Displacement (dm)')
        ax.set_ylabel('Z Displacement (dm)')
        plt.title(str(simulation_time-stabilise_time)+'s Movement Simulation')
        plt.show()

if __name__ == '__main__':
    main()


