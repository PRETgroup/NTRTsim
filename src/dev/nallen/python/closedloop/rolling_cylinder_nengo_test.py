from ZmqClient import ZmqClient, Actuation
import math
import random

import numpy as np

from matplotlib import pyplot as plt

import nengo
import nengo_ocl

import pyopencl

from hamlconverter import HamlConverter

# Connect to the simulator over ZMQ
client = ZmqClient()
# client.connect("localhost", 5555)

# client.reset()

# Position and Speed smoothing
position_smoothing = 2
speed_smoothing = 10
orientation_smoothing = 10

robot_position = np.array([0, 0, 0])
robot_speed = np.array([0, 0, 0])
robot_orientation = np.array([0, 0, 0])

bar_position = np.array([0, 0, 0])

# History to enable smoothing
prev_robot_position = [[0, 0, 0]] * position_smoothing
prev_robot_speed = [[0, 0, 0]] * speed_smoothing
prev_robot_orientation = [[0, 0, 0]] * orientation_smoothing

prev_bar_position = [[0, 0, 0]] * orientation_smoothing

# Nengo settings
use_opencl = False
learning_time = 4000
simulation_time = learning_time + 100
learning_rate = 1e-5
num_neurons = 200
probe_sample_every = 0.01

# Setpoint
setpoint = np.array([0.0, 0.0])

min_string_length = 3

# Reached thresholds
reached_threshold = 0.1
reached_time = 10


# Trial
trial = 0

# Actuators
sides = [
    {
        "side": "left",
        "actuators": [
            {
                "name": "left_a",
                "position": [0, 17],
                "output": 4,
            },
            {
                "name": "left_b",
                "position": [14.722, -8.5],
                "output": 4,
            },
            {
                "name": "left_c",
                "position": [-14.722, -8.5],
                "output": 4,
            }
        ]
    },
    {
        "side": "right",
        "actuators": [
            {
                "name": "right_a",
                "position": [0, 17],
                "output": 4,
            },
            {
                "name": "right_b",
                "position": [14.722, -8.5],
                "output": 4,
            },
            {
                "name": "right_c",
                "position": [-14.722, -8.5],
                "output": 4,
            }
        ]
    }
]

out = []
log = []

within_range_time = 0.0
def zmq_func(t, data):
    global position_smoothing, speed_smoothing, orientation_smoothing
    global robot_position, robot_speed, robot_orientation, bar_position
    global prev_robot_position, prev_robot_speed, prev_robot_orientation, prev_bar_position

    # Send the current actuator values over ZMQ
    output = []
    for side in sides:
        i = 0
        for actuator in side["actuators"]:
            output.append(Actuation(actuator["name"], data[i]))
            i += 1

    client.send(output)

    # Receive data over ZMQ
    data = client.receive()

    # Keep the history of positions
    for i in range(position_smoothing - 1):
        prev_robot_position[position_smoothing-i-1] = prev_robot_position[position_smoothing-i-2]
    prev_robot_position[0] = np.array(data.rods[0].position.getAsList())

    for i in range(position_smoothing - 1):
        prev_bar_position[position_smoothing-i-1] = prev_bar_position[position_smoothing-i-2]
    prev_bar_position[0] = np.array(data.rods[2].position.getAsList())

    # Calculate the current position (smoothed)
    robot_position = np.array([0.0, 0.0, 0.0])
    for i in range(position_smoothing):
        robot_position += prev_robot_position[i]
    robot_position /= position_smoothing
    robot_position = np.array([15.5, 18.5, 0])

    bar_position = np.array([0.0, 0.0, 0.0])
    for i in range(position_smoothing):
        bar_position += prev_bar_position[i]
    bar_position /= position_smoothing

    # Keep the history of speeds
    for i in range(speed_smoothing - 1):
        prev_robot_speed[speed_smoothing-i-1] = prev_robot_speed[speed_smoothing-i-2]
    prev_robot_speed[0] = (prev_robot_position[0] - prev_robot_position[1]) / data.time.dt

    # Calculate the current speed (smoothed)
    robot_speed = np.array([0.0, 0.0, 0.0])
    for i in range(speed_smoothing):
        robot_speed += prev_robot_speed[i]
    robot_speed /= speed_smoothing


    # Keep the current history of orientations
    for i in range(orientation_smoothing - 1):
        prev_robot_orientation[orientation_smoothing-i-1] = prev_robot_orientation[orientation_smoothing-i-2]
    prev_robot_orientation[0] = np.array(data.rods[0].orientation.getAsList())

    # for i in range(orientation_smoothing):
    #     if prev_orientation[0] < -math.pi/2 and prev_orientation[i] > math.pi/2:
    #         prev_orientation[i] = prev_orientation[i] - 2*math.pi

    #     elif prev_orientation[0] > math.pi/2 and prev_orientation[i] < -math.pi/2:
    #         prev_orientation[i] = prev_orientation[i] + 2*math.pi
        
    #     else:
    #         prev_orientation[i] = prev_orientation[i]

    # Calculate the current orientation (smoothed)
    robot_orientation = np.array([0.0, 0.0, 0.0])
    for i in range(orientation_smoothing):
        robot_orientation += prev_robot_orientation[i]
    robot_orientation = (((robot_orientation / orientation_smoothing) + math.pi) % (2*math.pi)) - math.pi

