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

def error_func(t, data):
    return data[1] - data[0]

setpoints = Piecewise({
    0: 5,
    3: 10,
    5: 2,
    8: 7,
    10: 3,
    13: 0,
    15: 7
})

class Odometer():
    def __init__(self, initial_distance=0):
        self.distance = initial_distance
    
    def run(self, t, data):
        self.distance += data * 0.001
        return self.distance

model = nengo.Network(label='closedloop')
with model:
    setpoint = nengo.Node(setpoints)

    error = nengo.Node(error_func, size_in=2)

    error_ens = nengo.Ensemble(n_neurons=100, dimensions=1)
    nengo.Connection(error, error_ens)

    ensemble = nengo.Ensemble(n_neurons=100, dimensions=1, radius=10)

    odometer = Odometer()
    output = nengo.Node(odometer.run, size_in=1)

    nengo.Connection(setpoint, error[0], synapse=0)
    nengo.Connection(output, error[1], synapse=0)
    conn = nengo.Connection(error_ens, ensemble, synapse=0.01)
    nengo.Connection(ensemble, output, synapse=0.01)

    # Learning
    learn_error_ens = nengo.Ensemble(n_neurons=100, dimensions=1)
    nengo.Connection(error, learn_error_ens)
    conn.learning_rule_type = nengo.PES(learning_rate=3e-4)
    nengo.Connection(learn_error_ens, conn.learning_rule)

    # Shut off learning by inhibiting the error population
    stop_learning = nengo.Node(output=lambda t: t >= 10)
    nengo.Connection(
        stop_learning,
        learn_error_ens.neurons,
        transform=-20 * np.ones((learn_error_ens.n_neurons, 1)))

    setpoint_p = nengo.Probe(setpoint, synapse=0)
    error_p = nengo.Probe(error, synapse=0)
    error_ens_p = nengo.Probe(error, synapse=0.01)
    ensemble_p = nengo.Probe(ensemble, synapse=0.01)
    output_p = nengo.Probe(output, synapse=0)

with nengo.Simulator(model) as sim:
    # This will take a while
    sim.run(20)

plt.figure()
plt.subplot(3, 1, 1)
plt.plot(sim.trange(), sim.data[setpoint_p], label='Setpoint')
plt.plot(sim.trange(), sim.data[output_p], label='Odometer')
plt.xlabel('time [s]')
plt.legend(loc='best')
plt.subplot(3, 1, 2)
plt.plot(sim.trange(), sim.data[error_p], label='Error')
plt.plot(sim.trange(), sim.data[error_ens_p], label='Ensemble')
plt.xlabel('time [s]')
plt.legend(loc='best')
plt.subplot(3, 1, 3)
plt.plot(sim.trange(), sim.data[ensemble_p], label='Ensemble')
plt.xlabel('time [s]')
plt.legend(loc='best')
plt.tight_layout()

plt.show()