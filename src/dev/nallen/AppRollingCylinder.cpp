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
 * @file AppHorizontalSpine.cpp
 * @brief Contains the definition function main() for App3BarYAML
 * which builds an example 3 bar prism using YAML.
 * @author Andrew Sabelhaus
 * $Id$
 */

// This application
#include "yamlbuilder/TensegrityModel.h"
//#include "LengthControllerYAML.h"
// This library
#include "core/terrain/tgBoxGround.h"
#include "core/tgModel.h"
#include "core/tgSimulation.h"
#include "core/tgSimViewGraphics.h"
#include "core/tgWorld.h"
#include "core/abstractMarker.h"
// Bullet Physics
#include "LinearMath/btVector3.h"
// The C++ Standard Library
#include <iostream>
#include <string>
#include <vector>

#include "sensors/tgDataLogger2.h"
#include "sensors/tgRodSensorInfo.h"
#include "sensors/tgSpringCableActuatorSensorInfo.h"

#include "HangingMarkers.h"

#include "ZmqInterface.h"

/**
 * The entry point.
 * @param[in] argc the number of command-line arguments
 * @param[in] argv argv[0] is the executable name
 * @param[in] argv argv[1] is the path of the YAML encoded structure
 * @return 0
 */
int main(int argc, char** argv)
{
    // For this YAML parser app, need to check that an argument path was
    // passed in.
    if (argv[1] == NULL)
    {
      throw std::invalid_argument("No arguments passed in to the application. You need to specify which YAML file you wouldd like to build.");
    }
  
    // create the ground and world. Specify ground rotation in radians
    const double yaw = 0.0;
    const double pitch = 0.0;
    const double roll = 0.0;
    const tgBoxGround::Config groundConfig(btVector3(yaw, pitch, roll));
    // the world will delete this
    tgBoxGround* ground = new tgBoxGround(groundConfig);

    const tgWorld::Config config(981); // gravity, cm/sec^2
    tgWorld world(config, ground);

    // create the view
    const double timestep_physics = 0.001; // seconds
    //const double timestep_physics = 0.001;
    const double timestep_graphics = 1.f/144.f; // seconds
    tgSimViewGraphics view(world, timestep_physics, timestep_graphics);
    //tgSimView view(world, timestep_physics, timestep_graphics);

    // create the simulation
    tgSimulation simulation(view);

    // create the models with their controllers and add the models to the simulation
    // This constructor for TensegrityModel takes the 'debugging' flag as the
    // second argument.
    TensegrityModel* const myModel = new TensegrityModel(argv[1],false);

    // Set up the markers
    //HangingMarkers* const markers = new HangingMarkers();
    //myModel->attach(markers);

    // Add the model to the world
    simulation.addModel(myModel);

    // Create the ZMQ Interface
    ZmqInterface* const zmqInterface = new ZmqInterface(5555, &simulation);
    zmqInterface->addRodTagToSend("wheel");

    // Atttach the ZMQ Interface to the model
    myModel->attach(zmqInterface);

    simulation.run();

    // teardown is handled by delete
    return 0;
}