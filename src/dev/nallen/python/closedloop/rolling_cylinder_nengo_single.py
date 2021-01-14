from ZmqClient import ZmqClient, Actuation
import math
import random

import numpy as np

from matplotlib import pyplot as plt

import nengo
from nengo.processes import Piecewise
from nengo.processes import WhiteSignal
from nengo.solvers import LstsqL2

from hamlconverter import HamlConverter

# Connect to the simulator over ZMQ
client = ZmqClient()
client.connect("localhost", 5555)

client.reset()

# Position and Speed smoothing
position_smoothing = 100
speed_smoothing = 100
orientation_smoothing = 100

position = 0
speed = 0
orientation = 0

# History to enable smoothing
prev_z = [0] * position_smoothing
prev_speed = [0] * speed_smoothing
prev_orientation = [0] * orientation_smoothing

# Nengo settings
learning_time = 100
simulation_time = -1
learning_rate = 4e-6
num_neurons = 100
probe_sample_every = 0.001

# Setpoint
setpoint = 4

# Reached thresholds
reached_threshold = 0.3
reached_time = 5

# Trial
trial = 0

# Actuators
sides = [
    {
        "side": "left",
        "actuators": [
            {
                "name": "left_a",
                "position": [0, 16.5], # [0, 17],
                "output": 4,
            },
            {
                "name": "left_b",
                "position": [14.289, -8.25], # [14.722, -8.5],
                "output": 4,
            },
            {
                "name": "left_c",
                "position": [-14.289, -8.25], # [-14.722, -8.5],
                "output": 4,
            }
        ]
    },
    {
        "side": "right",
        "actuators": [
            {
                "name": "right_a",
                "position": [0, 16.5], # [0, 17],
                "output": 4,
            },
            {
                "name": "right_b",
                "position": [14.289, -8.25], # [14.722, -8.5],
                "output": 4,
            },
            {
                "name": "right_c",
                "position": [-14.289, -8.25], # [-14.722, -8.5],
                "output": 4,
            }
        ]
    }
]

def convertPositionToRestLengths(side, pos, orientation):
    rest_lengths = [0, 0, 0]
    
    equ1 = [
        {"weights": [ 0, 0, 0 ], "result": 0 }, # X - Balanced (cN)
        {"weights": [ 0, 0, 0 ], "result": 475 }, # Y - Bar weight (cN)
        {"weights": [ 0, 0, 0 ], "result": 5 }, # Z - Cross force (cN)
    ]

    pos.append(-0.1)

    i = 0
    for actuator in side["actuators"]:
        actuator_pos = [0, 0, 0]
        actuator_pos[0] = (actuator["position"][0] * math.cos(orientation)) + (actuator["position"][1] * math.sin(orientation))
        actuator_pos[1] = (actuator["position"][1] * math.cos(orientation)) - (actuator["position"][0] * math.sin(orientation))
        actuator_pos[2] = 0

        angle = math.atan2(actuator_pos[1], actuator_pos[0])
        offset = [0.925*math.cos(angle), 0.925*math.sin(angle)]

        difference = [0, 0, 0]
        difference[0] = actuator_pos[0] - pos[0] - offset[0]
        difference[1] = actuator_pos[1] - pos[1] - offset[1]
        difference[2] = actuator_pos[2] - pos[2]

        sum = 0
        for dimension in difference:
            sum += math.pow(dimension, 2)
        length = math.sqrt(sum)

        equ1[0]["weights"][i] = difference[0] / length
        equ1[1]["weights"][i] = difference[1] / length
        equ1[2]["weights"][i] = difference[2] / length

        rest_lengths[i] = length

        i += 1

    # Temporary equations
    equ2 = [
        {"weights": [ 0, 0, 0 ], "result": 0 },
        {"weights": [ 0, 0, 0 ], "result": 0 },
    ]
    equ3 = [
        {"weights": [ 0, 0, 0 ], "result": 0 },
    ]

    # A - B
    equ2[0]["result"] = equ1[0]["result"] * equ1[1]["weights"][2] - equ1[1]["result"] * equ1[0]["weights"][2]
    equ2[0]["weights"][0] = equ1[0]["weights"][0] * equ1[1]["weights"][2] - equ1[1]["weights"][0] * equ1[0]["weights"][2]
    equ2[0]["weights"][1] = equ1[0]["weights"][1] * equ1[1]["weights"][2] - equ1[1]["weights"][1] * equ1[0]["weights"][2]
    equ2[0]["weights"][2] = 0

    # B - C
    equ2[1]["result"] = equ1[1]["result"] * equ1[2]["weights"][2] - equ1[2]["result"] * equ1[1]["weights"][2]
    equ2[1]["weights"][0] = equ1[1]["weights"][0] * equ1[2]["weights"][2] - equ1[2]["weights"][0] * equ1[1]["weights"][2]
    equ2[1]["weights"][1] = equ1[1]["weights"][1] * equ1[2]["weights"][2] - equ1[2]["weights"][1] * equ1[1]["weights"][2]
    equ2[1]["weights"][2] = 0

    # D - E
    equ3[0]["result"] = equ2[0]["result"] * equ2[1]["weights"][1] - equ2[1]["result"] * equ2[0]["weights"][1]
    equ3[0]["weights"][0] = equ2[0]["weights"][0] * equ2[1]["weights"][1] - equ2[1]["weights"][0] * equ2[0]["weights"][1]
    equ3[0]["weights"][1] = 0
    equ3[0]["weights"][2] = 0

    result = [0, 0, 0]
    result[0] = equ3[0]["result"] / equ3[0]["weights"][0]
    result[1] = (equ2[0]["result"] - equ2[0]["weights"][0] * result[0]) / equ2[0]["weights"][1]
    result[2] = (equ1[0]["result"] - equ1[0]["weights"][0] * result[0] - equ1[0]["weights"][1] * result[1]) / equ1[0]["weights"][2]

    SPRING_K = 60
    SPRING_F0 = 426
    SPRING_FMAX = 837

    for i in range(len(result)):
        if result[i] > SPRING_F0:
            #if result[i] >= SPRING_FMAX:
            #    rest_lengths[i] -= (SPRING_FMAX - SPRING_F0) / SPRING_K
            #else:
            rest_lengths[i] -= (result[i] - SPRING_F0) / SPRING_K

    return rest_lengths

