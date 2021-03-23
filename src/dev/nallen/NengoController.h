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

#ifndef ROLLING_NENGO_CONTROLLER_H
#define ROLLING_NENGO_CONTROLLER_H

/**
 * @file HorizontalSpineController.h
 * @brief Contains the definition of class LengthControllerYAML
 * @author Drew Sabelhaus
 * $Id$
 */

// The NTRT core library
#include "core/tgObserver.h"
#include "core/tgSubject.h"
#include "core/tgTags.h"
#include "core/tgRod.h"
#include "core/abstractMarker.h"

// Bullet Physics
#include "LinearMath/btVector3.h"

// The C++ standard library
#include <string>
#include <vector>
#include <map>

// The actual controller
extern "C" {
#include "RollingCylinderNetwork/rolling_cylinder.h"
#include "CylinderStringsNetwork/cylinder_strings.h"
#include "RollingCylinderStringsNetwork/rolling_cylinder_strings.h"
}

#define WHEEL_RADIUS 18.4 // cm

#define TRIANGLE_SIDE_LENGTH 28.578 // cm

// Stationary forces
#define BAR_WEIGHT 475 // cN
#define CROSS_FORCE 5 // cN

// Spring settings
#define SPRING_K 60 // N/m
#define SPRING_F0 426 // cN
#define SPRING_FMAX 837 // cN

#define OUTPUT_PERIOD 0.05 // s

typedef struct {
	double x;
	double y;
	double z;
} Position;

typedef struct {
	double weights[3];
	double result;
} Equation;

// Forward declarations
class TensegrityModel;
class tgBasicActuator;

/**
 * A controller to apply the length change in the cables of the 3-bar example
 * model, for the NTRT Introduction Seminar on 2016-09-28 in BEST.
 */
class NengoController : public tgObserver<TensegrityModel>, public tgSubject<NengoController>
{
public:
	
  /**
   * Construct a HorizontalSpineController.
   * @param[in] startTime, a double that determines when the controller
   * begins its motion, how many seconds after the simulation starts.
   * @param[in] minLength, a double that is the percent of the initial length
   * that this controller will reduce down to. E.g., if minLength = 0.25, 
   * controller will act until the rest length of the cables is 25% of initial.
   * @param[in] rate, the rate at which the rest length of the cables will be
   * changed. Expressed in meters/sec.
   * @param[in] tagsToControl, a vector (array) of strings, which is a list of the 
   * tags of all the
   * cables upon which to act. All the cables which have a tag in this list of tags
   * will be acted upon by this controller.
   */
  NengoController();
    
  /**
   * Nothing to delete, destructor must be virtual
   */
  virtual ~NengoController() { }

  /**
   * Apply the controller. On setup, adjust the cable
   * lengths one time.
   * @param[in] subject - the TensegrityModel that is being controlled. Must
   * have a list of allMuscles populated
   */
  virtual void onSetup(TensegrityModel& subject);
    
  /**
   * Changes the cables' lengths at some specified timestep.
   * @param[in] subject - the TensegrityModel that is being controlled. Must
   * have a list of allMuscles populated
   * @param[in] dt, current timestep must be positive
   */
  virtual void onStep(TensegrityModel& subject, double dt);

private:

  void setActuator(TensegrityModel& subject, std::string name, double length, double dt);
  double* convertPositionToRestLengths(Position position, double orientation);
	
  RollingCylinder rolling_cylinder_data;
  CylinderStrings cylinder_strings_data;
  RollingCylinderStrings rolling_cylinder_strings_data;

  double output_timer;
  double setpoint;
  double prev_orientation;
  double prev_distance;
  double cycles;
  int mode;

};

#endif // ROLLING_NENGO_CONTROLLER_H
