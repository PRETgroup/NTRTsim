/*
 * Copyright © 2017, United States Government, as represented by the
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
 * @file AppSUPERballZMQ.cpp
 * @brief Contains the definition function main() for
 * AppSUPERballSNN which builds a YAML SUPERball 2.0 controlled via a ZeroMQ socket.
 * @author Louis-Dominique Renaud, based on code written by Marc Leroy and Hammond Pearce
 * @date Juanuary 2020
 * $Id$
 */

// This application
#include "config.h"

#include "yamlbuilder/TensegrityModel.h"
#include "LengthControllerYAMLZMQ.h"

// This library
#include "core/terrain/tgBoxGround.h"
#include "core/terrain/tgHillyGround.h"
#include "core/tgModel.h"
#include "core/tgSimulation.h"
#include "core/tgSimViewGraphics.h"
#include "core/tgWorld.h"
#include "sensors/tgDataLogger2.h"
#include "sensors/tgRodSensorInfo.h"
#include "sensors/tgSpringCableActuatorSensorInfo.h"

// Bullet Physics
#include "LinearMath/btVector3.h"

// The C++ Standard Library
#include <iostream>
#include <string>
#include <vector>

// ZMQ communication library
#include <zmq.hpp>

// Function prototypes
tgBoxGround *createGround();
tgHillyGround *createHillyGround();
tgWorld *createWorld();
tgSimViewGraphics *createGraphicsView(tgWorld *world);
tgSimView *createView(tgWorld *world);
void simulate(tgSimulation *simulation, LengthControllerYAMLZmq* myController);
std::vector<std::string> selectControlledStrings(std::vector<std::string> tagsToControl);


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
      throw std::invalid_argument("No arguments passed in to the application. You need to specify which YAML file you would like to build.");
    }

    // First create the world
    tgWorld *world = createWorld();

    // Second create the view (Choose between with or without graphics)
    #if(USEGRAPHICS)
        tgSimViewGraphics *view = createGraphicsView(world); // For visual experimenting on one tensegrity
    #else
        tgSimView         *view = createView(world);         // For running multiple episodes
    #endif

    // Third create the simulation
    tgSimulation *simulation = new tgSimulation(*view);

    // Create the models with their controllers and add the models to the simulation
    // This constructor for TensegrityModel takes the 'debugging' flag as the
    // second argument.
    TensegrityModel* const myModel = new TensegrityModel(argv[1],false);

    // Parameters for the LengthControllerYAML are specified in that .h file,
    // repeated here:
    double timePassed = 0.0;
    bool   saveToCSV  = false;

    int ctr = 0;

    std::vector<std::string> tagsToControl;
    tagsToControl = selectControlledStrings(tagsToControl);

    // Changed from examples as this app uses a YAML model for argv[1]
    const std::string suffix((argc > 2) ? argv[2] : "default");

    // Create the controller

    double startTime = 35.0;
    double minLength = 0.7;
    double rate = 1.5; //0.25

    zmq::context_t zmq_ctx(1);
    zmq::socket_t zmq_sock(zmq_ctx, ZMQ_REP);
    zmq_sock.bind("tcp://*:5555");
    LengthControllerYAMLZmq* myController = new LengthControllerYAMLZmq(startTime, minLength, rate, tagsToControl, &zmq_sock, simulation);

    // Attach the controller to the model
    // This is a controller that interacts with a generic TensegrityModel as
    // built by the TensegrityModel file.
    myModel->attach(myController);

    // Add the model to the world
    //simulation.addModel(myModel);
    simulation->addModel(myModel);

    #if(LOGDATA)
        // Add sensors using the new sensing framework
        // A string prefix for the filename
        std::string log_filename = "~/projects/tg_shared/AppSUPERballChain";
        // The time interval between sensor readings:
        double timeInterval = 0.2;
        // First, create the data manager
        tgDataLogger2* myDataLogger = new tgDataLogger2(log_filename);
        //std::cout << myDataLogger->toString() << std::endl;
        // Then, add the model to the data logger
        myDataLogger->addSenseable(myModel);
        // Create sensor infos for all the types of sensors that the data logger
        // will create.
        tgRodSensorInfo* myRodSensorInfo = new tgRodSensorInfo();
        tgSpringCableActuatorSensorInfo* mySCASensorInfo =
          new tgSpringCableActuatorSensorInfo();
        // Attach the sensor infos to the data logger
        myDataLogger->addSensorInfo(myRodSensorInfo);
        myDataLogger->addSensorInfo(mySCASensorInfo);
        // Next, attach it to the simulation
        simulation->addDataManager(myDataLogger);
    #endif

    //simulation->run();
    simulate(simulation,myController);

    delete myController;

    // teardown is handled by delete
    return 0;
}


tgWorld *createWorld() {
    const tgWorld::Config config(98.1); // gravity, dm/sec^2  Use this to adjust length scale of world.

    tgBoxGround* ground = createGround();
    //tgHillyGround* ground = createHillyGround();

    return new tgWorld(config, ground);
}


