from ZmqClient import ZmqClient, Actuation

P_CONSTANT = 20
I_CONSTANT = 0
D_CONSTANT = 0.3

integral = 0
previous = 0
out = 0

client = ZmqClient()
client.connect("localhost", 5555)

while True:
    client.send([Actuation("right_top", out)])

    data = client.receive()

    # if data.time.abs >= 10:
    #     client.reset()
    #     continue

    error = data.markers[1].position.y - data.markers[0].position.y

    integral += error * data.time.dt

    rate = (error - previous) / data.time.dt
    previous = error

    out += (P_CONSTANT * error + I_CONSTANT * integral + D_CONSTANT * rate) * data.time.dt
