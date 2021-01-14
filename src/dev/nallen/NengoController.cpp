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

  rolling_cylinder_data.position_in = distance;
  rolling_cylinder_data.setpoint_in = setpoint * -1;
  rolling_cylinder_data.speed_in = speed;
  rolling_cylinder_data.orientation_in = orientation;

  RollingCylinderRun(&rolling_cylinder_data);

  output_timer -= dt;
  if(output_timer <= 0) {
	std::cout << rolling_cylinder_data.setpoint_p * -1 << " / " << rolling_cylinder_data.speed_p;
	std::cout << " / " << rolling_cylinder_data.error_p << " / " << rolling_cylinder_data.main_p;
	std::cout << " / " << rolling_cylinder_data.main2_p << "\r\n";

	output_timer = OUTPUT_PERIOD;
  }

  double desired_angle = rolling_cylinder_data.output_out * M_PI_2;
  Position desired_position = {4 * sin(desired_angle), 4 * -1 * cos(desired_angle), -0.1};

  double* rest_lengths = convertPositionToRestLengths(desired_position, orientation);

  setActuator(subject, "left_a", rest_lengths[0], dt);
  setActuator(subject, "left_b", rest_lengths[1], dt);
  setActuator(subject, "left_c", rest_lengths[2], dt);
  setActuator(subject, "right_a", rest_lengths[0], dt);
  setActuator(subject, "right_b", rest_lengths[1], dt);
  setActuator(subject, "right_c", rest_lengths[2], dt);
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
	
Position endpoints[] = {
		{0, TRIANGLE_SIDE_LENGTH / (2 * cos(30 * M_PI / 180)), 0},
		{TRIANGLE_SIDE_LENGTH / 2, -tan(30 * M_PI / 180) * TRIANGLE_SIDE_LENGTH / 2, 0},
		{-TRIANGLE_SIDE_LENGTH / 2, -tan(30 * M_PI / 180) * TRIANGLE_SIDE_LENGTH / 2, 0},
};

double* NengoController::convertPositionToRestLengths(Position position, double orientation) {
	static double rest_lengths[3];

	// Three equations in three dimensions
	Equation equ1[] = {
		{ { 0, 0, 0 }, 0 },           // (X)
	  { { 0, 0, 0 }, BAR_WEIGHT },  // (Y)
	  { { 0, 0, 0 }, CROSS_FORCE }, // (Z)
	};

	int i = 0;
	for(i=0; i<3; i++) {
		// Rotate endpoint positions
		Position endpoint;
		endpoint.x = (endpoints[i].x * cos(orientation)) + (endpoints[i].y * sin(orientation));
		endpoint.y = (endpoints[i].y * cos(orientation)) - (endpoints[i].x * sin(orientation));
		endpoint.z = endpoints[i].z;

    double angle = atan2(endpoint.y, endpoint.x);
    Position offset = {0.925*cos(angle), 0.925*sin(angle), 0};

		// Get difference vector
		Position difference;
		difference.x = endpoint.x - position.x - offset.x;
		difference.y = endpoint.y - position.y - offset.y;
		difference.z = endpoint.z - position.z - offset.z;

		// Calculate the total length
		double sum = 0;
		sum += pow(difference.x, 2);
		sum += pow(difference.y, 2);
		sum += pow(difference.z, 2);
		double length = sqrt(sum);

		// Update the equations
		equ1[0].weights[i] = difference.x / length;
		equ1[1].weights[i] = difference.y / length;
		equ1[2].weights[i] = difference.z / length;

		// And set the initial length
		rest_lengths[i] = length;
	}

	// Temporary equations
	Equation equ2[2], equ3[1];

  // First step, populate equ2 based on removing c from equ

	// A - B
	equ2[0].result = equ1[0].result * equ1[1].weights[2] - equ1[1].result * equ1[0].weights[2];
	equ2[0].weights[0] = equ1[0].weights[0] * equ1[1].weights[2] - equ1[1].weights[0] * equ1[0].weights[2];
	equ2[0].weights[1] = equ1[0].weights[1] * equ1[1].weights[2] - equ1[1].weights[1] * equ1[0].weights[2];
	equ2[0].weights[2] = 0;

	// B - C
	equ2[1].result = equ1[1].result * equ1[2].weights[2] - equ1[2].result * equ1[1].weights[2];
	equ2[1].weights[0] = equ1[1].weights[0] * equ1[2].weights[2] - equ1[2].weights[0] * equ1[1].weights[2];
	equ2[1].weights[1] = equ1[1].weights[1] * equ1[2].weights[2] - equ1[2].weights[1] * equ1[1].weights[2];
	equ2[1].weights[2] = 0;

	// Next step, populate equ3 based on removing b from equ2

	// D - E
	equ3[0].result = equ2[0].result * equ2[1].weights[1] - equ2[1].result * equ2[0].weights[1];
	equ3[0].weights[0] = equ2[0].weights[0] * equ2[1].weights[1] - equ2[1].weights[0] * equ2[0].weights[1];
	equ3[0].weights[1] = 0;
	equ3[0].weights[2] = 0;

	// Finally, substitute values back into equations to create result
  double result[3];
	result[0] = equ3[0].result / equ3[0].weights[0];
	result[1] = (equ2[0].result - equ2[0].weights[0] * result[0]) / equ2[0].weights[1];
	result[2] = (equ1[0].result - equ1[0].weights[0] * result[0] - equ1[0].weights[1] * result[1]) / equ1[0].weights[2];

  // Now map the forces to reductions in rest length
	for(i=0; i<3; i++) {
		if(result[i] > SPRING_F0) {
			// if(result[i] >= SPRING_FMAX) {
			// 	rest_lengths[i] -= (SPRING_FMAX - SPRING_F0) / SPRING_K;
			// }
			// else {
				rest_lengths[i] -= (result[i] - SPRING_F0) / SPRING_K;
			// }
		}
	}

	return rest_lengths;
}
