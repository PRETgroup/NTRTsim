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

def get_model(robot, w = 1, noisy = True, gauss_std = 0.01, osc_mult = 1.1, mu = 1, tau_synapse = 0.25, num_neurons = 400, osc_radius = 1, feedback_control = 1.3, triangle_control = None):

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
            osc = [0] * 8   
            mp = osc_mult
            if triangle_control is None:
                osc[0] = mp * v[0]
                osc[1] = -mp * v[0]
                osc[2] = -mp * v[0]
                osc[3] = mp * v[0]
                osc[4] = mp * v[0]
                osc[5] = -mp * v[0]
                osc[6] = -mp * v[0]
                osc[7] = mp * v[0]
            else:
                osc[0] = mp * triangle_control[0] * v[0]
                osc[1] = mp * triangle_control[1] * v[0]
                osc[2] = mp * triangle_control[2] * v[0]
                osc[3] = mp * triangle_control[3] * v[0]
                osc[4] = mp * triangle_control[4] * v[0]
                osc[5] = mp * triangle_control[5] * v[0]
                osc[6] = mp * triangle_control[6] * v[0]
                osc[7] = mp * triangle_control[7] * v[0]
            
            return osc

        # Connect to the robot
        arm_out = nengo.Node(output=robot, size_in=8, size_out=0)
        nengo.Connection(master_osc, arm_out, function=config_transform)
        #p_arm = nengo.Probe(readout, synapse = 0.01)
        ### end with nengo.Network() as model

    return model 
    ### end for
