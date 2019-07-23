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

#ifndef COMBINED_SPINE_CONTROLLER_ROTVERT_POSITION_TRAJ_H
#define COMBINED_SPINE_CONTROLLER_ROTVERT_POSITION_TRAJ_H

/**
 * @file CombinedSpineControllerRotVertPositionTraj.h
 * @brief Contains the definition of class CombinedSpineControllerRotVertPositionTraj.
 * @author Drew Sabelhaus
 * $Id$
 */

// The NTRT core library
#include "core/tgObserver.h"
#include "core/tgSubject.h"
#include "core/tgTags.h"
// Bullet Physics
#include "LinearMath/btVector3.h"
// The C++ standard library
#include <string>
#include <vector>
#include <map>
#include <fstream> // for file writing

// Forward declarations
class TensegrityModel;
class tgRod;
class btDynamicsWorld;
class abstractMarker;

/**
 * A controller to track an angular difference (position) between rotating vertebrae 
 * This is used for the IROS 2018 Laika paper results.
 * Note that a specific TensegrityModel, one of the two hinged rods, is what's observed.
 */
class CombinedSpineControllerRotVertPositionTraj : public tgObserver<TensegrityModel>, public tgSubject<CombinedSpineControllerRotVertPositionTraj>
{
public:
	
  /**
   * Construct a CombinedSpineControllerRotVertPositionTraj.
   * Note that the rotation is specified with respect to the local frame
   * @param[in] startTime, a double that determines when the controller
   * begins to track the position.
   * @param[in] csvPath, a string, the full path to the CSV file that contains
   *    the trajectory of positions to track. Needs two columns (see below.)
   * @param[in] rodHingeTag, a string of the tag that's associated with the
   *    tgRods that are part of the hinged joint.
   * @param[in] fileNamePrefix, where to save marker data
   * @param[in] timeInterval, dt for logging
   * @param[in] KP, proportional control constant for tracking rot vert position
   * @param[in] KI, integral control constant for tracking rot vert position
   * @param[in] KD, derivative control const for vert pos tracking
   *@param[in] world, pointer to the btDynamicsWorld that's governing this 
   *    simulation. This is so that the controller can add in the hinge constraint.
   */
  CombinedSpineControllerRotVertPositionTraj(double startTime,
					     std::string csvPath,
					     std::string rodHingeTag,
					     std::string fileNamePrefix,
					     double timeInterval,
					     double KP,
					     double KI,
					     double KD,
					     btDynamicsWorld* world);
    
  /**
   * Nothing to delete, destructor must be virtual
   */
  virtual ~CombinedSpineControllerRotVertPositionTraj() { }

  /**
   * Create the controller
   * @param[in] subject - the TensegrityModel that is being controlled.
   */
  virtual void onSetup(TensegrityModel& subject);
    
  /**
   * Apply the torque. Note that a torque must be applied at each step,
   * so that it seems like a constant torque is applied in the simulation.
   * @param[in] subject - the TensegrityModel that is being controlled.
   * @param[in] dt, current timestep must be positive
   */
  virtual void onStep(TensegrityModel& subject, double dt);

  /**
   * We're also going to save foot position data using this controller,
   * as unfortunate as that may be for now. Here are a few functions
   * that make it easier.
   */
  //void openMarkerDataFile(std::string fileNamePrefix);
  void writeMarkerDataHeader(TensegrityModel& subject);
  std::vector<std::string> getMarkerDataHeadings(abstractMarker& marker);
  void writeMarkerDataSample(TensegrityModel& subject, double timePassed);
  std::vector<std::string> getMarkerSensorData(abstractMarker& marker);
    
private:
	
  /**
   * The private variables for each of the values passed in to the constructor.
   */
  double m_startTime;
  std::string m_csvPath;
  std::string m_rodHingeTag;
  // For the CSV file, there needs to be two columns. The first is timestamp,
  // as in the time at which each point should be commanded. Second is the rotation
  // angle that should be tracked at that timestamp.

  // This is a pointer to the first of the two rods with the tag above.
  tgRod* hingedRodA;
  // Second rod:
  tgRod* hingedRodB;

  /**
   * For IROS 2018, we need different control constants for the left/right
   * bending for each foot. This is because the cables are tensioned differently
   * on each side (Drew thinks, at least - not sure why else?
   * But, need to programatically pass these in from the app.
   */
  double m_KP;
  double m_KI;
  double m_KD;

  // Keep track of the world, for adding the hinge constraint.
  btDynamicsWorld* m_world;

  /**
   * Need an accumulator variable to determine when to start the controller.
   */
  double m_timePassed;

  /**
   * Also, need some variables to do PID control in discrete-time.
   */
  double m_accumulatedError; // for I
  double m_prevError; //  for D. Unused right now.

  /**
   * For the values from the CSV file, store them in a vector (of vectors.)
   */
  std::vector< std::vector<double> > setpointTrajectory;

  // For the data collection we're saving, store the full path to the file.
  std::string m_dataFileName;
  std::string m_dataFileNamePrefix;
  int hasBeenInitialized = 0;
  // We'll also store a counter for only collecting data at certain time intervals.
  double m_timeInterval; // like 0.1 or something
  double m_updateTime = 0.0; // will be updated/reset in onStep
  //bool logData; // Turn data logging on or off

  // Also, we're going to save the ACTUAL position of the rotating vertebra,
  // so it can be indexed against foot position. This requires
  // an extra private variable so it can be written in onStep, and read
  // in writeMarkerDataSample.
  // Since we write data before calculating / applying torque, we're recording
  // the previous timestep. Since data collection is happening so fast,
  // this shouldn't matter.
  double prevRotVertPos = 0.0;
  
  /**
   * A file stream, based on m_dataFileName.
   */
  std::ofstream tgOutput;
};

#endif // COMBINED_SPINE_CONTROLLER_ROTVERT_POSITION_TRAJ_H
