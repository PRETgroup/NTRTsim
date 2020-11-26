from ZmqClient import ZmqClient, Actuation
import math
import random

import numpy as np

from matplotlib import pyplot as plt

import nengo
from nengo.processes import Piecewise
from nengo.processes import WhiteSignal
from nengo.solvers import LstsqL2

# Connect to the simulator over ZMQ
client = ZmqClient()
client.connect("localhost", 5555)

client.reset()

# Position and Speed smoothing
position_smoothing = 1
speed_smoothing = 1
orientation_smoothing = 1

# History to enable smoothing
prev_z = [0] * max(position_smoothing, speed_smoothing)
prev_orientation = [0] * orientation_smoothing

# Nengo settings
learning_time = 6000
simulation_time = -1
learning_rate = 5e-7
num_neurons = 100
probe_sample_every = 1

# Setpoint
setpoint = 2

# Reached thresholds
reached_threshold = 0.2
reached_time = 5

# Actuators
sides = [
    {
        "side": "left",
        "actuators": [
            {
                "name": "left_a",
                "position": [0, -17],
                "output": 4,
            },
            {
                "name": "left_b",
                "position": [-14.722, 8.5],
                "output": 4,
            },
            {
                "name": "left_c",
                "position": [14.722, 8.5],
                "output": 4,
            }
        ]
    },
    {
        "side": "right",
        "actuators": [
            {
                "name": "right_a",
                "position": [0, -17],
                "output": 4,
            },
            {
                "name": "right_b",
                "position": [-14.722, 8.5],
                "output": 4,
            },
            {
                "name": "right_c",
                "position": [14.722, 8.5],
                "output": 4,
            }
        ]
    }
]

out = []

within_range_time = 0.0
def zmq_func(t, data):
    global setpoint, within_range_time
    global prev_z, position_smoothing, speed_smoothing, prev_orientation, orientation_smoothing

    # Send the current actuator values over ZMQ
    output = []
    i = 0
    for side in sides:
        for actuator in side["actuators"]:
            output.append(Actuation(actuator["name"], data[i]))
            i += 1

    client.send(output)

    #input()

    # Receive data over ZMQ
    data = client.receive()

    # Calculate the current position (smoothed)
    position = 0
    for i in range(position_smoothing):
        position += prev_z[len(prev_z)-i-1]
    position /= position_smoothing

    # Calculate the current speed (smoothed)
    speed = 0
    for i in range(speed_smoothing):
        speed += (data.rods[0].position.z - prev_z[i]) / (data.time.dt * (i + 1))
    speed /= speed_smoothing

    # Keep the history of locations for speed
    for i in range(len(prev_z) - 1):
        prev_z[len(prev_z)-i-1] = prev_z[len(prev_z)-i-2]
    prev_z[0] = data.rods[0].position.z


    # Calculate the current orientation (smoothed)
    orientation = 0
    for i in range(orientation_smoothing):
        orientation += prev_orientation[len(prev_orientation)-i-1]
    orientation /= orientation_smoothing

    # Keep the current history of orientations
    for i in range(len(prev_orientation) - 1):
        prev_orientation[len(prev_orientation)-i-1] = prev_orientation[len(prev_orientation)-i-2]
    prev_orientation[0] = data.rods[0].orientation.z

    # Check if we've reached the setpoint
    if abs(setpoint - speed) < reached_threshold:
        if data.time.abs - within_range_time > reached_time:
            # Create a new setpoint
            setpoint = (random.random() * 5) - 2.5
            print("Reached setpoint. New setpoint:", round(setpoint, 2))

            # Reset the simulation
            client.reset()

            # Reset the smoothing variables
            for i in range(len(prev_z)):
                prev_z[i] = 0
            
            # And send the initial values
            return (0, 0, 0)
    else:
        within_range_time = data.time.abs

    out.append([data.rods[1].position.y, data.rods[1].position.z])
    # Return the position, speed, and current orientation
    return (position, speed, orientation)

def output_func(t, data):
    # Assign control signals
    control = {
        "left": 0.03,#data[0],
        "right": 0.03,#data[0],
    }

    # For each side, do the logic
    outputs = []
    for side in sides:
        # Saturate at [1, -1]
        if control[side["side"]] < -1:
            control[side["side"]] = -1
        elif control[side["side"]] > 1:
            control[side["side"]] = 1

        # Now map the control signal to an angle
        desired_angle = math.pi - (control[side["side"]] * math.pi / 2)

        # Which then gets mapped relative to the wheel
        relative_angle = desired_angle - data[1]
        relative_position = [3 * math.sin(relative_angle), 3 * math.cos(relative_angle)]

        # Calculate the lengths for each string
        for actuator in side["actuators"]:
            # Calculate the relative vector
            position = [actuator["position"][0] + relative_position[0], actuator["position"][1] + relative_position[1]]

            # And then the length
            actuator["output"] = math.sqrt(math.pow(position[0], 2) + math.pow(position[1], 2))
            outputs.append(actuator["output"])
    
    # Return the six outputs
    return outputs