def robot_position_func(t):
    global robot_position
    return robot_position

def robot_speed_func(t):
    global robot_speed
    return robot_speed

def robot_orientation_func(t):
    global robot_orientation
    return robot_orientation

def bar_position_func(t):
    global bar_position
    return bar_position

def relative_bar_position_func(t):
    global robot_position, bar_position
    return bar_position - robot_position

def setpoint_func(t):
    global setpoint

    angle = (math.pi / 2) * 1.2 * math.sin(t * (2 * math.pi) / 10)

    setpoint[0] = 4 * math.sin(angle)
    setpoint[1] = 4 * -1 * math.cos(angle)

    # angle = math.pi * 2 * t / 10

    # setpoint[0] = math.sin(angle)
    # setpoint[1] = math.cos(angle)

    return setpoint

def relative_error_func(t, data):
    global robot_position, bar_position, sides
    global current_guess
    global setpoint, within_range_time, trial

    relative_pos = bar_position - robot_position

    error = current_guess - setpoint

    # Check if we've reached the setpoint
    # if np.linalg.norm(error) < reached_threshold or stop_learning_func(t) == 1:
    #     if t - within_range_time > reached_time:
    #         # Create a new setpoint
    #         setpoint[0] = (random.random() * 8.0) - 4.0
    #         setpoint[1] = (random.random() * 8.0) - 4.0
    #         print("Reached setpoint. New setpoint: [%.2f, %.2f]" % (setpoint[0], setpoint[1]))
    #         within_range_time = t

    #         trial += 1
    # else:
    #     within_range_time = t

    # Generate the string errors
    out = []
    for i in range(len(sides[0]["actuators"])):
        position = sides[0]["actuators"][i]["position"]

        # Calculate error in direction of actuator
        string_error = np.dot(error, position) / np.linalg.norm(position)
        string_error = -1 * string_error

        if data[i] > min_string_length or string_error < 0:
            out.append(string_error)
        else:
            out.append(0)

    return out

def output_func(t, data):
    zmq_func(t, data)

def stop_learning_func(t):
    global trial
    return 0 if t < learning_time and t > 1 else 1 # trial / 5000


current_guess = np.array([0, 0])
def calculate_position_func(t, data):
    global current_guess

    for run in range(10):
        net_force = np.array([0.0, -490.473208739])
        for i in range(len(sides[0]["actuators"])):
            position = sides[0]["actuators"][i]["position"]
            string_vector = position - current_guess

            distance = np.linalg.norm(string_vector)

            if distance > data[i]:
                force = (distance - data[i]) * 60 + 426
                force_vector = force * string_vector / distance
                net_force = net_force + force_vector

        current_guess = current_guess + net_force * 0.0001

    return current_guess

