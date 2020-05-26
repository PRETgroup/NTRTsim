from ZmqClient import ZmqClient, Actuation

import matplotlib
matplotlib.use('TKAgg', force=True)
from matplotlib import pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import numpy as np
import math

import nengo
from nengo.processes import Piecewise
from nengo.processes import WhiteSignal
from nengo.solvers import LstsqL2

import faulthandler
faulthandler.enable()

client = ZmqClient()
client.connect("localhost", 5555)

client.reset()


def error_func(t, data):
    return -((data[0] - data[1]) + 0.2*data[0])

def zmq_func(t, data):
    client.send([Actuation("front_right", data[0]), Actuation("front_left", data[0]), Actuation("back_right", data[1]), Actuation("back_left", data[1])])

    received = client.receive()

    return (received.rods[0].position.x, received.rods[1].position.x)

current_out = 0
def output_integrator(t, value):
    global current_out

    current_out += value[0] * 0.001
    return (7 + current_out, 7 - current_out)

learning_time = 20
simulation_time = 30
learning_rate = 1e-4
num_neurons = 100

model = nengo.Network()
with model:
    # SNN Ensembles
    error_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=1)

    main_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=1, radius=10)

    learn_error_ens = nengo.Ensemble(n_neurons=error_ens.n_neurons, dimensions=error_ens.dimensions, radius=error_ens.radius)

    # SNN Connections
    conn = nengo.Connection(error_ens, main_ens, synapse=0.01)

    nengo.Connection(error_ens, learn_error_ens, synapse=0.01)

    # SNN Learning
    conn.learning_rule_type = nengo.PES(learning_rate=learning_rate)
    nengo.Connection(learn_error_ens, conn.learning_rule)

    stop_learning = nengo.Node(output=lambda t: t >= learning_time)
    nengo.Connection(
        stop_learning,
        learn_error_ens.neurons,
        transform=-20 * np.ones((learn_error_ens.n_neurons, 1)))

    # External Nodes
    zmq = nengo.Node(output=zmq_func, size_in=2)
    output = nengo.Node(output=output_integrator, size_in=1)

    error = nengo.Node(output=error_func, size_in=2)

    # External Connections
    nengo.Connection(zmq, error, synapse=0)
    nengo.Connection(error, error_ens, synapse=0)

    nengo.Connection(main_ens, output, synapse=0.01)
    nengo.Connection(output, zmq, synapse=0.01)

    # Probes
    inputs_p = nengo.Probe(zmq, synapse=0)
    error_p = nengo.Probe(error_ens, synapse=0.01)
    learn_error_p = nengo.Probe(learn_error_ens, synapse=0.01)
    output_p = nengo.Probe(output, synapse=0.01)

    weights_p = nengo.Probe(conn, 'weights', synapse=0.01)

with nengo.Simulator(model) as sim:
    # Check if we should run forever
    try:
        if simulation_time < 0:
            previous_log = 0
            while True:
                sim.step()

                if sim.trange()[-1] - previous_log >= 0.1:
                    learn_str = "[LEARNING]"
                    if sim.trange()[-1] >= learning_time:
                        learn_str = " " * len(learn_str)

                    print("\rTime: %.3f %s" % (sim.trange()[-1], learn_str), end='')
                    previous_log = sim.trange()[-1]
        else:
            sim.run(simulation_time)
    except KeyboardInterrupt as e:
        if sim.trange()[-1] < learning_time:
            print("Program exited before learning complete. Nothing to show.")
            exit()
        else:
            print("Stopping simulation at time %.3f, showing results." % sim.trange()[-1])
    
    

plt.figure()
plt.subplot(3, 1, 1)
plt.plot(sim.trange(), sim.data[inputs_p], label='Position')
plt.legend(loc='best')
plt.subplot(3, 1, 2)
plt.plot(sim.trange(), sim.data[error_p], label='Error')
plt.plot(sim.trange(), sim.data[learn_error_p], label='Learning Error')
plt.legend(loc='best')
plt.subplot(3, 1, 3)
plt.plot(sim.trange(), sim.data[output_p], label='Output')
plt.legend(loc='best')

plt.show()
