from ZmqClient import ZmqClient, Actuation

P_CONSTANT = 3
I_CONSTANT = 10
D_CONSTANT = 0.1

integral = 0
previous = 0

front = 100
back = 100

client = ZmqClient()
client.connect("localhost", 5555)

client.reset()

while True:
    client.send([Actuation("front_right", front), Actuation("front_left", front), Actuation("back_right", back), Actuation("back_left", back)])

    data = client.receive()

    error = (data.rods[0].position.x - data.rods[1].position.x) + 0.2*data.rods[0].position.x

    integral += error * data.time.dt

    rate = (error - previous) / data.time.dt
    previous = error

    change = P_CONSTANT * error + I_CONSTANT * integral + D_CONSTANT * rate

    front = 7 + change
    back = 7 - change

    if data.time.abs > 1 and abs(error) < 0.001 and abs(rate) < 0.001:
        client.reset()
