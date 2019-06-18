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
 * @file AppTestSUPERballML.cpp
 * @brief Contains the definition function main() for  
 * AppTestSUPERballML which builds a YAML SUPERball 2.0.
 * @author Marc Leroy
 * $Id$
 */

// This application
#include "yamlbuilder/TensegrityModel.h"

//#include "LengthControllerML.h"
#include "HopfControllerML.h"

// This library
#include "core/terrain/tgBoxGround.h"
#include "core/tgModel.h"
#include "core/tgSimulation.h"
#include "core/tgSimViewGraphics.h"
#include "core/tgWorld.h"

// Bullet Physics
#include "LinearMath/btVector3.h"

// The C++ Standard Library
#include <iostream>
#include <string>
#include <vector>

#define NOSCILLATORS 4
#define NSTATES 8

// Function prototypes
tgBoxGround *createGround();
tgWorld *createWorld();
tgSimViewGraphics *createGraphicsView(tgWorld *world);
tgSimView *createView(tgWorld *world);
void simulate(tgSimulation *simulation, HopfControllerML* myController);
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
      throw std::invalid_argument("No arguments passed in to the application. You need to specify which YAML file you wouldd like to build.");
    }

/*  
    // create the ground and world. Specify ground rotation in radians
    const double yaw = 0.0;
    const double pitch = 0.0; //0.0;
    const double roll = 0.0; //0.0;
    const tgBoxGround::Config groundConfig(btVector3(yaw, pitch, roll));
    // the world will delete this
    tgBoxGround* ground = new tgBoxGround(groundConfig);

    const tgWorld::Config config(98.1); // gravity, dm/sec^2
    tgWorld world(config, ground);

    // create the view
    //const double timestep_physics = 0.0001; // seconds
    const double timestep_physics = 0.001;
    const double timestep_graphics = 1.f/60.f; // seconds
    tgSimViewGraphics view(world, timestep_physics, timestep_graphics);

    // create the simulation
    tgSimulation simulation(view);
*/
    // First create the world
    tgWorld *world = createWorld();

    // Second create the view (Choose between with or without graphics)
    #if(1)
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

    // User-defined initial conditions, shouldn't matter much as Hopf oscillator
    // defines a stable limit cycle
    //int nOscillators = NOSCILLATORS;
    double hopfState[NSTATES] = {0.1,-0.1,-0.15,0.15,0.05,-0.05,-0.2,0.2};
    double hopfVel[NSTATES]   = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
    double hopfAcc[NSTATES]   = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
        
    // Ranges to be examined by the machine learning library
    double hopfOmegaMin = 3.0;
    double hopfOmegaMax = 5.0;
    double hopfMuMin = 0.0;
    double hopfMuMax = 1.0;
    double couplingMin = -0.9;
    double couplingMax =  0.0;
    double hopfOffsetEvenMin = -0.1;
    double hopfOffsetEvenMax =  0.1;
    double hopfOffsetOddMin =  -0.1;
    double hopfOffsetOddMax =  0.1;

    int ctr = 0;
    double initRestLengths = 10;

    std::vector<std::string> tagsToControl;
    tagsToControl = selectControlledStrings(tagsToControl);

    // Changed from examples as this app uses a YAML model for argv[1]
    const std::string suffix((argc > 2) ? argv[2] : "default");

    HopfControllerML::Config control_config(hopfOmegaMin,      hopfOmegaMax,
                                            hopfMuMin,         hopfMuMax,
                                            couplingMin,       couplingMax,
                                            hopfOffsetEvenMin, hopfOffsetEvenMax,
                                            hopfOffsetOddMin,  hopfOffsetOddMax);

    // Create the controller
    HopfControllerML* const myController = new HopfControllerML(control_config, tagsToControl, timePassed, 
                                                                ctr, initRestLengths, saveToCSV, 
                                                                hopfState, hopfVel, hopfAcc, 
                                                                suffix, "SUPERballPosition/", "Config.ini");
    
    // Attach the controller to the model
    // This is a controller that interacts with a generic TensegrityModel as
    // built by the TensegrityModel file.>
    myModel->attach(myController);

    // Add the model to the world
    //simulation.addModel(myModel);
    simulation->addModel(myModel);

    //simulation.run();
    simulate(simulation,myController);

    delete myController;

    // teardown is handled by delete
    return 0;
}


tgWorld *createWorld() {
    const tgWorld::Config config(98.1); // gravity, dm/sec^2  Use this to adjust length scale of world.

    tgBoxGround* ground = createGround();
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


/** Run a series of episodes for nSteps each */
void simulate(tgSimulation *simulation, HopfControllerML* myController) {
    int nEpisodes = 1;  // Number of episodes ("trial runs")
    int nSteps = 30001; // Number of steps in each episode, 60k is 60 seconds (timestep_physics*nSteps)
    for (int i=1; i<=nEpisodes; i++) {
        std::cout << "Running episode " << i << " of " << nEpisodes << std::endl;
        //try
        //{
            simulation->run(nSteps);
        /*}
        catch(const std::invalid_argument& msg)
        {
            std::cout << "\e[1;31mError occured due to: " << msg.what() << "\e[0m" << std::endl;
        }
        myController->resetTimePassed();
        simulation->reset();*/
    }
}


/**
 * Defines which strings will be controlled
 * (/!\ order sensitive as will be read by the controller in array format)
 * @param[in] tagsToControl empty string vector
 * @return tagsToControl string vector containing strings to be controlled
 */
std::vector<std::string> selectControlledStrings(std::vector<std::string> tagsToControl)
{
    //SWP triangle
    tagsToControl.push_back("SUPERball_string01");
    tagsToControl.push_back("SUPERball_string03");
    tagsToControl.push_back("SUPERball_string17");

    //NED triangle
    tagsToControl.push_back("SUPERball_string14");
    tagsToControl.push_back("SUPERball_string16");
    tagsToControl.push_back("SUPERball_string24");

    //SWD triangle
    tagsToControl.push_back("SUPERball_string02");
    tagsToControl.push_back("SUPERball_string04");
    tagsToControl.push_back("SUPERball_string19");

    //NEP triangle
    tagsToControl.push_back("SUPERball_string13");
    tagsToControl.push_back("SUPERball_string15");
    tagsToControl.push_back("SUPERball_string22");

    //NWP triangle
    tagsToControl.push_back("SUPERball_string05");
    tagsToControl.push_back("SUPERball_string07");
    tagsToControl.push_back("SUPERball_string21");
    
    //SED triangle
    tagsToControl.push_back("SUPERball_string10");
    tagsToControl.push_back("SUPERball_string12");
    tagsToControl.push_back("SUPERball_string20");

    //NWD triangle
    tagsToControl.push_back("SUPERball_string06");
    tagsToControl.push_back("SUPERball_string08");
    tagsToControl.push_back("SUPERball_string23");
    
    //SEP triangle
    tagsToControl.push_back("SUPERball_string09");
    tagsToControl.push_back("SUPERball_string11");
    tagsToControl.push_back("SUPERball_string18");
    
    return tagsToControl;
}