def setpoint_func(t):
    global setpoint
    return setpoint

def error_func(t, data):
    return data[1] - data[0]

model = nengo.Network()
with model:
    # SNN Ensembles
    error_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=1, radius=5)
    speed_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=1, radius=10)

    main_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=2, radius=10)

    main2_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=1, radius=1)

    learn_error_ens = nengo.Ensemble(n_neurons=error_ens.n_neurons, dimensions=error_ens.dimensions, radius=error_ens.radius)

    # SNN Connections
    conn1 = nengo.Connection(error_ens, main_ens[0], synapse=0.01, function=lambda x: np.zeros(1))
    conn2 = nengo.Connection(speed_ens, main_ens[1], synapse=0.01, function=lambda x: np.zeros(1))
    conn3 = nengo.Connection(main_ens.neurons, main2_ens, synapse=0.01, transform=0 * np.ones((main2_ens.dimensions, main_ens.n_neurons)))

    nengo.Connection(error_ens, learn_error_ens, synapse=0.01)

    # SNN Learning
    conn1.learning_rule_type = nengo.PES(learning_rate=learning_rate)
    nengo.Connection(learn_error_ens, conn1.learning_rule, synapse=0.01)
    conn2.learning_rule_type = nengo.PES(learning_rate=learning_rate)
    nengo.Connection(learn_error_ens, conn2.learning_rule, synapse=0.01)
    conn3.learning_rule_type = nengo.PES(learning_rate=learning_rate)
    nengo.Connection(learn_error_ens, conn3.learning_rule, synapse=0.01)

    stop_learning = nengo.Node(output=lambda t: t >= learning_time)
    nengo.Connection(
        stop_learning,
        learn_error_ens.neurons,
        transform=-20 * np.ones((learn_error_ens.n_neurons, 1)))

    # External Nodes
    setpoint_node = nengo.Node(output=setpoint_func, size_in=0)
    zmq = nengo.Node(output=zmq_func, size_in=6)
    output = nengo.Node(output=output_func, size_in=2)

    error = nengo.Node(output=error_func, size_in=2)

    # External Connections
    nengo.Connection(zmq[1], error[1], synapse=0)
    nengo.Connection(zmq[1], speed_ens, synapse=0)
    nengo.Connection(setpoint_node, error[0], synapse=0)
    nengo.Connection(error, error_ens, synapse=0)

    nengo.Connection(main2_ens, output[0], synapse=0.01)
    nengo.Connection(zmq[2], output[1], synapse=0)
    nengo.Connection(output, zmq, synapse=0.01)

    # Probes
    setpoint_p = nengo.Probe(setpoint_node, sample_every=probe_sample_every, synapse=0)
    inputs_p = nengo.Probe(zmq, sample_every=probe_sample_every, synapse=0)
    error_p = nengo.Probe(error_ens, sample_every=probe_sample_every, synapse=0.01)
    learn_error_p = nengo.Probe(learn_error_ens, sample_every=probe_sample_every, synapse=0.01)
    main_p = nengo.Probe(main_ens, sample_every=probe_sample_every, synapse=0.01)
    main2_p = nengo.Probe(main2_ens, sample_every=probe_sample_every, synapse=0.01)
    output_p = nengo.Probe(output, sample_every=probe_sample_every, synapse=0.01)

    #weights_p = nengo.Probe(conn, 'weights', synapse=0.01)

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
        f = open("out.csv", "w")
        f.write("step,y,z\n")
        i = 0
        for item in out:
            f.write(str(i) + "," + str(round(item[0], 2)) + "," + str(round(item[1], 2)) + "\n")
            i = i+1
        f.close()

        if sim.trange()[-1] < learning_time:
            print("Program exited before learning complete at time %.3f, showing results." % sim.trange()[-1])
        else:
            print("Stopping simulation at time %.3f, showing results." % sim.trange()[-1])

plt.figure()
plt.subplot(5, 1, 1)
#plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[setpoint_p], label='Setpoint')
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[inputs_p][:, 0], label='Position')
plt.legend(loc='best')
plt.subplot(5, 1, 2)
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[setpoint_p], label='Setpoint')
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[inputs_p][:, 1], label='Speed')
plt.legend(loc='best')
plt.subplot(5, 1, 3)
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[inputs_p][:, 2], label='Orientation')
plt.legend(loc='best')
plt.subplot(5, 1, 4)
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[error_p], label='Error')
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[learn_error_p], label='Learning Error')
plt.legend(loc='best')
plt.subplot(5, 1, 5)
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[main2_p], label='Output')
plt.legend(loc='best')

plt.show()