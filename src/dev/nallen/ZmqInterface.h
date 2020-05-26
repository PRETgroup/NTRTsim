#ifndef ZMQ_INTERFACE_H
#define ZMQ_INTERFACE_H

// The NTRT core library
#include "core/tgObserver.h"
#include "core/tgSubject.h"
#include "core/tgTags.h"
#include "core/tgRod.h"
#include "core/abstractMarker.h"
#include "core/tgSimulation.h"
#include "core/tgBasicActuator.h"

// YAML Building
#include "yamlbuilder/TensegrityModel.h"

// Bullet Physics
#include "LinearMath/btVector3.h"

// The C++ standard library
#include <string>
#include <vector>
#include <map>
#include <cassert>
#include <stdexcept>
#include <iostream>
#include <unordered_set>

#include <zmq.hpp>

// Forward declarations
class TensegrityModel;
class tgBasicActuator;

class ZmqInterface : public tgObserver<TensegrityModel>, public tgSubject<ZmqInterface>
{
public:
    ZmqInterface(unsigned int port, tgSimulation* simulation);

    virtual ~ZmqInterface() { }

    void onSetup(TensegrityModel& subject);

    void onStep(TensegrityModel& subject, double dt);

    void sendMarkers(bool send_markers) {
        this->send_markers = send_markers;
    }

    void addRodTagToSend(std::string tag) {
        if(std::find(rods_to_send.begin(), rods_to_send.end(), tag) == rods_to_send.end())
            this->rods_to_send.push_back(tag);
    }

    void removeRodTagToSend(std::string tag) {
        rods_to_send.erase(std::remove(rods_to_send.begin(), rods_to_send.end(), tag), rods_to_send.end());
    }

private:
    const std::string word_delimiter = " ";
    const std::string part_delimiter = ":";

    tgSimulation* simulation;

    std::vector<std::string> rods_to_send;
    bool send_markers;

    double time_elapsed;

    zmq::context_t zmq_context;
	zmq::socket_t* zmq_socket;

    std::vector<tgBasicActuator*> parseReceivedCommand(std::string command, tgModel& subject);
    void moveActuators(std::vector<tgBasicActuator*> actuators, double dt);
};

#endif // ZMQ_INTERFACE_H
