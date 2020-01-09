from controller import TensegrityController
import random

seed = 0
ip_address = ""
SUPERball_controller = TensegrityController(ip_address)

while True:
    commands = [
        random.uniform(0.5, 2) for i in range(SUPERball_controller.string_number)
    ]
    SUPERball_controller.send_commands(commands)
