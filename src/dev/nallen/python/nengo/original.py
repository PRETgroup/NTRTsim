import matplotlib
matplotlib.use('TKAgg', force=True)
from matplotlib import pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import numpy as np

import nengo
from nengo.processes import Piecewise
from nengo.processes import WhiteSignal
from nengo.solvers import LstsqL2

import faulthandler
faulthandler.enable()

kick_duration = 0.5
w = 1
mu = 1
tau_synapse = 0.25
num_neurons = 400
osc_radius = 1
feedback_control = 1

model = nengo.Network(label='SUPERball')
with model:
    gauss_dist = nengo.dists.Gaussian(mean=0, std=0.01)
    white_noise = nengo.processes.WhiteNoise(dist=gauss_dist)

    def feedback_func(x):
        r_2 = x[0]*x[0] + x[1]*x[1]
        M_d = np.array([[mu-r_2, -w],[w,mu-r_2]])
        dx = np.dot(M_d,x)
        return tau_synapse*dx + feedback_control*x

    stim_func = Piecewise({
        0: 1,
        kick_duration: 0
    })

    def kick_func1(x):
        M_i = np.array([[1],[0]])
        return tau_synapse*np.dot(M_i, x)

    kick = nengo.Node(stim_func)

    master_osc = nengo.Ensemble(n_neurons=num_neurons, dimensions=2, radius=osc_radius)

    nengo.Connection(kick, master_osc, function=kick_func1, synapse=tau_synapse)

    nengo.Connection(master_osc, master_osc, function=feedback_func, synapse=tau_synapse)

    #nengo.Connection(actions, basal_ganglia.input, synapse=None)
    #selected_action = nengo.Probe(basal_ganglia.output, synapse=0.01)
    kick_p = nengo.Probe(kick, synapse=0.01)
    master_p = nengo.Probe(master_osc, synapse=0.01)

with nengo.Simulator(model) as sim:
    # This will take a while
    sim.run(20)

def adjusted_sin(t):
    return np.sin(t - kick_duration/2)
def adjusted_cos(t):
    return np.cos(t - kick_duration/2)

plt.figure()
plt.subplot(2, 1, 1)
plt.plot(sim.trange(), sim.data[kick_p], label='Neuron')
plt.plot(sim.trange(), stim_func.run(sim.time, dt=sim.dt), 'k--', label='Real')
plt.xlabel('time [s]')
plt.title("Kick")
plt.legend(loc='best')
plt.subplot(2, 1, 2)
plt.plot(sim.trange(), sim.data[master_p][:, 0], label='A')
plt.plot(sim.trange(), sim.data[master_p][:, 1], label='B')
plt.plot(sim.trange(), np.vectorize(adjusted_cos)(sim.trange()), 'k--', label='A (Cosine)')
plt.plot(sim.trange(), np.vectorize(adjusted_sin)(sim.trange()), 'r--', label='B (Sine)')
plt.xlabel('time [s]')
plt.title("Output")
plt.legend(loc='best')
plt.tight_layout()

plt.show()