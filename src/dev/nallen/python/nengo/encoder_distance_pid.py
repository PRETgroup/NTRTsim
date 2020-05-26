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
    return data[0] - data[1]

setpoints = Piecewise({
    0: 5,
    3: 10,
    5: 2,
    8: 7,
    10: 3,
    13: 0,
    15: 7
})

class Threshold():
    def __init__(self, toggle=0, hysterisis=0):
        self.toggle = toggle
        self.hysterisis = hysterisis
        self.state = 0

    def run(self, t, data):
        if self.state == 0 and data[0] > (self.toggle + self.hysterisis):
            self.state = 1
        elif self.state == 1 and data[0] < (self.toggle - self.hysterisis):
            self.state = 0
       
        return self.state

min_period = 0

class QuadOdometer():
    def __init__(self, initial_distance=0, toggle=0, hysterisis=0):
        self.distance = initial_distance
        self.thresholdA = Threshold(toggle=toggle, hysterisis=hysterisis)
        self.thresholdB = Threshold(toggle=toggle, hysterisis=hysterisis)

        self.previousA = 0
        self.previous_time = 0
    
    def run(self, t, data):
        a = self.thresholdA.run(t, [data[0]])
        b = self.thresholdB.run(t, [data[1]])

        if self.previousA == 0 and a == 1:
            if abs(t - self.previous_time) > min_period:
                if b == 0:
                    self.distance -= 1
                else:
                    self.distance += 1
            self.previous_time = t
        elif self.previousA == 1 and a == 0:
            if abs(t - self.previous_time) > min_period:
                if b == 1:
                    self.distance -= 1
                else:
                    self.distance += 1
            self.previous_time = t

        self.previousA = a

        return self.distance * 0.1

tau = 0.01  # Post-synaptic time constant for feedback
w_max = 200  # Maximum frequency is w_max/(2*pi)

learning_time = 10
learning_rate = 3e-4

num_neurons = 100

# Oscillator feedback
def feedback(x):
    x0, x1, w = x  # These are the three variables stored in the ensemble
    return x0 + w * w_max * tau * x1, x1 - w * w_max * tau * x0, 0

model = nengo.Network(label='closedloop')
with model:
    # SNN Ensembles
    error_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=1)

    main_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=1, radius=1)

    oscillator_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=3, radius=1.7)

    learn_error_ens = nengo.Ensemble(error_ens.n_neurons, error_ens.dimensions)

    # Oscillator initialisation
    initial = nengo.Node(Piecewise({0: [1, 0, 0], 0.15: [0, 0, 0]}))

    # SNN Connections
    conn = nengo.Connection(error_ens, main_ens)

    nengo.Connection(initial, oscillator_ens)
    nengo.Connection(main_ens, oscillator_ens[2])
    nengo.Connection(oscillator_ens, oscillator_ens, function=feedback, synapse=tau)

    nengo.Connection(error_ens, learn_error_ens)

    # SNN Learning
    conn.learning_rule_type = nengo.Voja(learning_rate=learning_rate)
    nengo.Connection(learn_error_ens, conn.learning_rule)

    stop_learning = nengo.Node(output=lambda t: t >= learning_time)
    nengo.Connection(
        stop_learning,
        learn_error_ens.neurons,
        transform=-20 * np.ones((learn_error_ens.n_neurons, 1)))


    # External Nodes
    setpoint = nengo.Node(setpoints)

    error = nengo.Node(error_func, size_in=2)

    odometer = QuadOdometer(hysterisis=0.05)
    output = nengo.Node(odometer.run, size_in=2)

    # External Connections
    nengo.Connection(setpoint, error[0], synapse=0)
    nengo.Connection(output, error[1], synapse=0)


    # Map Between SNN + External
    nengo.Connection(error, error_ens)
    nengo.Connection(oscillator_ens[:2], output)


    # Probes
    thresholdA = Threshold(hysterisis=0.05)
    thresholdA_node = nengo.Node(thresholdA.run, size_in=1)
    nengo.Connection(oscillator_ens[0], thresholdA_node, synapse=0.01)

    thresholdB = Threshold(hysterisis=0.05)
    thresholdB_node = nengo.Node(thresholdB.run, size_in=1)
    nengo.Connection(oscillator_ens[1], thresholdB_node, synapse=0.01)

    setpoint_p = nengo.Probe(setpoint, synapse=0)
    error_p = nengo.Probe(error, synapse=0)
    error_ens_p = nengo.Probe(error, synapse=0.01)
    main_ens_p = nengo.Probe(main_ens, synapse=0.01)
    oscillator_ens_p = nengo.Probe(oscillator_ens[:2], synapse=0.01)
    output_p = nengo.Probe(output, synapse=0)

    ta_p = nengo.Probe(thresholdA_node, synapse=0)
    tb_p = nengo.Probe(thresholdB_node, synapse=0)

with nengo.Simulator(model) as sim:
    # This will take a while
    sim.run(20)

plt.figure()
plt.subplot(5, 1, 1)
plt.plot(sim.trange(), sim.data[setpoint_p], label='Setpoint')
plt.plot(sim.trange(), sim.data[output_p], label='Odometer')
plt.xlabel('time [s]')
plt.legend(loc='best')
plt.subplot(5, 1, 2)
plt.plot(sim.trange(), sim.data[error_p], label='Error')
plt.plot(sim.trange(), sim.data[error_ens_p], label='Ensemble')
plt.xlabel('time [s]')
plt.legend(loc='best')
plt.subplot(5, 1, 3)
plt.plot(sim.trange(), sim.data[main_ens_p], label='Omega')
plt.xlabel('time [s]')
plt.legend(loc='best')
plt.subplot(5, 1, 4)
plt.plot(sim.trange(), sim.data[oscillator_ens_p], label='Output')
plt.xlabel('time [s]')
plt.legend(loc='best')
plt.subplot(5, 1, 5)
plt.plot(sim.trange(), sim.data[ta_p], label='Channel A')
plt.plot(sim.trange(), sim.data[tb_p], label='Channel B')
plt.xlabel('time [s]')
plt.legend(loc='best')
plt.tight_layout()

plt.show()