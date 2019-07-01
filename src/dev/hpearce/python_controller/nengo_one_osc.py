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
    for w_set in [1.25]: #,1.5,1.5,1.5]: #0.25, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2]:
        robot.reset()
        with nengo.Network() as model:
            gauss_dist = nengo.dists.Gaussian(mean=0,std=0.01)
            white_noise = nengo.processes.WhiteNoise(dist=gauss_dist)

            type_of_neuron = nengo.LIF
            #type_of_neuron = nengo.LIFRate
            
            w = w_set
            mu = 1
            tau_synapse = 0.2
            num_neurons = 200
            readout_radius = 1 ##1.*np.sqrt(6)
            osc_radius = 1
            
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
        #             M_i = np.array([[np.cos(np.pi/4), 0],[0, np.sin(np.pi/4)]])
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
            # Nodes and Ensembles
            kick = nengo.Node(stim_func)
            
            master_osc = nengo.Ensemble(n_neurons=num_neurons, 
                    dimensions=2, radius=osc_radius, 
                    noise = white_noise, neuron_type=type_of_neuron(),
                    )
            
            readout = nengo.Ensemble(n_neurons=400, dimensions=8,
                                    radius=readout_radius,
                                    neuron_type=type_of_neuron(),
                                    noise = white_noise,
                                    )

            # Feedback Connections
            nengo.Connection(master_osc, master_osc, 
                    function=feedback_func, synapse=tau_synapse)
                    
            # Initialization
            nengo.Connection(kick, master_osc, synapse=tau_synapse, 
                    function=kick_func1)
                    
            # Readout connections:
            nengo.Connection(master_osc[0],readout[0], transform=1.1)
            nengo.Connection(master_osc[0],readout[1], transform=-1.1)
            nengo.Connection(master_osc[0],readout[2], transform=-1.1)
            nengo.Connection(master_osc[0],readout[3], transform=1.1)
            nengo.Connection(master_osc[0],readout[4], transform=1.1)
            nengo.Connection(master_osc[0],readout[5], transform=-1.1)
            nengo.Connection(master_osc[0],readout[6], transform=-1.1)
            nengo.Connection(master_osc[0],readout[7], transform=1.1)
            
    

            # Connect to the robot
            arm_out = nengo.Node(output=robot, size_in=8, size_out=0)
            nengo.Connection(readout, arm_out, transform=1.6, synapse=0.4)
            #p_arm = nengo.Probe(readout, synapse = 0.01)
        ### end with nengo.Network() as model

    #     plt.ion()
    #     fig = plt.figure()
    #     ax = fig.add_subplot(111)
    #     line1, = ax.plot([0],[0],'b-')
        with nengo.Simulator(model) as sim:
            sim.run(60)
            results.append( (w_set, [pos[::2] for pos in robot.com_history]), )

    ### end for

    #plt.subplot(2, 1, 1)
    #plt.plot(sim.trange(), sim.data[p_arm][:,:])
    
    #plt.subplot(2, 1, 2)
    #positions[w_set] = ([pos[::2] for pos in robot.com_history])
    #colors = ['#332288', '#88CCEE', '#44AA99', '#117733', '#999933', '#DDCC77', '#CC6677', '#882255', '#AA4499']
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
    ### end width

#     plt.figure(1)
#     data = np.array(robot.data)
#     plt.subplot(4,2,1)
#     plt.plot(sim.trange(),data[:,5])
#     plt.plot(sim.trange(),data[:,6])
#     plt.plot(sim.trange(),data[:,22])
#     plt.subplot(4,2,2)
#     plt.plot(sim.trange(),data[:,4])
#     plt.plot(sim.trange(),data[:,7])
#     plt.plot(sim.trange(),data[:,20])
#     plt.subplot(4,2,3)
#     plt.plot(sim.trange(),data[:,1])
#     plt.plot(sim.trange(),data[:,2])
#     plt.plot(sim.trange(),data[:,18])
#     plt.subplot(4,2,4)
#     plt.plot(sim.trange(),data[:,0])
#     plt.plot(sim.trange(),data[:,3])
#     plt.plot(sim.trange(),data[:,16])
#     plt.subplot(4,2,5)
#     plt.plot(sim.trange(),data[:,9])
#     plt.plot(sim.trange(),data[:,10])
#     plt.plot(sim.trange(),data[:,19])
#     plt.subplot(4,2,6)
#     plt.plot(sim.trange(),data[:,8])
#     plt.plot(sim.trange(),data[:,11])
#     plt.plot(sim.trange(),data[:,17])
#     plt.subplot(4,2,7)
#     plt.plot(sim.trange(),data[:,13])
#     plt.plot(sim.trange(),data[:,14])
#     plt.plot(sim.trange(),data[:,23])
#     plt.subplot(4,2,8)
#     plt.plot(sim.trange(),data[:,12])
#     plt.plot(sim.trange(),data[:,15])
#     plt.plot(sim.trange(),data[:,21])

#    plt.figure()
#    pos = np.array(robot.position)
#    plt.plot(pos[:,1],pos[:,3])
#    plt.show()
#         plt.plot(sim.trange(), sim.data[p_arm][:,:])
#         plt.show()
#             line1.set_xdata(sim.trange())
#             (rows, cols) = sim.data[p_arm].shape
#             for c in range(cols):
#                 line1.set_ydata(sim.data[p_arm][:,c])
#             fig.canvas.draw()
            
    ### end with
### end main

if __name__ == '__main__':
    main()
