import zmq


class TensegrityController:
    def __init__(self, ip_address, port=5555, string_number=24, simulation=True):

        # zmq socket initialization
        self.port = port
        self.context = zmq.Context()
        self.socket = self.context.socket(zmq.REQ)
        self.socket.connect("tcp://{ip_address}:{port}".format(ip_address, self.port))

        # Command messages parameters
        if simulation:
            self.string_tag_template = "m{:02d}:"
        else:
            self.string_tag_template = "M{:02d}:"

        self.string_number = string_number
        self.string_tags = [self.string_tag_template.format() for i in range(24)]
        print("String tags:")
        print(string_names)

        # Internal info
        self.state = {"t": 0, "com_pos": None}
        self.state_history = []

    def send_commands(self, commands):
        # Sending commands via zmq socket
        commands_msg = self.commands_to_msg(commands)
        print("Commands message sent:")
        print(commands_msg)
        self.socket.send_string(commands_msg)

        # Waiting for simulation to return its state
        state_msg = self.socket.recv()
        print("State message received:")
        print(state_msg)

        # Decoding simulation state message
        state_msg_split = state_msg_split.split()
        self.state["t"] = float(state_msg_split[0])
        self.state["com_pos"] = (
            float(state_msg_split[1]),
            float(state_msg_split[2]),
            float(state_msg_split[3]),
        )
        # for string_tag, length in zip(self.string_tags, state_msg_split[4:]):
        #     state["{}_lenght"] = float(length)

    def commands_to_msg(self, commands):
        msg = " ".join(
            [
                "{}{}".format(string_tag, command)
                for string_tag, command in zip(self.string_tags, commands)
            ]
        )
        return msg

    def reset(self):

        self.socket.send_string("reset")  # Send reset request to NTRTsim
        self.socket.recv()  # Throw away response

        self.state = {"t": 0, "com_pos": None}
        self.state_history = []