tgBoxGround *createGround() {
    // Determine the angle of the ground in radians. All 0 is flat
    const double yaw = 0.0;
    const double pitch = 0.0;
    const double roll = 0.0;
    const btVector3 eulerAngles = btVector3(yaw, pitch, roll);  // Default: (0.0, 0.0, 0.0)

    /*
    const double friction = 0.5; // Default: 0.5
    const double restitution = 0.0;  // Default: 0.0
    const btVector3 size = btVector3(10000.0, 2, 10000.0); // Default: (500.0, 1.5, 500.0)
    const btVector3 origin = btVector3(0.0, 0.0, 0.0); // Default: (0.0, 0.0, 0.0)
    const tgBoxGround::Config groundConfig(eulerAngles, friction, restitution,
                                           size, origin);
    */

    // the world will delete this
    const tgBoxGround::Config groundConfig(eulerAngles);

    return new tgBoxGround(groundConfig);
}


tgHillyGround *createHillyGround() {
    // Determine the angle of the ground in radians. All 0 is flat
    const double yaw = 0.0;
    const double pitch = 0.0;
    const double roll = 0.0;
    const btVector3 eulerAngles = btVector3(yaw, pitch, roll);  // Default: (0.0, 0.0, 0.0)

    const double friction = 0.25;
    const double restitution = 0.0;
    const btVector3 size   = btVector3(0.0,0.1,0.0);
    const btVector3 origin = btVector3(0.0,0.0,0.0);
    const size_t nx = 100;
    const size_t ny = 100;
    const double margin = 0.5;
    const double triangleSize = 4.0;
    const double waveHeight = 2.0;
    const double offset = 0.0;

    // the world will delete this
    const tgHillyGround::Config hillyGroundConfig(eulerAngles, friction, restitution, size, origin, nx, ny, margin, triangleSize, waveHeight, offset);

    return new tgHillyGround(hillyGroundConfig);
}


/** Use for displaying tensegrities in simulation */
tgSimViewGraphics *createGraphicsView(tgWorld *world) {
    const double timestep_physics = 0.001; //1.0 / 60.0 / 10.0; // Seconds
    const double timestep_graphics = 1.f /60.f; // Seconds, AKA render rate. Leave at 1/60 for real-time viewing
    return new tgSimViewGraphics(*world, timestep_physics, timestep_graphics);
}


/** Use for trial episodes of many tensegrities in an experiment */
tgSimView *createView(tgWorld *world) {
    const double timestep_physics = 0.001; //1.0 / 60.0 / 10.0; // Seconds
    const double timestep_graphics = 1.f /60.f; // Seconds, AKA render rate. Leave at 1/60 for real-time viewing
    return new tgSimView(*world, timestep_physics, timestep_graphics);
}


void simulate(tgSimulation *simulation, LengthControllerYAMLZmq* myController) {
    int nSteps = 60002; // Number of steps in each episode, 60k is 60 seconds (timestep_physics*nSteps)
    int i = 1;
    std::cout << "Running episode with ZMQ Controller, waiting for ZMQ connection" << std::endl;
    try
    {
        simulation->run(nSteps);
        //simulation->run();
    }
    catch(const std::invalid_argument& msg)
    {
        std::cout << "\e[1;31mError occured due to: " << msg.what() << "\e[0m" << std::endl << std::endl;
    }

    simulation->reset(); //so that the last episode may be saved in scores.csv
}


/**
 * Defines which strings will be controlled
 * (/!\ order sensitive as will be read by the controller in array format)
 * @param[in] tagsToControl empty string vector
 * @return tagsToControl string vector containing strings to be controlled
 */
std::vector<std::string> selectControlledStrings(std::vector<std::string> tagsToControl)
{
  tagsToControl.push_back("m01");
  tagsToControl.push_back("m02");
  tagsToControl.push_back("m03");
  tagsToControl.push_back("m04");
  tagsToControl.push_back("m05");
  tagsToControl.push_back("m06");
  tagsToControl.push_back("m07");
  tagsToControl.push_back("m08");
  tagsToControl.push_back("m09");
  tagsToControl.push_back("m10");
  tagsToControl.push_back("m11");
  tagsToControl.push_back("m12");
  tagsToControl.push_back("m13");
  tagsToControl.push_back("m14");
  tagsToControl.push_back("m15");
  tagsToControl.push_back("m16");
  tagsToControl.push_back("m17");
  tagsToControl.push_back("m18");
  tagsToControl.push_back("m19");
  tagsToControl.push_back("m20");
  tagsToControl.push_back("m21");
  tagsToControl.push_back("m22");
  tagsToControl.push_back("m23");
  tagsToControl.push_back("m24");

  std::copy(tagsToControl.begin(), tagsToControl.end(), std::ostream_iterator<std::string>(std::cout, "\n"));

  return tagsToControl;
}
