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

while True:
    # Send the current actuator values over ZMQ
    output = []
    for side in sides:
        for actuator in side["actuators"]:
            print(actuator["name"], actuator["output"])
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

        # Now map the control signal to an angle
        desired_angle = math.pi - (control[side["side"]] * math.pi / 2)

        # Which then gets mapped relative to the wheel
        relative_angle = desired_angle - orientation
        relative_position = [3 * math.sin(relative_angle), 3 * math.cos(relative_angle)]

        # Calculate the lengths for each string
        for actuator in side["actuators"]:
            # Calculate the relative vector
            position = [actuator["position"][0] + relative_position[0], actuator["position"][1] + relative_position[1]]

            # And then the length
            actuator["output"] = math.sqrt(math.pow(position[0], 2) + math.pow(position[1], 2))
