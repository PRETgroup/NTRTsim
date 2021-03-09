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
#include "NengoController.h"
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

#include <curses.h>

// Constructor assigns variables, does some simple sanity checks.
// Also, initializes the accumulator variable timePassed so that it can
// be incremented in onStep.
NengoController::NengoController() {
}

/**
 * For this controller, the onSetup method initializes the actuators,
 * which means just store pointers to them and record their rest lengths.
 * This method calls the helper initializeActuators.
 */
void NengoController::onSetup(TensegrityModel& subject)
{
  RollingCylinderInit(&rolling_cylinder_data);

  CylinderStringsInit(&cylinder_strings_data);

  initscr();
  noecho();
  nodelay(stdscr, TRUE);
  keypad(stdscr, TRUE);

  output_timer = OUTPUT_PERIOD;
  setpoint = 0;
  prev_orientation = 0;
  prev_distance = 0;
  cycles = 0;
}

void NengoController::onStep(TensegrityModel& subject, double dt)
{
	int ch;
	while((ch = getch()) != ERR) {
		if(ch == KEY_UP) {
			setpoint += 0.1;
		}
		else if(ch == KEY_DOWN) {
			setpoint -= 0.1;
		}
		else if(ch >= '0' && ch <= '9') {
			setpoint = (ch - '0');
		}
	}

  double orientation = 0;

  std::vector<tgRod*> found = subject.find<tgRod>("wheel");

  if(found.size() > 0) {
    btVector3 wheel_orientation = found[0]->orientation();
    orientation = wheel_orientation.getZ();
  }

  if(orientation > M_PI_2 && prev_orientation < -M_PI_2) {
    cycles -= 1;
  }
  else if(orientation < -M_PI_2 && prev_orientation > M_PI_2) {
    cycles += 1;
  }
  prev_orientation = orientation;

  double total_cycles = cycles + (orientation / (2*M_PI));
  double distance = total_cycles * 2 * M_PI * WHEEL_RADIUS;

  double speed = (distance - prev_distance) / dt;
  prev_distance = distance;

  rolling_cylinder_data.setpoint_in = setpoint * -1;
  rolling_cylinder_data.speed_in = speed;

  RollingCylinderRun(&rolling_cylinder_data);

  cylinder_strings_data.setpoint_in = rolling_cylinder_data.control_out;
  cylinder_strings_data.orientation_in = orientation;

  CylinderStringsRun(&cylinder_strings_data);

  output_timer -= dt;
  if(output_timer <= 0) {
	  std::cout << setpoint << " / " << speed << " / " << orientation;
	  std::cout << " / " << (setpoint - speed) << " / " << rolling_cylinder_data.control_out << "\r\n";

	  output_timer = OUTPUT_PERIOD;
  }

  setActuator(subject, "left_a", cylinder_strings_data.strings_0_out, dt);
  setActuator(subject, "left_b", cylinder_strings_data.strings_1_out, dt);
  setActuator(subject, "left_c", cylinder_strings_data.strings_2_out, dt);
  setActuator(subject, "right_a", cylinder_strings_data.strings_0_out, dt);
  setActuator(subject, "right_b", cylinder_strings_data.strings_1_out, dt);
  setActuator(subject, "right_c", cylinder_strings_data.strings_2_out, dt);
}

void NengoController::setActuator(TensegrityModel& subject, std::string name, double length, double dt) {
  std::vector<tgBasicActuator*> actuators = subject.find<tgBasicActuator>(name);
  for(std::size_t i = 0; i < actuators.size(); i++) {
    if(length < 0) {
      actuators[i]->setControlInput(0, dt);
    }
    else {
      actuators[i]->setControlInput(length, dt);
    }
  } 
}
