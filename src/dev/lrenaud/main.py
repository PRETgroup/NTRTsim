from controller import TensegrityController
import random

seed = 0
ip_address = "localhost"
SUPERball_controller = TensegrityController(ip_address)

while True:
    commands = [
        random.uniform(-1, 1) for i in range(SUPERball_controller.string_number)
    ]
##    commands = [
##        0 for i in range(SUPERball_controller.string_number)
##    ]
    SUPERball_controller.send_commands(commands)
