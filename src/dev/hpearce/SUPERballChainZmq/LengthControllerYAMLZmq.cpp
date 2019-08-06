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
 * @file LengthControllerYAMLZmq.cpp
 * @brief Implementation of LengthControllerYAMLZmq.
 * @author Hammond Pearce, based on code written by Marc Leroy
 * @date Summer 2019
 * $Id$
 */

// This module
#include "config.h"

#include "LengthControllerYAMLZmq.h"
// This application
#include "yamlbuilder/TensegrityModel.h"
// This library
#include "core/tgBasicActuator.h"
#include "core/tgSpringCableActuator.h"
#include "core/tgString.h"
#include "core/tgTags.h"
#include "core/tgRod.h"

//#include "sensors/tgDataObserver.h"
// The C++ Standard Library
#include <cassert>
#include <stdexcept>
#include <vector>
#include <iostream>
#include "helpers/FileHelpers.h"
#include <stdexcept>

#include <tuple>

// Constructor assigns variables, does some simple sanity checks.
// Also, initializes the accumulator variable timePassed so that it can
// be incremented in onStep.
LengthControllerYAMLZmq::LengthControllerYAMLZmq(double startTime,
					   double minLength,
					   double rate,
					   std::vector<std::string> tagsToControl,
             zmq::socket_t* zmq_socket, tgSimulation* simulation) :
  m_startTime(startTime),
  m_minLength(minLength),
  m_rate(rate),
  m_tagsToControl(tagsToControl),
  m_timePassed(0.0)
{
  zmq_rx_sock = zmq_socket;
  m_simulation = simulation;
  // start time must be greater than or equal to zero
  if( m_startTime < 0.0 ) {
    throw std::invalid_argument("Start time must be greater than or equal to zero.");
  }
  // min length must be between 1 and 0
  else if( m_minLength > 1 ) {
    throw std::invalid_argument("minLength is a percent, must be less than 1. (100%)");
  }
  else if( m_minLength < 0.0) {
    throw std::invalid_argument("minLength is a percent, must be greater than 0.");
  }
  // rate must be greater than zero
  else if( rate < 0.0 ) {
    throw std::invalid_argument("Rate cannot be negative.");
  }
  // @TODO: what checks to make on tags?
}

/**
 * The initializeActuators method is call in onSetup to put pointers to 
 * specific actuators in the cablesWithTags array, as well as store the initial
 * rest lengths in the initialRL map.
 */
void LengthControllerYAMLZmq::initializeActuators(TensegrityModel& subject,
					       std::string tag) {
  //DEBUGGING
  std::cout << "Finding cables with the tag: " << tag << std::endl;
  // Pick out the actuators with the specified tag
  std::vector<tgBasicActuator*> foundActuators = subject.find<tgBasicActuator>(tag);
  std::cout << "The following cables were found and will be controlled: " << std::endl;
  //Iterate through array and output strings to command line
  for (std::size_t i = 0; i < foundActuators.size(); i ++) {	
    std::cout << foundActuators[i]->getTags() << std::endl;
    // Also, add the rest length of the actuator at this time
    // to the list of all initial rest lengths.
    initialRL[foundActuators[i]->getTags()] = foundActuators[i]->getRestLength();
    //DEBUGGING:
    std::cout << "Cable rest length at t=0 is "
	      << initialRL[foundActuators[i]->getTags()] << std::endl;
  }
  // Add this list of actuators to the full list. Thanks to:
  // http://stackoverflow.com/questions/201718/concatenating-two-stdvectors
  cablesWithTags.insert( cablesWithTags.end(), foundActuators.begin(),
			 foundActuators.end() );
}

/**
 * For this controller, the onSetup method initializes the actuators,
 * which means just store pointers to them and record their rest lengths.
 * This method calls the helper initializeActuators.
 */
void LengthControllerYAMLZmq::onSetup(TensegrityModel& subject)
{
  //std::cout << "Setting up the LengthControllerYAMLZmq controller." << std::endl;
  //	    << "Finding cables with tags: " << m_tagsToControl
  //	    << std::endl;
  cablesWithTags = {};
  // For all the strings in the list, call initializeActuators.
  std::vector<std::string>::iterator it;
  for( it = m_tagsToControl.begin(); it < m_tagsToControl.end(); it++ ) {
    // Call the helper for this tag.
    initializeActuators(subject, *it);
  }
  std::cout << "Finished setting up the controller. There are " << cablesWithTags.size() << " cablesWithTags to control." << std::endl;
  
  printBallCOM(subject,31);    
  resetTimePassed();
  
}

struct commandWithVal {
  std::string name;
  double value;
};

