'''
@file standalone_nengo_eight_osc.py - a debugging/test script for the Nengo/Superball project

@author Hammond Pearce and P. Michael Furlong 
@email hammond.pearce@auckland.ac.nz and furlong@nasa.gov
@date 2019-06-13
'''

import nengo
import numpy as np
import superball
import matplotlib.pyplot as plt

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
    with nengo.Network() as model:
        gauss_dist = nengo.dists.Gaussian(mean=0,std=0.01)
        white_noise = nengo.processes.WhiteNoise(dist=gauss_dist)

        type_of_neuron = nengo.LIFRate
#         type_of_neuron = nengo.LIF
        
        w = 2. 
        mu = 1
        tau_synapse = 0.02
        num_neurons = 100
        readout_radius = 1.*np.sqrt(6)
        def feedback_func(x):
            r_2 = x[0]*x[0] + x[1]*x[1]
            M_d = np.array([[mu-r_2, -w],[w,mu-r_2]])
            dx = np.dot(M_d,x)
            return tau_synapse*dx + 1.05*x
    
        def stim_func(t):
            return np.array([1, 1]) if t < 1.0 else np.array([0, 0])
    
        def kick_func1(x):
            M_i = np.array([[1, 0],[0, 0]])
            return tau_synapse*np.dot(M_i, x)
        
        def kick_func2(x):
            M_i = np.array([[-1, 0],[0, 0]])
            return tau_synapse*np.dot(M_i, x)
        
        def enforce_func(x):
            r_2 = x[0]*x[0] + x[1]*x[1]
            M_d = np.array([[mu-r_2, -w],[w, mu-r_2]])
            return tau_synapse*np.dot(M_d,x)
    
        def suppress_func(x):
            r_2 = x[0]*x[0] + x[1]*x[1]
            M_d = np.array([[-mu+r_2, w],[-w, -mu+r_2]])
            return tau_synapse*np.dot(M_d,x)
    
        # Nodes and Ensembles
        kick = nengo.Node(stim_func)
        
        osc1 = nengo.Ensemble(n_neurons=num_neurons, dimensions=2,
                            radius=1,
                            noise = white_noise,
                            neuron_type=type_of_neuron(),
                         )
        
        
        osc2 = nengo.Ensemble(n_neurons=num_neurons, dimensions=2,
                                radius=1,
                                noise=white_noise,
                                neuron_type = type_of_neuron(),
                            )
        
        osc3 = nengo.Ensemble(n_neurons=num_neurons, dimensions=2,
                                radius=1,
                                noise=white_noise,
                                neuron_type=type_of_neuron(),
                            )
                            
            
        osc4 = nengo.Ensemble(n_neurons=num_neurons, dimensions=2,
                                radius=1,
                                noise=white_noise,
                                neuron_type=type_of_neuron(),
                            )
                            
        osc5 = nengo.Ensemble(n_neurons=num_neurons, dimensions=2,
                                radius=1,
                                noise=white_noise,
                                neuron_type=type_of_neuron(),
                            )
                            
        osc6 = nengo.Ensemble(n_neurons=num_neurons, dimensions=2,
                                radius=1,
                                noise=white_noise,
                                neuron_type=type_of_neuron(),
                            )
                            
                                
        osc7 = nengo.Ensemble(n_neurons=num_neurons, dimensions=2,
                                radius=1,
                                noise=white_noise,
                                neuron_type=type_of_neuron(),
                            )
    
        osc8 = nengo.Ensemble(n_neurons=num_neurons, dimensions=2,
                                radius=1,
                                noise=white_noise,
                                neuron_type=type_of_neuron(),
                            )   
    
        readout = nengo.Ensemble(n_neurons=200,dimensions=8,
                                radius=readout_radius,
                                neuron_type=type_of_neuron(),
                                )
    
        # Feedback Connections
        nengo.Connection(osc1,osc1, function=feedback_func, synapse=tau_synapse)
        nengo.Connection(osc2,osc2, function=feedback_func, synapse=tau_synapse)
        nengo.Connection(osc3,osc3, function=feedback_func, synapse=tau_synapse)
        nengo.Connection(osc4,osc4, function=feedback_func, synapse=tau_synapse)
        nengo.Connection(osc5,osc5, function=feedback_func, synapse=tau_synapse)
        nengo.Connection(osc6,osc6, function=feedback_func, synapse=tau_synapse)
        nengo.Connection(osc7,osc7, function=feedback_func, synapse=tau_synapse)
        nengo.Connection(osc8,osc8, function=feedback_func, synapse=tau_synapse)
    
        
        # Initialization
        nengo.Connection(kick, osc1, synapse=tau_synapse, function=kick_func1)
        nengo.Connection(kick, osc4, synapse=tau_synapse, function=kick_func1)
        nengo.Connection(kick, osc5, synapse=tau_synapse, function=kick_func1)
        nengo.Connection(kick, osc8, synapse=tau_synapse, function=kick_func1)
        
        
        nengo.Connection(kick, osc2, synapse=tau_synapse, function=kick_func2)
        nengo.Connection(kick, osc3, synapse=tau_synapse, function=kick_func2)
        nengo.Connection(kick, osc6, synapse=tau_synapse, function=kick_func2)
        nengo.Connection(kick, osc7, synapse=tau_synapse, function=kick_func2)
        
        # Suppressing connections
        nengo.Connection(osc1, osc2, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc1, osc3, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc1, osc7, function=suppress_func, synapse=tau_synapse)
        
        nengo.Connection(osc2, osc1, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc2, osc4, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc2, osc8, function=suppress_func, synapse=tau_synapse)
        
        nengo.Connection(osc3, osc1, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc3, osc4, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc3, osc5, function=suppress_func, synapse=tau_synapse)
        
        nengo.Connection(osc4, osc2, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc4, osc3, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc4, osc6, function=suppress_func, synapse=tau_synapse)
        
        nengo.Connection(osc5, osc3, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc5, osc6, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc5, osc7, function=suppress_func, synapse=tau_synapse)
        
        nengo.Connection(osc6, osc4, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc6, osc5, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc6, osc8, function=suppress_func, synapse=tau_synapse)
        
        
        
        nengo.Connection(osc7, osc5, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc7, osc8, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc7, osc1, function=suppress_func, synapse=tau_synapse)
        
        
        nengo.Connection(osc8, osc6, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc8, osc7, function=suppress_func, synapse=tau_synapse)
        nengo.Connection(osc8, osc2, function=suppress_func, synapse=tau_synapse)
        
        
        # Enforcing connections
        nengo.Connection(osc1, osc4, function=enforce_func, synapse=tau_synapse)
        nengo.Connection(osc1, osc8, function=enforce_func, synapse=tau_synapse)
        
    
        nengo.Connection(osc2, osc3, function=enforce_func, synapse=tau_synapse)
        nengo.Connection(osc2, osc7, function=enforce_func, synapse=tau_synapse)
    
        nengo.Connection(osc3, osc2, function=enforce_func, synapse=tau_synapse)
        nengo.Connection(osc3, osc6, function=enforce_func, synapse=tau_synapse)
        
        nengo.Connection(osc4, osc1, function=enforce_func, synapse=tau_synapse)
        nengo.Connection(osc4, osc5, function=enforce_func, synapse=tau_synapse)
        
        nengo.Connection(osc5, osc4, function=enforce_func, synapse=tau_synapse)
        nengo.Connection(osc5, osc8, function=enforce_func, synapse=tau_synapse)
        
        nengo.Connection(osc6, osc3, function=enforce_func, synapse=tau_synapse)
        nengo.Connection(osc6, osc7, function=enforce_func, synapse=tau_synapse)
    
        nengo.Connection(osc7, osc6, function=enforce_func, synapse=tau_synapse)
        nengo.Connection(osc7, osc2, function=enforce_func, synapse=tau_synapse)
        
        nengo.Connection(osc8, osc5, function=enforce_func, synapse=tau_synapse)
        nengo.Connection(osc8, osc1, function=enforce_func, synapse=tau_synapse)
    
        # Readout connections:
        nengo.Connection(osc1[0],readout[0])
        nengo.Connection(osc2[0],readout[1])
        nengo.Connection(osc3[0],readout[2])
        nengo.Connection(osc4[0],readout[3])
        nengo.Connection(osc5[0],readout[4])
        nengo.Connection(osc6[0],readout[5])
        nengo.Connection(osc7[0],readout[6])
        nengo.Connection(osc8[0],readout[7])
    
 

        # Connect to the robot
        arm_out = nengo.Node(output=robot, size_in=8, size_out=0)
        nengo.Connection(readout, arm_out)
        p_arm = nengo.Probe(readout, synapse = 0.01)
    ### end with nengo.Network() as model

#     plt.ion()
#     fig = plt.figure()
#     ax = fig.add_subplot(111)
#     line1, = ax.plot([0],[0],'b-')
    with nengo.Simulator(model, dt=0.0001) as sim:
#         while True:

        sim.run(2)
        plt.subplot(2, 1, 1)
        plt.plot(sim.trange(), sim.data[p_arm][:,:])
        
        plt.subplot(2, 1, 2)
        positions = ([pos[::2] for pos in robot.com_history])
        plt.scatter(*zip(*positions))
        plt.show()

#        line1.set_xdata(sim.trange())
#             (rows, cols) = sim.data[p_arm].shape
#             for c in range(cols):
#                 line1.set_ydata(sim.data[p_arm][:,c])
#             fig.canvas.draw():3
            
    ### end with
### end main

if __name__ == '__main__':
    main()
