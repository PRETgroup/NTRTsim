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
 * @file LengthControllerYAML.cpp
 * @brief Implementation of LengthControllerYAML.
 * @author Drew Sabelhaus
 * $Id$
 */

// This module
#include "PidController.h"
// This application
#include "yamlbuilder/TensegrityModel.h"
// This library
#include "core/tgBasicActuator.h"
#include "core/tgSpringCableActuator.h"
#include "core/tgRod.h"
#include "core/tgString.h"
#include "core/tgTags.h"

//#include "sensors/tgDataObserver.h"
// The C++ Standard Library
#include <cassert>
#include <stdexcept>
#include <vector>
#include <iostream>
#include "helpers/FileHelpers.h"
#include <stdexcept>

// Constructor assigns variables, does some simple sanity checks.
// Also, initializes the accumulator variable timePassed so that it can
// be incremented in onStep.
PidController::PidController(double rate, double minLength, double maxLength) :
  m_rate(rate),
  m_minLength(minLength),
  m_maxLength(maxLength)
{
  // rate must be greater than zero
  if( rate < 0.0 ) {
    throw std::invalid_argument("Rate cannot be negative.");
  }
}

/**
 * For this controller, the onSetup method initializes the actuators,
 * which means just store pointers to them and record their rest lengths.
 * This method calls the helper initializeActuators.
 */
void PidController::onSetup(TensegrityModel& subject)
{
    m_timePassed = 0;
    m_cycle = m_rate;
    m_integral = 0;
    m_previousError = 0;
    leftLength = 0;
    rightLength = 0;

    // Add the required markers for our controller
    subject.addMarker(abstractMarker(subject.find<tgRod>("hanger")[0]->getPRigidBody(),
			   btVector3(0, 0, 5) - subject.find<tgRod>("hanger")[0]->getPRigidBody()->getCenterOfMassPosition(),
			   btVector3(1, 0, 0), MARKER_HANGER_LEFT));

    subject.addMarker(abstractMarker(subject.find<tgRod>("hanger")[0]->getPRigidBody(),
			   btVector3(0, 10, 5) - subject.find<tgRod>("hanger")[0]->getPRigidBody()->getCenterOfMassPosition(),
			   btVector3(0, 0, 1), MARKER_HANGER_RIGHT));

    subject.addMarker(abstractMarker(subject.find<tgRod>("top_bar")[0]->getPRigidBody(),
			   btVector3(0, 10, 0) - subject.find<tgRod>("top_bar")[0]->getPRigidBody()->getCenterOfMassPosition(),
			   btVector3(1, 0, 0), MARKER_TOP_BAR_LEFT));

    subject.addMarker(abstractMarker(subject.find<tgRod>("top_bar")[0]->getPRigidBody(),
			   btVector3(0, 10, 10) - subject.find<tgRod>("top_bar")[0]->getPRigidBody()->getCenterOfMassPosition(),
			   btVector3(0, 0, 1), MARKER_TOP_BAR_RIGHT));
}

abstractMarker getMarker(std::vector<abstractMarker> markers, int nodeNumber) {
    std::vector<abstractMarker>::iterator it;
    for(it = markers.begin(); it != markers.end(); ++it) {
        if((*it).getNodeNumber() == nodeNumber) {
            return *it;
        }
    }

    return abstractMarker();
}

void PidController::onStep(TensegrityModel& subject, double dt)
{
  m_timePassed += dt;

  m_cycle += dt;

  if(m_cycle >= m_rate) {
    m_cycle = 0;
    double f = (double)rand() / RAND_MAX;
    leftLength = m_minLength + f * (m_maxLength - m_minLength);
  }
  
  std::vector<tgBasicActuator*> leftActuators = subject.find<tgBasicActuator>("left");
  for(std::size_t i = 0; i < leftActuators.size(); i++) {
    leftActuators[i]->setControlInput(leftLength, dt);
  }

  /*btVector3 leftPosition = getMarker(subject.getMarkers(), MARKER_HANGER_LEFT).getWorldPosition();

  btVector3 rightPosition = getMarker(subject.getMarkers(), MARKER_HANGER_RIGHT).getWorldPosition();

  double error = rightPosition[1] - leftPosition[1];

  m_integral += error * dt;

  double rate = (error - m_previousError) / dt;
  m_previousError = error;

  rightLength += (P_CONSTANT * error + I_CONSTANT * m_integral + D_CONSTANT * rate) * dt;

  //std::cout << "P: " << error << " / I: " << m_integral << " / D: " << rate << " / O: " << rightLength << std::endl;

  std::vector<tgBasicActuator*> rightActuators = subject.find<tgBasicActuator>("right");
  for(std::size_t i = 0; i < rightActuators.size(); i++) {
    if(rightLength < 0) {
      rightActuators[i]->setControlInput(0, dt);
    }
    else {
      rightActuators[i]->setControlInput(rightLength, dt);
    }
  }*/

  //usleep(100);
}
	
 
