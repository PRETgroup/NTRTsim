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

#ifndef HANGER_CYCLIC_CONTROLLER_H
#define HANGER_CYCLIC_CONTROLLER_H

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

// The C++ standard library
#include <string>
#include <vector>
#include <map>

// Forward declarations
class TensegrityModel;
class tgBasicActuator;

/**
 * A controller to apply the length change in the cables of the 3-bar example
 * model, for the NTRT Introduction Seminar on 2016-09-28 in BEST.
 */
class CyclicController : public tgObserver<TensegrityModel>, public tgSubject<CyclicController>
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
  CyclicController(double rate, double minLength, double maxLength);
    
  /**
   * Nothing to delete, destructor must be virtual
   */
  virtual ~CyclicController() { }

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
	
  /**
   * The private variables for each of the values passed in to the constructor.
   */
  double m_rate;
  double m_maxLength;
  double m_minLength;

  /**
   * Need an accumulator variable to determine when to start the controller.
   */
  double m_timePassed;

};

#endif // HANGER_CYCLIC_CONTROLLER_H
