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


a31 = -0.7548
a41 = 0.301531


a13 = -0.301126
a23 = 0.288842
a53 = -0.456894
a63 = 0.802321

a35 = -0.211439
a45 = 0.201521
a75 = -0.99296
a85 = 0.135209


a57 = -0.9484804
a67 = 0.329029

#w = np.array([3.83366, 3.81622, 3.66452, 3.4382])

with nengo.Network() as model:
    gauss_dist = nengo.dists.Gaussian(mean=0,std=0.1)
    white_noise = nengo.processes.WhiteNoise(dist=gauss_dist)

    #type_of_neuron = nengo.LIFRate
    type_of_neuron = nengo.LIF
    
    w = 10.
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
        #return np.array([tau_synapse, 0, 0, 0]) if t < 1.0 else np.array([0, 0, 0, 0])
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
    
    