import nengo
import numpy as np

# Superball oscillator parameters.
#w1 = 8.20368327e-01
#alpha1 = 4.94165304e-01
#a13 = 7.72563368e-02
#a14 = -9.48981451e-01

#w2 = 6.64453389e-01
#alpha2 = 4.99983857e-01
#a31 = 2.63744176e-01
#a35 = -6.47762233e-02
#a32 = 4.40416848e-01
#a36 = 7.51836036e-01

#w3 = 3.22210578e-01
#alpha3 = -3.47760919e-01
#a53 = -5.14416534e-01
#a57 = -9.99998555e-01
#a54 = 7.01349754e-01
#a58 = 6.60893960e-01

#w4 = 9.87293930e-01
#alpha4 = -5.00000000e-01
#a75 = -5.09037753e-02
#a76 = -9.84507250e-02

with nengo.Network() as model:
    gauss_dist = nengo.dists.Gaussian(mean=0,std=0.01)
    white_noise = nengo.processes.WhiteNoise(dist=gauss_dist)

    type_of_neuron = nengo.LIF
    #type_of_neuron = nengo.LIFRate
    
    w = 1.5
    mu = 1
    tau_synapse = 0.2
    num_neurons = 200
    readout_radius = 2 ##1.*np.sqrt(6)
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
                            )

    # Feedback Connections
    nengo.Connection(master_osc, master_osc, 
            function=feedback_func, synapse=tau_synapse)
            
    # Initialization
    nengo.Connection(kick, master_osc, synapse=tau_synapse, 
            function=kick_func1)
            
    # Readout connections:
    nengo.Connection(master_osc[0],readout[0], transform=1)
    nengo.Connection(master_osc[0],readout[1], transform=-1)
    nengo.Connection(master_osc[0],readout[2], transform=-1)
    nengo.Connection(master_osc[0],readout[3], transform=1)
    nengo.Connection(master_osc[0],readout[4], transform=1)
    nengo.Connection(master_osc[0],readout[5], transform=-1)
    nengo.Connection(master_osc[0],readout[6], transform=-1)
    nengo.Connection(master_osc[0],readout[7], transform=1)
    
    