void LengthControllerYAMLZmq::onStep(TensegrityModel& subject, double dt)
{
  // First, increment the accumulator variable.
  m_timePassed += dt;
  
  //receive a message on the socket
  zmq::message_t req;

  zmq_rx_sock->recv(&req);

  std::string req_message(static_cast<char*>(req.data()), req.size());
  if(req_message == "reset") {
    std::string msg_str("reset");
    zmq::message_t resp(msg_str.length());
    memcpy(resp.data(), &msg_str[0], msg_str.length());
    zmq_rx_sock->send(resp);
    m_simulation->reset();
    return;
  }
  std::istringstream iss(req_message);

  std::size_t n = cablesWithTags.size();
  
  //convert the message into requests for each controller
  //input should be in the form "string_name:num string_name:num" etc. 
  //Strings that are not provided will not be controlled.
  //duplicated string names will have both commands applied to them (thus the last one will take precedence)

  std::string name_with_command;
    
  std::vector<struct commandWithVal> commands;
  while (iss >> name_with_command) //name_with_command looks like string_name:double_command
  {
    std::string command_string;

    struct commandWithVal com;
   
    com.name = name_with_command.substr(0, name_with_command.find(":"));
    command_string = name_with_command.substr(name_with_command.find(":")+1);
    com.value = std::stod(command_string);

    //std::cout << "string_name:" << name << ", command:" << command << std::endl;
    commands.push_back(com);
  }

  //std::cout << "received " << commands.size() << " commands " << std::endl;

  //input should be in the form "string_name:num string_name:num" etc. 
  //Strings that are not provided will not be controlled.
  //duplicated string names will have both commands applied to them (thus the last one will take precedence)

  for(std::size_t i = 0; i < commands.size(); i++)
  {
      //break command into its parts
      std::string name = commands[i].name;
      double command = commands[i].value;

      //find the string which matches this name
      std::size_t str_i;
      for(str_i = 0; str_i < cablesWithTags.size(); str_i++) {
        if(cablesWithTags[str_i]->getTagStr().find(name) != std::string::npos) {
          break;
        }
      }

      if(str_i == cablesWithTags.size()) {
        //it was not found
        continue;
      }

      // Calculate the minimum rest length for this cable.
      // Remember that m_minLength is a percent.
      double minRestLength = initialRL[cablesWithTags[str_i]->getTags()]; 

      double setRestLength = command*minRestLength + minRestLength;

      cablesWithTags[str_i]->setControlInput(setRestLength);
      
  }

  //now that commands are loaded, actuate the motors with time step dt
  for(std::size_t i = 0; i < cablesWithTags.size(); i++) 
  {
    //std::cout << "Cable " << cablesWithTags[i]->getTagStr() << ", currRestLength: " << currRestLength << std::endl;
    cablesWithTags[i]->moveMotors(dt);  
  }
  //report a response - this is the time of the simulation, followed by the com (x,y,z) of the robot, followed by the name:tension of each cable
  std::stringbuf buffer;
  std::ostream msg (&buffer);

  std::vector<double> ball_com = getBallCOM(subject);

  msg << m_timePassed << " " << ball_com[0] << " " << ball_com[1] << " " << ball_com[2];

  //get the tensions for each cable in order
  for(size_t i = 0; i < cablesWithTags.size(); i++) {
    msg << " " << cablesWithTags[i]->getTagStr() << ":" << cablesWithTags[i]->getTension();
  }

  std::string msg_str(buffer.str());
  buffer.str(""); //reset the buffer

  zmq::message_t resp(msg_str.length());
  memcpy(resp.data(), &msg_str[0], msg_str.length());
  zmq_rx_sock->send(resp);

}

void LengthControllerYAMLZmq::resetTimePassed()
{
  m_timePassed = 0;
}

std::vector<double> LengthControllerYAMLZmq::getBallCOM(TensegrityModel& subject) 
{   
    //std::vector <tgRod*> rods = find<tgRod>("tgRodInfo");
    //assert(!rods.empty());

    btVector3 ballCenterOfMass(0, 0, 0);

    #if(USEMARCYAML)
    std::vector<tgRod*> foundRods = subject.find<tgRod>("superball_rod");
    //std::cout << "Found " << foundRods.size() << " rods" << std::endl;
    #else
    //std::cout << subject.toString() << std::endl;
    std::vector<tgRod*> foundRods = subject.find<tgRod>("alu_rod");
    //std::cout << "Found " << foundRods.size() << " rods" << std::endl;
    #endif
    double ballMass = 0.0; 
    for (std::size_t i = 0; i < foundRods.size(); i++) {
        const tgRod* const rod = foundRods[i];
        const double rodMass = rod->mass();
        const btVector3 rodCenterOfMass = rod->centerOfMass();
        //std::cout << i << ", " << rodCenterOfMass << ", ";
        ballCenterOfMass += rodCenterOfMass * rodMass;
        ballMass += rodMass;
    }
    //std::cout << std::endl;

    //assert(ballMass > 0.0);
    ballCenterOfMass /= ballMass;

    // Copy to the result std::vector
    std::vector<double> result(3);
    for (size_t i = 0; i < 3; ++i) 
    { 
      result[i] = ballCenterOfMass[i]; 
    }
    return result;
    //std::cout << "\e[1;" << color << "mX=" << result[0] << ", Y=" << result[1] << ", Z=" << result[2] << "\e[0m" << std::endl;
}

void LengthControllerYAMLZmq::printBallCOM(TensegrityModel& subject, int color) 
{   
    //std::vector <tgRod*> rods = find<tgRod>("tgRodInfo");
    //assert(!rods.empty());

    
    std::vector<double> result = getBallCOM(subject);

    std::cout << "\e[1;" << color << "mX=" << result[0] << ", Y=" << result[1] << ", Z=" << result[2] << "\e[0m" << std::endl;
}

