#include "ZmqInterface.h"

ZmqInterface::ZmqInterface(unsigned int port, tgSimulation* simulation) :
    simulation(simulation)
{
    // Create the socket
    zmq_socket = new zmq::socket_t(zmq_context, ZMQ_REP);

    // Create the listing address
    std::ostringstream stringStream;
    stringStream << "tcp://*:" << port;

    // And now bind to that address
    std::cout << "Binding ZMQ on " << stringStream.str() << std::endl;
    zmq_socket->bind(stringStream.str());
    std::cout << "Bound" << std::endl;
}

void ZmqInterface::onSetup(TensegrityModel& subject)
{
    time_elapsed = 0.0;
}

void ZmqInterface::onStep(TensegrityModel& subject, double dt)
{
    // Keep track of the current time
    time_elapsed += dt;

    // Receive a message from ZMQ
    zmq::message_t req;
    zmq_socket->recv(req);

    // Turn the message into a string
    std::string req_message(static_cast<char*>(req.data()), req.size());

    // If the client has requested a reset
    if(req_message == "reset") {
        // First confirm the reset to the client
        std::string msg_str("reset");
        zmq::message_t resp(msg_str.length());
        memcpy(resp.data(), &msg_str[0], msg_str.length());
        zmq_socket->send(resp, zmq::send_flags::none);

        // And then reset the simulation
        simulation->reset();
        return;
    }

    // Otherwise, let's parse what we received
    size_t pos = 0;
    std::vector<tgBasicActuator*> actuators_modified;
    while((pos = req_message.find(word_delimiter)) != std::string::npos) {
        std::vector<tgBasicActuator*> new_actuators = parseReceivedCommand(req_message.substr(0, pos), subject);
        actuators_modified.insert(actuators_modified.end(), new_actuators.begin(), new_actuators.end());

        req_message.erase(0, pos + word_delimiter.length());
    }

    std::vector<tgBasicActuator*> new_actuators = parseReceivedCommand(req_message, subject);
    actuators_modified.insert(actuators_modified.end(), new_actuators.begin(), new_actuators.end());

    moveActuators(actuators_modified, dt);

    // And send a response
    std::ostringstream stringStream;
    stringStream << "time:" << time_elapsed << ":" << dt;

    if(rods_to_send.size() > 0) {
        for(std::size_t i=0; i<rods_to_send.size(); i++) {
            std::vector<tgRod*> found = subject.find<tgRod>(rods_to_send[i]);

            for(std::size_t j=0; j<found.size(); j++) {
                btVector3 position = found[j]->centerOfMass();
                btVector3 orientation = found[j]->orientation();
                stringStream << " rod:" << found[j]->getTags().joinTags(",")
                     << ":" << position.getX() << ":" << position.getY() << ":" << position.getZ()
                     << ":" << orientation.getX() << ":" << orientation.getY() << ":" << orientation.getZ()
                     << ":" << found[j]->mass();
            }
        }
    }

    if(send_markers) {
        std::vector<abstractMarker> markers = subject.getMarkers();
        for(std::size_t i=0; i<markers.size(); i++) {
            btVector3 position = markers[i].getWorldPosition();
            stringStream << " marker:" << markers[i].getNodeNumber()
                 << ":"<< position.getX() << ":" << position.getY() << ":" << position.getZ();
        }
    }

    zmq::message_t resp(stringStream.str().length());
    memcpy(resp.data(), &stringStream.str()[0], stringStream.str().length());
    zmq_socket->send(resp, zmq::send_flags::none);
}

std::vector<tgBasicActuator*> ZmqInterface::parseReceivedCommand(std::string command, tgModel& subject) {
    if(command.length() > 0) {
        std::vector<std::string> parts;

        size_t pos = 0;
        while((pos = command.find(part_delimiter)) != std::string::npos) {
            parts.push_back(command.substr(0, pos));
            command.erase(0, pos + part_delimiter.length());
        }

        parts.push_back(command);

        if(parts[0] == "act" && parts.size() == 3) {
            double value = std::stod(parts[2]);
            std::vector<tgBasicActuator*> actuators = subject.find<tgBasicActuator>(parts[1]);
            for(std::size_t i = 0; i < actuators.size(); i++) {
                actuators[i]->setControlInput(std::max(0.0, value));
            }

            return actuators;
        }
    }

    return std::vector<tgBasicActuator*>();
}

void ZmqInterface::moveActuators(std::vector<tgBasicActuator*> actuators, double dt) {
    std::unordered_set<tgBasicActuator*> actuators_set;
    for(tgBasicActuator* actuator : actuators)
        actuators_set.insert(actuator);

    actuators.assign(actuators_set.begin(), actuators_set.end());

    for(size_t i=0; i<actuators.size(); i++) {
        actuators[i]->moveMotors(dt);
    }
}