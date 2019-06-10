#include <stdlib.h>
#include <string>
#include <iostream>

#include <zmq.hpp>
#include <unistd.h>

int main() {
    zmq::context_t context(1);
    zmq::socket_t socket(context, ZMQ_REQ);
    std::cout << "Connection to SUPERball server" << std::endl;

    socket.connect("tcp://localhost:5555");

    //do an infinite number of requests, just making the ball get bigger and smaller

    int num_actuators = 25;

    for(;;) {
        std::stringbuf buffer;
        std::ostream msg (&buffer);

        for (int i = 0; i < 25; i++) {
            msg << "10000" << ",";
        }

        std::string msg_str(buffer.str());
        buffer.str("");
        zmq::message_t req(msg_str.length());
        memcpy(req.data(), &msg_str[0], msg_str.length());
        std::cout << "sending request " << std::endl;

        socket.send(req);

        std::cout << "waiting for response (sensor data)" << std::endl;
        zmq::message_t reply;
        socket.recv(&reply);
        std::cout << "okay." << std::endl;

        usleep(10000);
    }

}