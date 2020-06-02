from ZmqClient import ZmqClient, Actuation
import math
import random

import numpy as np

from matplotlib import pyplot as plt

P_CONSTANT = 3
I_CONSTANT = 0
D_CONSTANT = 0

client = ZmqClient()
client.connect("localhost", 5555)

client.reset()

prev_time = 0
setpoint = np.array([4, 0])

actuators = [
    {
        "name": "front",
        "id": 1,
        "position": np.array([0, 0]),
        "pid": {
            "integral": 0,
            "previous": 0,
            "output": 8,
        }
    },
    {
        "name": "left",
        "id": 2,
        "position": np.array([0, 0]),
        "pid": {
            "integral": 0,
            "previous": 0,
            "output": 8,
        }
    },
    {
        "name": "right",
        "id": 3,
        "position": np.array([0, 0]),
        "pid": {
            "integral": 0,
            "previous": 0,
            "output": 8,
        }
    },
]
midpoint = np.array([0, 0])

def unit_vector(vector):
    return vector / np.linalg.norm(vector)

def angle_between(v1, v2):
    v1_u = unit_vector(v1)
    v2_u = unit_vector(v2)
    return np.arccos(np.clip(np.dot(v1_u, v2_u), -1.0, 1.0))

while True:
    # Send the current actuator values over ZMQ
    output = []
    for actuator in actuators:
        output.append(Actuation(actuator["name"], actuator["pid"]["output"]))

    client.send(output)

    # Receive data over ZMQ
    data = client.receive()

    # Extract current positions from received data
    endpoint = np.array([data.markers[0].position.x, data.markers[0].position.z])

    sum = np.array([0.0, 0.0])
    for actuator in actuators:
        actuator["position"] = np.array([data.markers[actuator["id"]].position.x, data.markers[actuator["id"]].position.z])
        sum += actuator["position"]
    
    midpoint = sum / len(actuators)

    # Print out time every second
    if data.time.abs % 1.0 < data.time.dt and prev_time % 1.0 > data.time.dt:
        print(data.time.abs)

    # Periodically make a new setpoint
    if data.time.abs % 4.0 < data.time.dt and prev_time % 4.0 > data.time.dt:
        r1 = random.random()
        r2 = random.random()

        setpoint = (1 - math.sqrt(r1)) * actuators[0]["position"] + math.sqrt(r1) * (1 - r2) * actuators[1]["position"] + r2 * math.sqrt(r1) * actuators[2]["position"]

    # Determine the error vector relative to the setpoing
    error = endpoint - setpoint

    # Do the PID for each actuator
    for actuator in actuators:
        angle = angle_between(actuator["position"] - midpoint, error)
        absolute_error = np.cos(angle) * np.linalg.norm(error)

        actuator["pid"]["integral"] += absolute_error * data.time.dt

        rate = (absolute_error - actuator["pid"]["previous"]) / data.time.dt
        actuator["pid"]["previous"] = absolute_error

        actuator["pid"]["output"] += (P_CONSTANT * absolute_error + I_CONSTANT * actuator["pid"]["integral"] + D_CONSTANT * rate) * data.time.dt

    # Keep track of the previous tick's time
    prev_time = data.time.abs