out = []
log = []

within_range_time = 0.0
def zmq_func(t, data):
    global setpoint, within_range_time
    global prev_z, position_smoothing, speed_smoothing, prev_orientation, orientation_smoothing
    global position, speed, orientation
    global trial

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
        position += prev_z[i]
    position /= position_smoothing

    # Keep the history of positions
    for i in range(len(prev_z) - 1):
        prev_z[len(prev_z)-i-1] = prev_z[len(prev_z)-i-2]
    prev_z[0] = data.rods[0].position.z


    # Calculate the current speed (smoothed)
    speed = 0
    for i in range(speed_smoothing):
        speed += prev_speed[i]
    speed /= speed_smoothing

    # Keep the history of speeds
    for i in range(len(prev_speed) - 1):
        prev_speed[len(prev_speed)-i-1] = prev_speed[len(prev_speed)-i-2]
    prev_speed[0] = (data.rods[0].position.z - prev_z[1]) / data.time.dt


    # Calculate the current orientation (smoothed)
    orientation = 0
    for i in range(orientation_smoothing):
        orientation += prev_orientation[i]
    orientation /= orientation_smoothing

    # Keep the current history of orientations
    for i in range(len(prev_orientation) - 1):
        prev_orientation[len(prev_orientation)-i-1] = prev_orientation[len(prev_orientation)-i-2]
    prev_orientation[0] = data.rods[0].orientation.z

    # Check if we've reached the setpoint
    if abs(setpoint - speed) < reached_threshold:
        if data.time.abs - within_range_time > reached_time:
            # Create a new setpoint
            setpoint = (random.random() * 10) - 5
            print("Reached setpoint. New setpoint:", round(setpoint, 2))
            within_range_time = data.time.abs

            trial += 1

            # # Reset the position history
            # for i in range(len(prev_z)):
            #     prev_z[i] = 0

            # # Reset the speed history
            # for i in range(len(prev_speed)):
            #     prev_speed[i] = 0

            # # Reset the orientation history
            # for i in range(len(prev_orientation)):
            #     prev_orientation[i] = 0

            # # Reset the simulation
            # client.reset()

            # # Reset the smoothing variables
            # for i in range(len(prev_z)):
            #     prev_z[i] = 0
            
            # # And send the initial values
            # return (0, 0, 0)
    else:
        within_range_time = data.time.abs

    # Return the position, speed, and current orientation
    return (position, speed, orientation)

def output_func(t, data):
    # Assign control signals
    control = {
        "left": data,
        "right": data,
    }

    # For each side, do the logic
    outputs = []
    for side in sides:
        # Saturate at [1, -1]
        if control[side["side"]] < -1:
            control[side["side"]] = -1
        elif control[side["side"]] > 1:
            control[side["side"]] = 1

        # Work out the desired position of the bar
        desired_angle = control[side["side"]] * math.pi / 2
        desired_position = [4 * math.sin(desired_angle), 4 * -1 * math.cos(desired_angle)]

        # Calculate the lengths for each string
        lengths = convertPositionToRestLengths(side, desired_position, orientation_func(t))

        # Set each length
        i = 0
        for actuator in side["actuators"]:
            actuator["output"] = lengths[i]
            outputs.append(actuator["output"])
            i += 1
    
    zmq_func(t, outputs)

    # Return the six outputs
    #return outputs

