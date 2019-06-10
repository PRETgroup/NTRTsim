/*
 * Copyright © 2012, United States Government, as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All rights reserved.
 * 
 * The NASA Tensegrity Robotics Toolkit (NTRT) v1 platform is licensed
 * under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0.
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific language
 * governing permissions and limitations under the License.
*/

/**
 * @file T6ZmqController.cpp
 * @brief Implementation of six strut tensegrity robot with commands via 0MQ.
 * @author Hammond Pearce
 * @version 1.0.0
 * $Id$
 */

// This module
#include "T6ZmqController.h"
// This application
#include "../T6Model.h"
// This library
#include "core/tgBasicActuator.h"
// The C++ Standard Library
#include <cassert>
#include <stdexcept>

#include <string>
#include <sstream>

#include <math.h>

T6ZmqController::T6ZmqController(zmq::socket_t* socket, const double tension) :
    m_tension(tension)
{
    zmq_rx_sock = socket;

    if (tension < 0.0)
    {
        throw std::invalid_argument("Negative tension");
    }
    //TODO: Throw exception if context is null?
}

T6ZmqController::~T6ZmqController()
{
	
}	

void T6ZmqController::onTeardown(T6Model& subject)
{
    std::size_t n = m_controllers.size();
    for(std::size_t i = 0; i < n; i++)
    {
        delete m_controllers[i];
    }
    m_controllers.clear();
}

void T6ZmqController::onSetup(T6Model& subject)
{
    //create the internal actuators
    const std::vector<tgBasicActuator*> actuators = subject.getAllActuators();
    for (size_t i = 0; i < actuators.size(); ++i)
    {
        tgBasicActuator * const pActuator = actuators[i];
        assert(pActuator != NULL);
        tgTensionController* m_tController = new tgTensionController(pActuator, m_tension);
        m_controllers.push_back(m_tController);
    }
    std::cout << "There are " << m_controllers.size() << " controllers." << std::endl;

    //create the socket to listen on
}

void T6ZmqController::onStep(T6Model& subject, double dt)
{
	if (dt <= 0.0)
    {
        throw std::invalid_argument("dt is not positive");
    }
    else
    {
        //receive a message on the socket
        zmq::message_t req;
        zmq_rx_sock->recv(&req);
        std::cout << "recieved '" << (char*)req.data() << "'" << std::endl;

        std::stringstream ss((char*)req.data());

        //convert the message into requests for each controller
        int i;
        std::vector<double> commands;
        while (ss >> i) 
        {
            commands.push_back(i);
            if(ss.peek() == ',') {
                ss.ignore();
            }
        }

        //send the requests

        std::size_t n = m_controllers.size();
        
        if(n != commands.size()) {
            throw "mismatched size of received commands vs tensegrity controllers";
        }

		for(std::size_t i = 0; i < n; i++)
        {
            m_controllers[i]->control(dt, commands[i]);
        }

        //report a response
        zmq::message_t resp(3);
        memcpy(resp.data(), "ack", 3);
        zmq_rx_sock->send(resp);
	}
}