#include <stdlib.h>
#include <string>
#include <iostream>
#include <sstream>

#include <zmq.hpp>
#include <unistd.h>

#include <math.h>

int main() {
    zmq::context_t context(1);
    zmq::socket_t socket(context, ZMQ_REQ);
    std::cout << "Connection to SUPERball server" << std::endl;

    socket.connect("tcp://localhost:5555");

    //do an infinite number of requests, just making the ball get bigger and smaller

    int num_actuators = 25;

    double lifetime = 0.0;
    
    for(;;) {
        //compute the behaviour

        double tr = sin(2*M_PI*((double)1/4)*lifetime)+1.0;

        std::stringbuf buffer;
        std::ostream msg (&buffer);

        for (int i = 0; i < num_actuators; i++) {
            msg << 1*tr << ",";
        }

        std::string msg_str(buffer.str());
        buffer.str(""); //reset the buffer
        zmq::message_t req(msg_str.length());
        memcpy(req.data(), &msg_str[0], msg_str.length());
        std::cout << "sending request " << (char*)req.data() << std::endl;
        msg_str = "";

        socket.send(req);

        std::cout << "waiting for response (simulator time)" << std::endl;
        zmq::message_t reply;
        socket.recv(&reply);

        std::string reply_message(static_cast<char*>(reply.data()), reply.size());
        std::istringstream reply_ss(reply_message);
        reply_ss >> lifetime;

        std::cout << "Lifetime:" << lifetime << std::endl;

        usleep(1000);
    }

}
