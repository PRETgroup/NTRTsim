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

# String lengths
left_a = 4
left_b = 4
left_c = 4
right_a = 4
right_b = 4
right_c = 4

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

# Speed history
prev_z = [0] * 100

# PID variables
pid = {
    "integral": 0,
    "previous": 0,
    "output": 0
}

# PID constants
P_CONSTANT = 0.5
I_CONSTANT = 0
D_CONSTANT = 0.01

# Actuators
sides = [
    {
        "side": "left",
        "actuators": [
            {
                "name": "left_a",
                "position": [0, -4],
                "output": 4,
            },
            {
                "name": "left_b",
                "position": [-3.464, 2],
                "output": 4,
            },
            {
                "name": "left_c",
                "position": [3.464, 2],
                "output": 4,
            }
        ]
    },
    {
        "side": "right",
        "actuators": [
            {
                "name": "right_a",
                "position": [0, -4],
                "output": 4,
            },
            {
                "name": "right_b",
                "position": [-3.464, 2],
                "output": 4,
            },
            {
                "name": "right_c",
                "position": [3.464, 2],
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

    # Calculate the average speed
    speed = 0
    for i in range(len(prev_z)):
        speed += (data.rods[0].position.z - prev_z[i]) / (data.time.dt * (i + 1))
    speed /= len(prev_z)

    # Keep the history of locations for speed
    for i in range(len(prev_z) - 1):
        prev_z[len(prev_z)-i-1] = prev_z[len(prev_z)-i-2]
    prev_z[0] = data.rods[0].position.z

    # If we should maintain position with PID
    if doPID:
        error = -speed

        pid["integral"] += error * data.time.dt

        rate = (error - pid["previous"]) / data.time.dt
        pid["previous"] = error

        pid["output"] = P_CONSTANT * error + I_CONSTANT * pid["integral"] + D_CONSTANT * rate

        control["left"] = pid["output"]
        control["right"] = pid["output"]
    

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
        relative_angle = desired_angle - data.rods[0].orientation.z
        relative_position = [2 * math.sin(relative_angle), 2 * math.cos(relative_angle)]

        # Calculate the lengths for each string
        for actuator in side["actuators"]:
            # Calculate the relative vector
            position = [actuator["position"][0] + relative_position[0], actuator["position"][1] + relative_position[1]]

            # And then the length
            actuator["output"] = math.sqrt(math.pow(position[0], 2) + math.pow(position[1], 2))
