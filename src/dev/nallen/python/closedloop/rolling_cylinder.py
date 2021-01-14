from ZmqClient import ZmqClient, Actuation
import math
import random

import numpy as np

from matplotlib import pyplot as plt

import pygame, sys
import pygame.locals

# Connect to the simulator over ZMQ
client = ZmqClient()
client.connect("localhost", 5555)

client.reset()

# Generate the pygame UI to control the cylinder
pygame.init()
BLACK = (0,0,0)
WIDTH = 640
HEIGHT = 480
windowSurface = pygame.display.set_mode((WIDTH, HEIGHT), 0, 32)

windowSurface.fill(BLACK)

# Control signals
keys = {
    'w': False,
    'a': False,
    's': False,
    'd': False
}

# Position and Speed smoothing
position_smoothing = 100
speed_smoothing = 100
orientation_smoothing = 1

# History to enable smoothing
prev_z = [0] * max(position_smoothing, speed_smoothing)
prev_orientation = [0] * orientation_smoothing

# PID variables
pid = {
    "setpoint": 20,
    "integral": 0,
    "previous": 0,
    "output": 0
}

# PID constants
P_CONSTANT = 0.2  # 0.5
I_CONSTANT = 0.0  # 0.01
D_CONSTANT = 0.1  # 0.02

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

def convertPositionToRestLengths(side, pos, orientation):
    rest_lengths = [0, 0, 0]
    
    equ1 = [
        {"weights": [ 0, 0, 0 ], "result": 0 }, # X - Balanced
        {"weights": [ 0, 0, 0 ], "result": 2 }, # Y - Bar weight
        {"weights": [ 0, 0, 0 ], "result": 1 }, # Z - Cross force
    ]

    pos.append(-1)

    i = 0
    for actuator in side["actuators"]:
        actuator_pos = [0, 0, 0]
        actuator_pos[0] = (actuator["position"][0] * math.cos(orientation)) + (actuator["position"][1] * math.sin(orientation))
        actuator_pos[1] = (actuator["position"][1] * math.cos(orientation)) - (actuator["position"][0] * math.sin(orientation))
        actuator_pos[2] = 0

        difference = [0, 0, 0]
        difference[0] = actuator_pos[0] - pos[0]
        difference[1] = actuator_pos[1] - pos[1]
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

    SPRING_K = 0.6
    SPRING_F0 = 4.26
    SPRING_FMAX = 8.37

    for i in range(len(result)):
        if result[i] > SPRING_F0:
            if result[i] >= SPRING_FMAX:
                rest_lengths[i] -= (SPRING_FMAX - SPRING_F0) / SPRING_K
            else:
                rest_lengths[i] -= (result[i] - SPRING_F0) / SPRING_K

    return rest_lengths

while True:
    # Send the current actuator values over ZMQ
    output = []
    for side in sides:
        for actuator in side["actuators"]:
            output.append(Actuation(actuator["name"], actuator["output"]))

    client.send(output)

    # Capture key presses from pygame
    for event in pygame.event.get():
        # Quit event
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

        # Keydown
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_w:
                keys['w'] = True
            if event.key == pygame.K_a:
                keys['a'] = True
            if event.key == pygame.K_s:
                keys['s'] = True
            if event.key == pygame.K_d:
                keys['d'] = True

        # Keyup
        elif event.type == pygame.KEYUP:
            if event.key == pygame.K_w:
                keys['w'] = False
            if event.key == pygame.K_a:
                keys['a'] = False
            if event.key == pygame.K_s:
                keys['s'] = False
            if event.key == pygame.K_d:
                keys['d'] = False

    # Generate control signals based off the keys that were pressed
    control = {
        "left": 0,
        "right": 0,
    }
    doPID = True
    if keys['w']:
        control["left"] += 1
        control["right"] += 1
        doPID = False
    if keys['s']:
        control["left"] -= 1
        control["right"] -= 1
        doPID = False
    if keys['a']:
        control["left"] -= 1
        control["right"] += 1
        doPID = False
    if keys['d']:
        control["left"] += 1
        control["right"] -= 1
        doPID = False

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
        speed += (position - prev_z[i]) / (data.time.dt * (i + 1))
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


    # If we should maintain position with PID
    if doPID:
        # error = pid["setpoint"] - speed
        error = pid["setpoint"] - position

        pid["integral"] += error * data.time.dt

        rate = (error - pid["previous"]) / data.time.dt
        pid["previous"] = error

        pid["output"] = P_CONSTANT * error + I_CONSTANT * pid["integral"] + D_CONSTANT * rate

        control["left"] = pid["output"]
        control["right"] = pid["output"]
    
        print(round(position, 2), " / ", round(speed, 2), " / ", round(pid["output"], 2), " / ", round(orientation, 2))

    # For each side, do the logic
    for side in sides:
        # Saturate at [1, -1]
        if control[side["side"]] < -1:
            control[side["side"]] = -1
        elif control[side["side"]] > 1:
            control[side["side"]] = 1

        # Work out the desired position of the bar
        desired_angle = control[side["side"]] * math.pi / 2
        desired_position = [3 * math.sin(desired_angle), 3 * -1 * math.cos(desired_angle)]

        # Calculate the lengths for each string
        lengths = convertPositionToRestLengths(side, desired_position, orientation)

        # Set each length
        i = 0
        for actuator in side["actuators"]:
            actuator["output"] = lengths[i]
            i += 1