def position_func(t):
    global position
    return position

def speed_func(t):
    global speed
    return speed

def orientation_func(t):
    global orientation
    return orientation

def setpoint_func(t):
    global setpoint
    return setpoint

def stop_learning_func(t):
    global trial
    return 0 if t < 100 else 1#trial / 1000

model = nengo.Network(label="rolling_cylinder")
with model:
    # SNN Ensembles
    error_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=1, radius=5)

    main_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=1, radius=10)

    main2_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=1, radius=1)

    learn_error_ens = nengo.Ensemble(n_neurons=error_ens.n_neurons, dimensions=error_ens.dimensions, radius=error_ens.radius)

    # SNN Connections
    conn1 = nengo.Connection(error_ens, main_ens, synapse=0.01, function=lambda x: np.zeros(1))
    conn3 = nengo.Connection(main_ens.neurons, main2_ens, synapse=0.01, transform=0 * np.ones((main2_ens.dimensions, main_ens.n_neurons)))

    nengo.Connection(error_ens, learn_error_ens, synapse=0.01)

    # SNN Learning
    conn1.learning_rule_type = nengo.PES(learning_rate=learning_rate)
    nengo.Connection(learn_error_ens, conn1.learning_rule, synapse=0.01)
    conn3.learning_rule_type = nengo.PES(learning_rate=learning_rate)
    nengo.Connection(learn_error_ens, conn3.learning_rule, synapse=0.01)

    stop_learning = nengo.Node(output=stop_learning_func, label="stop_learning")
    nengo.Connection(
        stop_learning,
        learn_error_ens.neurons,
        transform=-20 * np.ones((learn_error_ens.n_neurons, 1)))

    # External Nodes
    setpoint_node = nengo.Node(output=setpoint_func, size_in=0, label="setpoint")
    position_node = nengo.Node(output=position_func, size_in=0, label="position")
    speed_node = nengo.Node(output=speed_func, size_in=0, label="speed")
    orientation_node = nengo.Node(output=orientation_func, size_in=0, label="orientation")

    output = nengo.Node(output=output_func, size_in=1, label="output")

    # External Connections
    nengo.Connection(speed_node, error_ens, synapse=0)
    nengo.Connection(setpoint_node, error_ens, transform=-1, synapse=0)
    nengo.Connection(main2_ens, output, synapse=0.1)

    # Probes
    setpoint_p = nengo.Probe(setpoint_node, sample_every=probe_sample_every, synapse=0, label="setpoint_p")
    position_p = nengo.Probe(position_node, sample_every=probe_sample_every, synapse=0, label="position_p")
    speed_p = nengo.Probe(speed_node, sample_every=probe_sample_every, synapse=0, label="speed_p")
    orientation_p = nengo.Probe(orientation_node, sample_every=probe_sample_every, synapse=0, label="orientation_p")

    error_p = nengo.Probe(error_ens, sample_every=probe_sample_every, synapse=0.01, label="error_p")
    learn_error_p = nengo.Probe(learn_error_ens, sample_every=probe_sample_every, synapse=0.01, label="learn_error_p")
    main_p = nengo.Probe(main_ens, sample_every=probe_sample_every, synapse=0.01, label="main_p")
    main2_p = nengo.Probe(main2_ens, sample_every=probe_sample_every, synapse=0.01, label="main2_p")

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

                    print("\rTime: %.3f [%2.2f] %s" % (sim.trange()[-1], speed, learn_str), end='')
                    previous_log = sim.trange()[-1]
        else:
            sim.run(simulation_time)
    except KeyboardInterrupt as e:
        HamlConverter(sim).convert("out.yaml")

        if sim.trange()[-1] < learning_time:
            print("Program exited before learning complete at time %.3f, showing results." % sim.trange()[-1])
        else:
            print("Stopping simulation at time %.3f, showing results." % sim.trange()[-1])

plt.figure()
plt.subplot(5, 1, 1)
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[position_p], label='Position')
plt.legend(loc='best')
plt.subplot(5, 1, 2)
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[setpoint_p], label='Setpoint')
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[speed_p], label='Speed')
plt.legend(loc='best')
plt.subplot(5, 1, 3)
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[orientation_p], label='Orientation')
plt.legend(loc='best')
plt.subplot(5, 1, 4)
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[error_p], label='Error')
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[learn_error_p], label='Learning Error')
plt.legend(loc='best')
plt.subplot(5, 1, 5)
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[main2_p], label='Output')
plt.legend(loc='best')

plt.show()