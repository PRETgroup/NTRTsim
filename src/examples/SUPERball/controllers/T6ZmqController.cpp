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
    lifetime = 0;

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
    lifetime = 0;
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
    lifetime = 0;
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

        std::string req_message(static_cast<char*>(req.data()), req.size());
        std::istringstream iss(req_message);

        //convert the message into requests for each controller
        double i;
        std::vector<double> commands;
        while (iss >> i) 
        {
            commands.push_back(i);
            if(iss.peek() == ',') {
                iss.ignore();
            }
        }

        std::cout << "received " << commands.size() << " commands " << std::endl;

        //send the requests

        std::size_t n = m_controllers.size();
        
        if(n != commands.size()) {
            throw "mismatched size of received commands vs tensegrity controllers";
        }

		for(std::size_t i = 0; i < n; i++)
        {
            m_controllers[i]->control(dt, commands[i]);
        }

        //increment lifetime
        lifetime += dt;

				// Compute SUPERBall CoM
				btVector3 ball_com(0,0,0);

				std::vector<tgRod*> found_rods  = subject.find<tgRod>("superball_rod");
				double ball_mass = 0.0;
				for( unsigned int = 0; i < found_rods.size(); ++i){
					const tgRod* const rod = found_rods[i];
					assert(rod != NULL);

					const double rod_mass = rod->mass();
					const btVector3 rod_com = rod->centerOfMass();
					ball_com += rod_com*rod_mass;
					ball_mass += rod_mass;
				}
				ball_com /= ball_mass;


        //report a response - at some point this will be sensor data, for now it is just the internal time of 
        //  the simulator (useful for synchronisation purposes)
        std::stringbuf buffer;
        std::ostream msg (&buffer);

        msg << lifetime << ball_com[0] << ball_com[1] << ball_com[2];

        std::string msg_str(buffer.str());
        buffer.str(""); //reset the buffer

        zmq::message_t resp(msg_str.length());
        memcpy(resp.data(), &msg_str[0], msg_str.length());
        zmq_rx_sock->send(resp);

	}
}
