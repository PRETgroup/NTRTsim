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
#include "CyclicController.h"
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
CyclicController::CyclicController(double rate, double minLength, double maxLength) :
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
void CyclicController::onSetup(TensegrityModel& subject)
{
    m_timePassed = 0;
}

void CyclicController::onStep(TensegrityModel& subject, double dt)
{
  m_timePassed += dt;

  double cycle = std::fmod(m_timePassed, m_rate);

  double leftLength = 0;
  double rightLength = 0;
  if(cycle < m_rate / 4) {
    leftLength = cycle / (m_rate / 4) * (m_maxLength - m_minLength) + m_minLength;
    rightLength = m_minLength;
  }
  else if(cycle < 2 * m_rate / 4) {
    leftLength = m_maxLength;
    rightLength = (cycle - m_rate / 4) / (m_rate / 4) * (m_maxLength - m_minLength) + m_minLength;
  }
  else if(cycle < 3 * m_rate / 4) {
    leftLength = (cycle - 2 * m_rate / 4) / (m_rate / 4) * (m_minLength - m_maxLength) + m_maxLength;
    rightLength = m_maxLength;
  }
  else {
    leftLength = m_minLength;
    rightLength = (cycle - 3 * m_rate / 4) / (m_rate / 4) * (m_minLength - m_maxLength) + m_maxLength;
  }
  
  std::vector<tgBasicActuator*> leftActuators = subject.find<tgBasicActuator>("left");
  for(std::size_t i = 0; i < leftActuators.size(); i++) {
    leftActuators[i]->setControlInput(leftLength, dt);
  }

  std::vector<tgBasicActuator*> rightActuators = subject.find<tgBasicActuator>("right_top");
  for(std::size_t i = 0; i < rightActuators.size(); i++) {
    rightActuators[i]->setControlInput(rightLength, dt);
  }
}
	
 
