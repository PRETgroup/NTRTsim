from ZmqClient import ZmqClient, Actuation

import matplotlib
matplotlib.use('TKAgg', force=True)
from matplotlib import pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import numpy as np
import math
import random

import nengo
from nengo.processes import Piecewise
from nengo.processes import WhiteSignal
from nengo.solvers import LstsqL2

client = ZmqClient()
client.connect("localhost", 5555)

client.reset()

prev_time = 0
setpoint = np.array([4, 0])

def error_func(t, data):
    x = data[2] - data[0]
    y = data[3] - data[1]
    return math.sqrt(x*x + y*y)

def zmq_func(t, data):
    global setpoint, prev_time
    client.send([Actuation("front", data[0]), Actuation("right", data[1]), Actuation("left", data[2])])

    received = client.receive()

    # Periodically make a new setpoint
    # if received.time.abs % 4.0 < received.time.dt and prev_time % 4.0 > received.time.dt:
    #     r1 = random.random()
    #     r2 = random.random()

    #     A = np.array([received.markers[1].position.x, received.markers[1].position.z])
    #     B = np.array([received.markers[2].position.x, received.markers[2].position.z])
    #     C = np.array([received.markers[3].position.x, received.markers[3].position.z])

    #     setpoint = (1 - math.sqrt(r1)) * A + math.sqrt(r1) * (1 - r2) * B + r2 * math.sqrt(r1) * C

    # prev_time = received.time.abs

    return (received.markers[0].position.x, received.markers[0].position.z, setpoint[0], setpoint[1])

def output_func(t, data):
    return data

learning_time = 30
simulation_time = 10
learning_rate = 1e-4
num_neurons = 100

model = nengo.Network()
with model:
    # SNN Ensembles
    error_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=1, radius=8)

    input_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=4, radius=8)

    main_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=3, radius=10)

    # SNN Connections
    conn = nengo.Connection(input_ens, main_ens, synapse=0.01, transform=np.random.uniform(-0.000001, 0.000001, size=(main_ens.dimensions, input_ens.dimensions)))

    # SNN Learning
    conn.learning_rule_type = nengo.Voja(learning_rate=learning_rate)
    nengo.Connection(error_ens, conn.learning_rule)
    # nengo.Connection(error_ens, conn.learning_rule[1])
    # nengo.Connection(error_ens, conn.learning_rule[2])

    stop_learning = nengo.Node(output=lambda t: t >= learning_time)
    nengo.Connection(
        stop_learning,
        error_ens.neurons,
        transform=-20 * np.ones((error_ens.n_neurons, 1)))

    # External Nodes
    zmq = nengo.Node(output=zmq_func, size_in=3)
    output = nengo.Node(output=output_func, size_in=3)

    error = nengo.Node(output=error_func, size_in=4)

    # External Connections
    nengo.Connection(zmq, error, synapse=0)
    nengo.Connection(error, error_ens, synapse=0)

    nengo.Connection(zmq, input_ens, synapse=0)

    nengo.Connection(main_ens, output, synapse=0.01)
    nengo.Connection(output, zmq, synapse=0.01)

    # Probes
    inputs_p = nengo.Probe(zmq, synapse=0)
    error_p = nengo.Probe(error, synapse=0)
    learn_error_p = nengo.Probe(error_ens, synapse=0.01)
    output_p = nengo.Probe(output, synapse=0.01)

    # weights_p = nengo.Probe(conn, 'weights', synapse=0.01)

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
plt.plot(sim.trange(), sim.data[inputs_p][:, :2], label='Position')
plt.plot(sim.trange(), sim.data[inputs_p][:, 2:], label='Setpoint')
plt.legend(loc='best')
plt.subplot(3, 1, 2)
plt.plot(sim.trange(), sim.data[error_p], label='Error')
plt.plot(sim.trange(), sim.data[learn_error_p], label='Learning Error')
plt.legend(loc='best')
plt.subplot(3, 1, 3)
plt.plot(sim.trange(), sim.data[output_p], label='Output')
plt.legend(loc='best')

plt.show()