model = nengo.Network(label="rolling_cylinder_strings")
with model:
    # SNN Nodes
    strings_node = nengo.Node(size_in=3, label="strings")

    error_node = nengo.Node(size_in=3, output=lambda t, e: e)
    learn_error_node = nengo.Node(size_in=3, output=lambda t, e: e * (1-stop_learning_func(t)))

    # SNN Ensembles
    inputs_ens = nengo.Ensemble(n_neurons=num_neurons, dimensions=2, radius=10, label="position_inputs")

    # SNN Connections
    conn1 = nengo.Connection(inputs_ens, strings_node, synapse=0.1, function=lambda x: np.ones(3), label="position_conn")
    # conn1 = nengo.Connection(inputs_ens.neurons, strings_node, synapse=0.1, transform=0 * np.ones((3, inputs_ens.n_neurons)), label="position_conn")

    nengo.Connection(error_node, learn_error_node, synapse=None)

    # SNN Learning
    conn1.learning_rule_type = nengo.PES(learning_rate=learning_rate)
    nengo.Connection(learn_error_node, conn1.learning_rule, synapse=None)

    # External Nodes
    setpoint_node = nengo.Node(output=setpoint_func, size_in=0, label="setpoint")
    bar_position_node = nengo.Node(output=relative_bar_position_func, size_in=0, label="bar_position")

    relative_error_node = nengo.Node(output=relative_error_func, size_in=3, label="relative_error")

    # output_node = nengo.Node(output=output_func, size_in=3, label="output")

    calculate_position_node = nengo.Node(size_in=3, output=calculate_position_func, label="calculate_position")

    # External Connections
    nengo.Connection(strings_node, relative_error_node, synapse=None)
    nengo.Connection(relative_error_node, error_node, synapse=None)

    nengo.Connection(setpoint_node, inputs_ens, synapse=None)

    # nengo.Connection(strings_node, output_node, synapse=None)

    nengo.Connection(strings_node, calculate_position_node, synapse=None)

    # Probes
    setpoint_p = nengo.Probe(setpoint_node, sample_every=probe_sample_every, synapse=None, label="setpoint_p")
    inputs_p = nengo.Probe(inputs_ens, sample_every=probe_sample_every, synapse=0.1, label="inputs_p")
    bar_position_p = nengo.Probe(bar_position_node, sample_every=probe_sample_every, synapse=None, label="bar_position_p")
    
    error_p = nengo.Probe(error_node, sample_every=probe_sample_every, synapse=None, label="error_p")
    learn_error_p = nengo.Probe(learn_error_node, sample_every=probe_sample_every, synapse=None, label="learn_error_p")
    strings_p = nengo.Probe(strings_node, sample_every=probe_sample_every, synapse=None, label="strings_p")

    calculate_position_p = nengo.Probe(calculate_position_node, sample_every=probe_sample_every, synapse=None, label="calculate_position_p")

if use_opencl:
    ctx = pyopencl.create_some_context()
    print("Using OpenCL Device:", ctx.devices[0].name)

    sim_class = nengo_ocl.Simulator
    sim_kwargs = dict(context=ctx)
else:
    sim_class = nengo.Simulator
    sim_kwargs = dict(optimize=True)

with sim_class(model, **sim_kwargs) as sim:
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

                    relative_pos = bar_position - robot_position
                    error = np.linalg.norm(setpoint - relative_pos[2:0:-1])
                    print("\rTime: %.3f [%2.2f] %s %s" % (sim.trange()[-1], error, relative_pos[2:0:-1], learn_str), end='')
                    previous_log = sim.trange()[-1]
        else:
            sim.run(simulation_time)
    except KeyboardInterrupt as e:
        if sim.trange()[-1] < learning_time:
            print("Program exited before learning complete at time %.3f, showing results." % sim.trange()[-1])
        else:
            print("Stopping simulation at time %.3f, showing results." % sim.trange()[-1])

    HamlConverter(sim).convert("out-strings-test.yaml", [strings_node])

print("Showing figure")

plt.figure()
plt.subplot(3, 1, 1)
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[setpoint_p], label='Setpoint')
# plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[inputs_p], label='Ensemble')
# plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[bar_position_p][:,2:0:-1], label='Position')
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[calculate_position_p], label='Calculated')
plt.legend(loc='best')
plt.subplot(3, 1, 2)
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[strings_p], label='Strings')
plt.legend(loc='best')
plt.subplot(3, 1, 3)
plt.plot(sim.trange(sample_every=probe_sample_every), sim.data[error_p], label='Error')
plt.legend(loc='best')

plt.show()