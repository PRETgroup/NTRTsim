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

from datetime import datetime

def stim_func(t):
    if t < 1.0:
        return 1
    else:
        return 0
    ### end if
### end stim_func

def get_model(robot, w = 1, noisy = True, gauss_std = 0.01, osc_mult = 1.1, mu = 1, tau_synapse = 0.25, num_neurons = 400, osc_radius = 1, feedback_control = 1.3, triangle_control = None, two_d_control = False, all_string_control = False):

    with nengo.Network() as model:
        gauss_dist = nengo.dists.Gaussian(mean=0,std=gauss_std)
        white_noise = nengo.processes.WhiteNoise(dist=gauss_dist)

        type_of_neuron = None
        if noisy:
            type_of_neuron = nengo.LIF
        else:
            type_of_neuron = nengo.LIFRate
        
        #w = w_set
        #mu = 1
        #tau_synapse = 0.25
        #num_neurons = 400
        #osc_radius = 1
        
        def feedback_func(x):
            r_2 = x[0]*x[0] + x[1]*x[1]
            M_d = np.array([[mu-r_2, -w],[w,mu-r_2]])
            dx = np.dot(M_d,x)
            return tau_synapse*dx + feedback_control*x

        def stim_func(t):
            return np.array([1, 1]) if t < 1.0 else np.array([0, 0])

        def kick_func1(x):
            M_i = np.array([[1, 0],[0, 0]])
            return tau_synapse*np.dot(M_i, x)

        # Nodes and Ensembles
        # Nodes and Ensembles
        kick = nengo.Node(stim_func)
        
        master_osc = None
        if noisy:
            master_osc = nengo.Ensemble(n_neurons=num_neurons, 
                dimensions=2, radius=osc_radius, 
                noise = white_noise, 
                neuron_type=type_of_neuron(),
            )
        else: 
            master_osc = nengo.Ensemble(n_neurons=num_neurons, 
                dimensions=2, radius=osc_radius, 
                neuron_type=type_of_neuron(),
            )

        # Feedback Connections
        nengo.Connection(master_osc, master_osc, 
                function=feedback_func, synapse=tau_synapse)
                
        # Initialization
        nengo.Connection(kick, master_osc, synapse=tau_synapse, 
                function=kick_func1)
                
        # Readout connections:    
        def config_transform(v):
            size_in = 8
            osc = [0] * size_in   
            mp = osc_mult
            if two_d_control and all_string_control is not None:
                size_in = 24
                osc = [0] * size_in
                osc[0] = mp * (all_string_control[0] * v[0] + all_string_control[24] * v[1])
                osc[1] = mp * (all_string_control[1] * v[0] + all_string_control[25] * v[1])
                osc[2] = mp * (all_string_control[2] * v[0] + all_string_control[26] * v[1])
                osc[3] = mp * (all_string_control[3] * v[0] + all_string_control[27] * v[1])
                osc[4] = mp * (all_string_control[4] * v[0] + all_string_control[28] * v[1])
                osc[5] = mp * (all_string_control[5] * v[0] + all_string_control[29] * v[1])
                osc[6] = mp * (all_string_control[6] * v[0] + all_string_control[30] * v[1])
                osc[7] = mp * (all_string_control[7] * v[0] + all_string_control[31] * v[1])
                osc[8] = mp * (all_string_control[8] * v[0] + all_string_control[32] * v[1])
                osc[9] = mp * (all_string_control[9] * v[0] + all_string_control[33] * v[1])
                osc[10] = mp * (all_string_control[10] * v[0] + all_string_control[34] * v[1])
                osc[11] = mp * (all_string_control[11] * v[0] + all_string_control[35] * v[1])
                osc[12] = mp * (all_string_control[12] * v[0] + all_string_control[36] * v[1])
                osc[13] = mp * (all_string_control[13] * v[0] + all_string_control[37] * v[1])
                osc[14] = mp * (all_string_control[14] * v[0] + all_string_control[38] * v[1])
                osc[15] = mp * (all_string_control[15] * v[0] + all_string_control[39] * v[1])
                osc[16] = mp * (all_string_control[16] * v[0] + all_string_control[40] * v[1])
                osc[17] = mp * (all_string_control[17] * v[0] + all_string_control[41] * v[1])
                osc[18] = mp * (all_string_control[18] * v[0] + all_string_control[42] * v[1])
                osc[19] = mp * (all_string_control[19] * v[0] + all_string_control[43] * v[1])
                osc[20] = mp * (all_string_control[20] * v[0] + all_string_control[44] * v[1])
                osc[21] = mp * (all_string_control[21] * v[0] + all_string_control[45] * v[1])
                osc[22] = mp * (all_string_control[22] * v[0] + all_string_control[46] * v[1])
                osc[23] = mp * (all_string_control[23] * v[0] + all_string_control[47] * v[1])

            elif two_d_control and triangle_control is not None:
                osc[0] = mp * (triangle_control[0] * v[0] + triangle_control[8] * v[1])
                osc[1] = mp * (triangle_control[1] * v[0] + triangle_control[9] * v[1])
                osc[2] = mp * (triangle_control[2] * v[0] + triangle_control[10] * v[1])
                osc[3] = mp * (triangle_control[3] * v[0] + triangle_control[11] * v[1])
                osc[4] = mp * (triangle_control[4] * v[0] + triangle_control[12] * v[1])
                osc[5] = mp * (triangle_control[5] * v[0] + triangle_control[13] * v[1])
                osc[6] = mp * (triangle_control[6] * v[0] + triangle_control[14] * v[1])
                osc[7] = mp * (triangle_control[7] * v[0] + triangle_control[15] * v[1])

            elif triangle_control is not None:
                osc[0] = mp * triangle_control[0] * v[0]
                osc[1] = mp * triangle_control[1] * v[0]
                osc[2] = mp * triangle_control[2] * v[0]
                osc[3] = mp * triangle_control[3] * v[0]
                osc[4] = mp * triangle_control[4] * v[0]
                osc[5] = mp * triangle_control[5] * v[0]
                osc[6] = mp * triangle_control[6] * v[0]
                osc[7] = mp * triangle_control[7] * v[0]
            else:
                osc[0] = mp * v[0]
                osc[1] = -mp * v[0]
                osc[2] = -mp * v[0]
                osc[3] = mp * v[0]
                osc[4] = mp * v[0]
                osc[5] = -mp * v[0]
                osc[6] = -mp * v[0]
                osc[7] = mp * v[0]
            
            return osc

        # Connect to the robot
        size_in = 8
        if two_d_control and all_string_control is not None:
            size_in = 24
        arm_out = nengo.Node(output=robot, size_in=size_in, size_out=0)
        nengo.Connection(master_osc, arm_out, function=config_transform, synapse=0.2)
        #p_arm = nengo.Probe(readout, synapse = 0.01)
        ### end with nengo.Network() as model

    return model 
    ### end for
