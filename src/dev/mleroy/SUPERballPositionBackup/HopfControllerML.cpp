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
 * @file HopfControllerML.cpp
 * @brief Implementation of HopfControllerML.
 * @author Marc Leroy
 * $Id$
 */

// This module
#include "HopfControllerML.h"

// This application
#include "yamlbuilder/TensegrityModel.h"

// This library
#include "core/tgBasicActuator.h"
//#include "core/tgKinematicActuator.h"
#include "core/tgSpringCableActuator.h"
#include "core/tgString.h"
#include "core/tgTags.h"
#include "core/tgRod.h"
#include "learning/AnnealEvolution/AnnealEvolution.h"
#include "learning/Configuration/configuration.h"

//#include "sensors/tgDataObserver.h"
// The C++ Standard Library
#include <cassert>
#include <stdexcept>
#include <vector>
#include <iostream>
#include "helpers/FileHelpers.h"
#include <stdexcept>

// Other required libraries
#include <math.h>
#include <fstream>
#include <cstdio>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <map>
#include <deque>

char timebuffer[12];
std::string primerHopfFileName = "_hopf_results";
std::string primerSpeedFileName = "_speed_hopf_results";
std::string primerCableFileName = "_cable_hopf_results";
std::string primerCOMFileName = "_center_mass_results";
static std::string hopfFileName;
static std::string speedFileName;
static std::string cableFileName;
static std::string cOMFileName;
static std::vector<std::string> fileNames;

const double CONTROLLER_STOP_TIME = 120000.0;
const double HOPF_AMPLIFIER = 0.5;


HopfControllerML::Config::Config(double hOMin, double hOMax, double hMMin, double hMMax, double cMin, double cMax,
                                 double hOffEMin, double hOffEMax, double hOffOMin, double hOffOMax) :
  hopfOmegaMin(hOMin),
  hopfOmegaMax(hOMax),
  hopfMuMin(hMMin),
  hopfMuMax(hMMax),
  couplingMin(cMin),
  couplingMax(cMax),
  hopfOffsetEvenMin(hOffEMin),
  hopfOffsetEvenMax(hOffEMax),
  hopfOffsetOddMin(hOffOMin),
  hopfOffsetOddMax(hOffOMax)
{
    /*if (hOMin <= 0)
    {
        throw std::invalid_argument("Hopf oscillator frequency is negative.");
    }
    else if (hOMax > 5.0)
    {
        throw std::invalid_argument("Hopf oscillator frequency is too high.");
    }
    else if (hMMin <= 0)
    {
        throw std::invalid_argument("Hopf oscillator intrinsic frequency is negative.");
    }
    else if (hMMax > 5.0)
    {
        throw std::invalid_argument("Hopf oscillator intrinsic frequency is too high.");
    }
    else if (cMin < -2.0)
    {
        throw std::invalid_argument("Hopf oscillator coupling factors are too low.");
    }
    else if (cMax > 2.0)
    {
        throw std::invalid_argument("Hopf oscillator coupling factors are too high.");
    }*/
}


// Constructor assigns variables, does some simple sanity checks.
// Also, initializes the accumulator variable timePassed so that it can
// be incremented in onStep.
HopfControllerML::HopfControllerML(HopfControllerML::Config config, std::vector<std::string> tagsToControl, double timePassed, 
                                   int ctr, double initRestLengths, bool saveToCSV,
                                   double hopfStateInit[NSTATES], double hopfVelInit[NSTATES], double hopfAccInit[NSTATES], 
                                   std::string args, std::string resourcePath, std::string configFile) :
  m_config(config),
  m_tagsToControl(tagsToControl),
  m_timePassed(timePassed),
  ctr(ctr),
  initRestLengths(initRestLengths),
  saveToCSV(saveToCSV),
  /*hopfStateInit(hopfStateInit),
  hopfVelInit(hopfVelInit),
  hopfAccInit(hopfAccInit),*/
  // rest for mll
  configFilename(configFile),
  evolution(args, configFile, resourcePath),
  learning(false)
{
  for(int i=0; i<NSTATES; i++)
  {
    //std::cout << "Starting Hopf Oscillators" << std::endl;
    hopfState[i] = hopfStateInit[i];
    hopfVel[i]   = hopfVelInit[i];
    hopfAcc[i]   = hopfAccInit[i];

    hopfStateFirst[i] = hopfStateInit[i];
    hopfVelFirst[i]   = hopfVelInit[i];
    hopfAccFirst[i]   = hopfAccInit[i];
  }

  //std::cout << args << " " << resourcePath << " " << configFile << std::endl;
  
  /*for(int i=0; i<24; i++)
  {
    cableInitRestLength[i] = cablesWithTags[i]->getRestLength();
  }*/

  // Setting up the different log files
  hopfFileName  = setupCSVFiles(primerHopfFileName);
  speedFileName = setupCSVFiles(primerSpeedFileName);
  cableFileName = setupCSVFiles(primerCableFileName);
  cOMFileName   = setupCSVFiles(primerCOMFileName);

  fileNames.push_back(hopfFileName);
  fileNames.push_back(speedFileName);
  fileNames.push_back(cableFileName);
  fileNames.push_back(cOMFileName);


  // Setting up things for the machine learning library
  std::string path;
  if (resourcePath != "")
  {
    path = FileHelpers::getResourcePath(resourcePath);
  }
  else
  {
    path = "";
  }

  configData.readFile(path + configFilename);
  learning = configData.getintvalue("learning");
  //std::cout << path << " " << configFilename << " " << learning << " " << configData.getintvalue("numberOfControllers") << " " << configData.getintvalue("numberOfActions") << std::endl;
  // @TODO: what checks to make on tags?
}


HopfControllerML::~HopfControllerML()
{
  //std::cout << "Destroying" << std::endl;
}


// /!\ Copied from the escape app
// So far, only score used for eventual fitness calculation of an Escape Model
// is the maximum distance from the origin reached during that subject's episode
void HopfControllerML::onTeardown(TensegrityModel& subject) 
{
    std::vector<double> scores; //scores[0] == displacement, scores[1] == energySpent
    
    double distance = displacement(subject);
    double energySpent = totalEnergySpent(subject);

    //Invariant: For now, scores must be of size 2 (as required by endEpisode())
    scores.push_back(distance);
    scores.push_back(energySpent);
    
    //std::cout << "Tearing down" << std::endl;
    adapter.endEpisode(scores);

    // If any of subject's dynamic objects need to be freed, this is the place to do so
}


double HopfControllerML::displacement(TensegrityModel& subject) 
{
    std::vector<double> finalPosition = getBallCOM(subject);

    // 'X' and 'Z' are irrelevant. Both variables measure lateral direction
    //assert(finalPosition[0] > 0); //Negative y-value indicates a flaw in the simulator that run (tensegrity went 'underground')

    const double newX = finalPosition[0];
    const double newZ = finalPosition[2];
    const double oldX = initPosition[0];
    const double oldZ = initPosition[2];

    const double distanceMoved = sqrt((newX-oldX) * (newX-oldX) + 
                                      (newZ-oldZ) * (newZ-oldZ));
    return distanceMoved;
}


double HopfControllerML::totalEnergySpent(TensegrityModel& subject)
{
    double totalEnergySpent=0;

    std::vector<tgBasicActuator* > tmpStrings = cablesWithTags;
    for(size_t i=0; i<tmpStrings.size(); i++) {
        tgSpringCableActuator::SpringCableActuatorHistory stringHist = tmpStrings[i]->getHistory();

        for(size_t j=1; j<stringHist.tensionHistory.size(); j++) {
            const double previousTension = stringHist.tensionHistory[j-1];
            const double previousLength = stringHist.restLengths[j-1];
            const double currentLength = stringHist.restLengths[j];
            //TODO: examine this assumption - free spinning motor may require more power         
            double motorSpeed = (currentLength-previousLength);
            //if(motorSpeed > 0) // Vestigial code
              //  motorSpeed = 0;
            const double workDone = previousTension * motorSpeed / 1000000; // division added by ML
            totalEnergySpent += workDone;
        }
    }
    return totalEnergySpent;
}


/**
 * For this controller, the onSetup method initializes the actuators,
 * which means just store pointers to them and record their rest lengths.
 * This method calls the setter setupOscillators and helper initializeActuators.
 */
void HopfControllerML::onSetup(TensegrityModel& subject)
{
  for(int i=0; i<NSTATES; i++)
  {
    //std::cout << "Starting Hopf Oscillators again" << std::endl;
    hopfState[i] = hopfStateFirst[i];
    hopfVel[i]   = hopfVelFirst[i];
    hopfAcc[i]   = hopfAccFirst[i];
    //std::cout << "Initial states: " << i << " " << hopfState[i] << " " << hopfVel[i] << " " << hopfAcc[i] << std::endl;
  }

  initPosition = getBallCOM(subject);
  std::cout << "Initial Position: " << initPosition[0] << " " << initPosition[1] << " " << initPosition[2] << std::endl;

  //Initialize the Learning Adapters
  adapter.initialize(&evolution,
                      learning,
                      configData);

  std::vector<double> state;
  double dt = 0.0;
  
  array_2D params = scaleActions(adapter.step(dt, state));

  // Choose between keeping the learning library or manually setting parameters
  if(0)
  {
    std::cout << std::endl << "\e[1;34mManually setting values\e[0m" << std::endl; // ATTENTION: range of couplings changed!
    params[0][0] = 5*0.933838+0;//2.5*0.188298;//1.3306;//2.39928;//0.938345*2.5;//1.68185;
    params[0][1] = 0.252515;//0.5*0.606409;//0.120148;//0.734457;//0.484248*0.75;//0.653306;
    params[0][2] = 0.9*0.404514-0.9;//0.5*0.873675-0.25;//-0.137464;//0.112966;//0.763098*0.5-0.25;//-0.874821;
    params[0][3] = 0.2*0.794643-0.1;//0.1*0.368117-0.1;//-0.013138;
    params[0][4] = 0.2*0.672255-0.1;//0.1*0.69847;//0.0326622;

    params[1][0] = 5*0.684186+0;//2.5*0.88685;//0.32858;//1.77424;//0.529107*2.5;//2.7928;
    params[1][1] = 0.618359;//0.5*0.953523;//0.524603;//0.203753;//0.943807*0.75;//0.369362;
    params[1][2] = 0.9*0.645993-0.9;//0.5*0.0216587-0.25;//0.158234;//-0.147924;//0.750432*0.5-0.25;//0.951746;
    params[1][3] = 0.2*0.694198-0.1;//0.1*0.952157-0.1;//-0.0325639;
    params[1][4] = 0.2*0.0518976-0.1;//0.1*0.855611;//0.0276343;

    params[2][0] = 5*0.846873+0;//2.5*0.95611;//1.10759;//0.138945;//0.785262*2.5;//0.974389;
    params[2][1] = 0.794494;//0.5*0.670938;//0.413791;//0.00615456;//0.139673*0.75;//0.660786;
    params[2][2] = 0.9*0.334909-0.9;//0.5*0.83336-0.25;//-0.021145;//0.151508;//0.989313*0.5-0.25;//-0.459199;
    params[2][3] = 0.2*0.360263-0.1;//0.1*0.245748-0.1;//-0.0843798;
    params[2][4] = 0.2*0.284796-0.1;//0.1*0.981936;//0.0514017;

    params[3][0] = 5*0.493146+0;//2.5*0.587993;//1.47143;//1.27314;//0.0464334*2.5;//4.28305;
    params[3][1] = 0.491492;//0.5*0.972468;//0.464273;//0.633201;//0.602528*0.75;//0.795863;
    params[3][2] = 0.9*0.279653-0.9;//0.5*0.946511-0.25;//-0.189092;//0.0445564;//0.849094*0.5-0.25;//-0.974185;
    params[3][3] = 0.2*0.803651-0.1;//0.1*0.392225-0.1;//-0.0510901;
    params[3][4] = 0.2*0.971703-0.1;//0.1*0.960277;//0.0143581;
  }
  //for (int i=0; i<NOSCILLATORS; i++)
    //std::cout << "\e[1;31mThe following will be sent to setup: " << i << " " << params[i][0] << " " << params[i][1] << " " << params[i][2] << " " <<params[i][3] << " " << params[i][4] << "\e[0m" << std::endl;
    
  /*// This one is square
  for( std::size_t i = 0; i < configData.getintvalue("numberOfControllers"); i++)
  {
      for( std::size_t j = 0; j < configData.getintvalue("numberOfActions"); j++)
      {
        std::string whichOne = "";
        switch(j)
        {
          case 0: whichOne = ", Omega: "; break;
          case 1: whichOne = ", Mu: "; break;
          case 2: whichOne = ", Coupling: "; break;
        }
        std::cout << i << " " << j << whichOne << params[i][j] << std::endl;
      }
      std::cout << std::endl;
  }*/

  setupOscillators(subject, params);

  std::cout << "Setting up the HopfControllerML controller." << std::endl;
  //      << "Finding cables with tags: " << m_tagsToControl
  //      << std::endl;
  cablesWithTags = {};
  // For all the strings in the list, call initializeActuators.
  std::vector<std::string>::iterator it;
  for(it = m_tagsToControl.begin(); it < m_tagsToControl.end(); it++)
  {
    // Call the helper for this tag.
    initializeActuators(subject, *it);
  }
  std::cout << "Finished setting up the controller." << std::endl;

  //for(std::size_t i=0; i<=23; i++)
    //std::cout << "Rest length " << i << " " << cablesWithTags[i]->getTags() << " " << cablesWithTags[i]->getHistory().restLengths[0] << std::endl;

  //for(int i=0; i<24; i++)
    //std::cout << initialRLArray[i] << std::endl; 
}


/**
 * This method generates the configuration's settings under the required min/max constraints
 */
array_2D HopfControllerML::scaleActions(std::vector< std::vector <double> > actions)
{
    std::size_t numControllers = configData.getintvalue("numberOfControllers");
    std::size_t numActions     = configData.getintvalue("numberOfActions");
    
    assert( actions.size()    == numControllers);
    assert( actions[0].size() == numActions);
    
    array_2D actionsUpd(boost::extents[numControllers][numActions]);
    
    array_2D limits(boost::extents[2][numActions]);
    
    // Check if we need to update limits
    //assert(numActions == 2);
    
    limits[0][0] = m_config.hopfOmegaMin;
    limits[1][0] = m_config.hopfOmegaMax;
    limits[0][1] = m_config.hopfMuMin;
    limits[1][1] = m_config.hopfMuMax;
    limits[0][2] = m_config.couplingMin;
    limits[1][2] = m_config.couplingMax;
    limits[0][3] = m_config.hopfOffsetEvenMin;
    limits[1][3] = m_config.hopfOffsetEvenMax;
    limits[0][4] = m_config.hopfOffsetOddMin;
    limits[1][4] = m_config.hopfOffsetOddMax;
    
    // This one is square
    for( std::size_t i = 0; i < numControllers; i++)
    {
        for( std::size_t j = 0; j < numActions; j++)
        {
            actionsUpd[i][j] = ( actions[i][j] *  
                    (limits[1][j] - limits[0][j])) + limits[0][j];
        }
    }
    return actionsUpd;
}


/**
 * This method transfers the output of scaleActions into the subject's controllers setup
 */
void HopfControllerML::setupOscillators(TensegrityModel& subject, array_2D params)
{
  for(int i=0; i<NOSCILLATORS; i++)
  {
    std::cout << i << " " << params[i][0] << " " << params[i][1] << " " << params[i][2] << " " <<params[i][3] << " " << params[i][4] << std::endl;
    hopfOmega[i]      = params[i][0];
    hopfMu[i]         = params[i][1];
    coupling[i]       = params[i][2];
    hopfOffsetEven[i] = params[i][3];
    hopfOffsetOdd[i]  = params[i][4];
    //std::cout << i << "\e[1;33m " << hopfOmega[i] << " " << hopfMu[i] << " " << coupling[i] << " " << hopfOffsetEven[i] << " " << hopfOffsetOdd[i] << "\e[0m" << std::endl;
    }  
}


/**
 * The initializeActuators method is call in onSetup to put pointers to 
 * specific actuators in the cablesWithTags array, as well as store the initial
 * rest lengths in the initialRL map.
 */
void HopfControllerML::initializeActuators(TensegrityModel& subject, std::string tag) 
{
  //DEBUGGING
  //  std::cout << "Finding cables with the tag: " << tag << std::endl;
  // Pick out the actuators with the specified tag
  std::vector<tgBasicActuator*> foundActuators = subject.find<tgBasicActuator>(tag);
  //std::vector<tgKinematicActuator*> foundActuators = subject.find<tgKinematicActuator>(tag);
  
  //  std::cout << "The following cables were found and will be controlled: " << std::endl;
  //Iterate through array and output strings to command line
  for (std::size_t i = 0; i < foundActuators.size(); i ++) 
  {	
  //    std::cout << foundActuators[i]->getTags() << std::endl;
    // Also, add the rest length of the actuator at this time
    // to the list of all initial rest lengths.
    initialRL[foundActuators[i]->getTags()] = foundActuators[i]->getRestLength();
    initialRLArray.push_back(foundActuators[i]->getRestLength()); //ML
    //DEBUGGING:
  //    std::cout << "Cable rest length at t=0 is " << initialRL[foundActuators[i]->getTags()] << std::endl;
  }
  // Add this list of actuators to the full list. Thanks to:
  // http://stackoverflow.com/questions/201718/concatenating-two-stdvectors
  cablesWithTags.insert( cablesWithTags.end(), foundActuators.begin(),
			 foundActuators.end() );
}


/**
 * Method which computes current simulation steps
 */
void HopfControllerML::onStep(TensegrityModel& subject, double dt)
{
  m_timePassed += dt;
           
  if(m_timePassed > 3000*dt && m_timePassed < CONTROLLER_STOP_TIME*dt)
  {
    /*if(ctr==0)
    {
      initRestLengths=cablesWithTags[0]->getRestLength();

      for(InitialRestLengths::const_iterator it = initialRL.begin(); it != initialRL.end(); ++it)
      {
        std::cout << it->first << " " << it->second << std::endl;
      }
      std::cout << ctr << " " << m_timePassed << std::endl;
      std::cout << m_config.hopfOmegaMin << " " << m_config.hopfOmegaMax << std::endl;
  
      //std::cout << initRestLengths << std::endl;
      //std::cout << "Test length: " << initialRL.at((tgTags)"SUPERball_string21") << std::endl;
    }
    ctr++;*/

    /*for(InitialRestLengths::const_iterator it = initialRL.begin(); it != initialRL.end(); ++it)
    {
      std::cout << it->first << " " << it->second << std::endl;
    }
    std::cout << std::endl;*/

    updateHopfState(dt);

    hopfOscillator(subject, dt, m_timePassed, hopfState, hopfVel, hopfAcc, 0, 2, initRestLengths,0,0);
    hopfOscillator(subject, dt, m_timePassed, hopfState, hopfVel, hopfAcc, 3, 5, initRestLengths,0,1);
    hopfOscillator(subject, dt, m_timePassed, hopfState, hopfVel, hopfAcc, 6, 8, initRestLengths,1,0);
    hopfOscillator(subject, dt, m_timePassed, hopfState, hopfVel, hopfAcc, 9, 11, initRestLengths,1,1);
    hopfOscillator(subject, dt, m_timePassed, hopfState, hopfVel, hopfAcc, 12, 14, initRestLengths,2,0);
    hopfOscillator(subject, dt, m_timePassed, hopfState, hopfVel, hopfAcc, 15, 17, initRestLengths,2,1);
    hopfOscillator(subject, dt, m_timePassed, hopfState, hopfVel, hopfAcc, 18, 20, initRestLengths,3,0);
    hopfOscillator(subject, dt, m_timePassed, hopfState, hopfVel, hopfAcc, 21, 23, initRestLengths,3,1);
    //sineTest(subject, m_timePassed, 0, 2, initRestLengths, 0, 1); 
    //checkLengths(subject,dt,0,1);
    //for(int i=0; i<cablesWithTags.size(); i++)
      //cablesWithTags[i]->moveMotors(dt);
  }

  if(m_timePassed <= (1+CONTROLLER_STOP_TIME)*dt)
  {
    if(saveToCSV)
    {
      std::vector <double> resultCOM = getBallCOM(subject);
      //std::cout<<"COM: (" << resultCOM[0] << ", " << resultCOM[1] << ", " << resultCOM[2] << ")" << std::endl;
      exportHopfCSV(m_timePassed, hopfState, fileNames, resultCOM);
    }
    if(m_timePassed>CONTROLLER_STOP_TIME*dt)
    {
      std::vector <double> resultCOM = getBallCOM(subject);
      //std::cout << "COM: (" << resultCOM[0] << ", " << resultCOM[1] << ", " << resultCOM[2] << ")" << std::endl;
      //std::cout << "Omegas: " << hopfOmega[0] << ", " << hopfOmega[1] << ", " << hopfOmega[2] << ", " << hopfOmega[3] << std::endl;
      //std::cout << "Mus: " << hopfMu[0] << ", " << hopfMu[1] << ", " << hopfMu[2] << ", " << hopfMu[3] << std::endl;
      //std::cout << "Couplings: " << coupling[0] << ", " << coupling[1] << ", " << coupling[2] << ", " << coupling[3] << std::endl;
      double distance = displacement(subject);
    
      std::cout << "\e[1;36mDONE, traveled " << distance << "\e[0m" << std::endl;      
      if(saveToCSV)
      {
        saveHistLastLengths();
        saveHistRestLengths();
        saveHistDamping();
        saveHistLastVelocities();
        saveHistTension();
      }
    }
  }
}


/**
 * This method calls the update of the Hopf oscillators for all controllers
 */
void HopfControllerML::updateHopfState(double dt)
{
  for(int i=0; i < NOSCILLATORS; i++)
  {
    compNextHopfState(dt,i);

    /*if((m_timePassed > 9.999 && m_timePassed < 10.001) || (m_timePassed > 19.999 && m_timePassed < 20.001))
    {
      perturbateHopf(i);   
    }*/    
  }
}

/**
 * Computes the next iteration of the Hopf oscillator state thanks to the Euler method
 * TODO: the way the couplings are applied should be further investigated
 * @param[in] dt the time step used for the numerical derivation
 * @return void
 */
void HopfControllerML::compNextHopfState(double dt, int selectedOscillator)
{
  double couplingArray[3] = {0.0,0.0,0.0};
  int coupledState[3] = {0,0,0};
  switch(selectedOscillator) //TODO: CHECK COUPLINGS (SEE NOTEBOOK)
  {
    case 0:
      couplingArray[0] = coupling[1];
      couplingArray[1] = coupling[2];
      couplingArray[2] = coupling[3];
      coupledState[0] = 2;
      coupledState[1] = 4;
      coupledState[2] = 7;
      coupledState[3] = 3;
      coupledState[4] = 5;
      coupledState[5] = 6;
      break;
    case 1:
      couplingArray[0] = coupling[0];
      couplingArray[1] = coupling[2];
      couplingArray[2] = coupling[3];
      coupledState[0] = 0;
      coupledState[1] = 5;
      coupledState[2] = 7;
      coupledState[3] = 1;
      coupledState[4] = 4;
      coupledState[5] = 7;
      break;
    case 2:
      couplingArray[0] = coupling[0];
      couplingArray[1] = coupling[1];
      couplingArray[2] = coupling[3];
      coupledState[0] = 0;
      coupledState[1] = 3;
      coupledState[2] = 6;
      coupledState[3] = 1;
      coupledState[4] = 2;
      coupledState[5] = 7;
      break;
    case 3:
      couplingArray[0] = coupling[0];
      couplingArray[1] = coupling[1];
      couplingArray[2] = coupling[2];
      coupledState[0] = 1;
      coupledState[1] = 2;
      coupledState[2] = 4;
      coupledState[3] = 0;
      coupledState[4] = 3;
      coupledState[5] = 5;
      break;
  }
  //std::cout << selectedOscillator << ", " << couplingArray[0] << ", " << couplingArray[1] << ", " << couplingArray[2] << std::endl;

  /*for(int i=0; i<=selectedOscillator-1; i++)
  {*/
    //std::cout << "In function compNextHopfState, dt=" << dt << ", passed:" << m_timePassed << ", oscillator:" << selectedOscillator << std::endl;
    double r = sqrt(hopfState[2*selectedOscillator]*hopfState[2*selectedOscillator] + hopfState[2*selectedOscillator+1]*hopfState[2*selectedOscillator+1]);

    hopfVel[2*selectedOscillator]   = (hopfMu[selectedOscillator]-r*r)*hopfState[2*selectedOscillator]
                                      - hopfOmega[selectedOscillator]*hopfState[2*selectedOscillator+1] 
                                      + couplingArray[0]*hopfState[coupledState[0]]   
                                      + couplingArray[1]*hopfState[coupledState[1]]   
                                      + couplingArray[2]*hopfState[coupledState[2]];

    hopfVel[2*selectedOscillator+1] = (hopfMu[selectedOscillator]-r*r)*hopfState[2*selectedOscillator+1] 
                                      + hopfOmega[selectedOscillator]*hopfState[2*selectedOscillator]   
                                      + couplingArray[0]*hopfState[coupledState[3]] 
                                      + couplingArray[1]*hopfState[coupledState[4]] 
                                      + couplingArray[2]*hopfState[coupledState[5]];

    /*if(selectedOscillator == nOscillators-1)
    {
      hopfVel[2*selectedOscillator]   = (hopfMu[selectedOscillator]-r*r)*hopfState[2*selectedOscillator]   - hopfOmega[selectedOscillator]*hopfState[2*selectedOscillator+1] + coupling[selectedOscillator]*hopfState[0];
      hopfVel[2*selectedOscillator+1] = (hopfMu[selectedOscillator]-r*r)*hopfState[2*selectedOscillator+1] + hopfOmega[selectedOscillator]*hopfState[2*selectedOscillator]   + coupling[selectedOscillator]*hopfState[1];
    } 
    else
    {
      hopfVel[2*selectedOscillator]   = (hopfMu[selectedOscillator]-r*r)*hopfState[2*selectedOscillator]   - hopfOmega[selectedOscillator]*hopfState[2*selectedOscillator+1] + coupling[selectedOscillator]*hopfState[2*selectedOscillator+2];
      hopfVel[2*selectedOscillator+1] = (hopfMu[selectedOscillator]-r*r)*hopfState[2*selectedOscillator+1] + hopfOmega[selectedOscillator]*hopfState[2*selectedOscillator]   + coupling[selectedOscillator]*hopfState[2*selectedOscillator+3];
    }*/

    double drdt = (hopfState[2*selectedOscillator]*hopfVel[2*selectedOscillator] + hopfState[2*selectedOscillator+1]*hopfVel[2*selectedOscillator+1])/r;

    hopfAcc[2*selectedOscillator]   = -2 * r*drdt * hopfState[2*selectedOscillator]   
                                      + (hopfMu[selectedOscillator]-r*r) * hopfVel[2*selectedOscillator]   
                                      - hopfOmega[selectedOscillator] * hopfVel[2*selectedOscillator+1];

    hopfAcc[2*selectedOscillator+1] = -2 * r*drdt * hopfState[2*selectedOscillator+1] 
                                      + (hopfMu[selectedOscillator]-r*r) * hopfVel[2*selectedOscillator+1] 
                                      + hopfOmega[selectedOscillator] * hopfVel[2*selectedOscillator];

    hopfState[2*selectedOscillator]   = hopfState[2*selectedOscillator]   + hopfVel[2*selectedOscillator]*dt   + 0.5*hopfAcc[2*selectedOscillator]*dt*dt;
    hopfState[2*selectedOscillator+1] = hopfState[2*selectedOscillator+1] + hopfVel[2*selectedOscillator+1]*dt + 0.5*hopfAcc[2*selectedOscillator+1]*dt*dt;

    //std::cout << hopfState[2*selectedOscillator] << " " << hopfState[2*selectedOscillator+1] << " " << hopfVel[2*selectedOscillator] << " " << hopfVel[2*selectedOscillator+1] << " " << hopfAcc[2*selectedOscillator] << " " << hopfAcc[2*selectedOscillator+1] << " " << m_timePassed << std::endl;    
  //}
  //std::cout << hopfState[0] << " " << hopfState[1] << " " << hopfState[2] << " " << hopfState[3] << std::endl;
}


/**
 * Method which perturbates a Hopf oscillator by changing its value to a random value
 * (The stable limit cycle nature of the oscillator will make it return to normal behavior)
 */
void HopfControllerML::perturbateHopf(int selectedOscillator)
{
  // 6 is an arbitrary number here as we have a 2D oscillator based on position, speed and acceleration
  srand(time(NULL));
  double randArray[6] = {0.0,0.0,0.0,0.0,0.0,0.0};

  for(int i=0; i<6; i++)
  {
    randArray[i] = 0.05*((double)rand()/RAND_MAX);
  }

  hopfState[2*selectedOscillator]   = randArray[0];
  hopfState[2*selectedOscillator+1] = randArray[1];
  hopfVel[2*selectedOscillator]     = randArray[2];
  hopfVel[2*selectedOscillator+1]   = randArray[3];
  hopfAcc[2*selectedOscillator]     = randArray[4];
  hopfAcc[2*selectedOscillator+1]   = randArray[5];

  //std::cout << randArray[0] << " " << randArray[1] << " " << randArray[2] << " " << randArray[3] << " " << randArray[4] << " " << randArray[5] << std::endl;
}


/**
 * Method which sends the next control input to the actuators, based on Hopf oscillators 
 * @param[in] subject the model of the tensegrity structure
 * @param[in] dt the timestep size in the simulation environment
 * @param[in] m_timePassed the total time passed within the simulation environment
 * @param[in] hopfState the state in which the Hopf oscillator is at the according time
 * @param[in] hopfVel the velocity which the Hopf oscillator has at the according time
 * @param[in] hopfAcc the acceleration which the Hopf oscillator has at the according time
 * @param[in] firstCable the first in the list of strings following the same control law
 * @param[in] lastCable the last in the list of strings following the same control law
 * @param[in] initRestLengths the initial rest length of a string
 * @param[in] hopfSelector number defining which component of the oscillator will be used
 * @return void
 */
void HopfControllerML::hopfOscillator(TensegrityModel& subject, double dt, double m_timePassed, double *hopfState, double *hopfVel, double *hopfAcc,
                                      int firstCable, int lastCable, double initRestLengths, int selectedOscillator, int hopfSelector)
{
  for (std::size_t i = firstCable; i <= lastCable; i ++) 
  {  
    double bufferVar = 0;
    double offsetVar = 0;
    
    if(hopfSelector==0)
    {
      bufferVar = hopfState[2*selectedOscillator];
      offsetVar = hopfOffsetEven[2*selectedOscillator];
      //cablesWithTags[i]->setControlInput((HOPF_AMPLIFIER*bufferVar+1+offsetEven)*((cablesWithTags[i]->getHistory()).restLengths[0]), dt);
    }
    else
    {
      bufferVar = hopfState[2*selectedOscillator+1];
      offsetVar = hopfOffsetOdd[2*selectedOscillator+1];
      //cablesWithTags[i]->setControlInput((HOPF_AMPLIFIER*bufferVar+1+offsetOdd)*((cablesWithTags[i]->getHistory()).restLengths[0]), dt);
    }
    
    cablesWithTags[i]->setControlInput((1+bufferVar*HOPF_AMPLIFIER+offsetVar)*((cablesWithTags[i]->getHistory()).restLengths[0]), dt);
    
    //std::cout << cablesWithTags[i]->getTags() << " " << (cablesWithTags[i]->getHistory()).restLengths[0] << std::endl;
    /*if(i%2==0)
      cablesWithTags[i]->setControlInput((HOPF_AMPLIFIER*bufferVar+1+offsetEven)*((cablesWithTags[i]->getHistory()).restLengths[0]), dt);
    else
      cablesWithTags[i]->setControlInput((HOPF_AMPLIFIER*bufferVar+1+offsetOdd)*((cablesWithTags[i]->getHistory()).restLengths[0]), dt);*/
  }
}


/**
 * Method which resets the time counter (useful for multi-run simulations)
 */
void HopfControllerML::resetTimePassed()
{
  m_timePassed = 0;
  ctr = 0;
}


// Return the center of mass of this model
// Pre-condition: This model has 6 rods
std::vector<double> HopfControllerML::getBallCOM(TensegrityModel& subject) 
{   
    //std::vector <tgRod*> rods = find<tgRod>("tgRodInfo");
    //assert(!rods.empty());

    btVector3 ballCenterOfMass(0, 0, 0);

    std::vector<tgRod*> foundRods = subject.find<tgRod>("superball_rod");
  
    double ballMass = 0.0; 
    for (std::size_t i = 0; i < foundRods.size(); i++) {
        const tgRod* const rod = foundRods[i];
        assert(rod != NULL);
        const double rodMass = rod->mass();
        const btVector3 rodCenterOfMass = rod->centerOfMass();
        ballCenterOfMass += rodCenterOfMass * rodMass;
        ballMass += rodMass;
    }

    //assert(ballMass > 0.0);
    ballCenterOfMass /= ballMass;

    // Copy to the result std::vector
    std::vector<double> result(3);
    for (size_t i = 0; i < 3; ++i) 
    { 
      result[i] = ballCenterOfMass[i]; 
    }
    //std::cout << "X=" << result[0] << ", Y=" << result[1] << ", Z=" << result[2] << std::endl;
    return result;
}


/**
 * Setup of the timestamped filenames that will be used to export data in .csv format 
 * @param[in] fileDataType string describing start of file's name, e.g. speed or tension
 * @return outputFileName string of full path towards timestamped file
 */
std::string HopfControllerML::setupCSVFiles(std::string fileDataType)
{  
  srand(time(NULL));
  time_t rawtime;
  struct tm *timeinfo;
  time(&rawtime);
  timeinfo = localtime(&rawtime);
  strftime(timebuffer,12,"%m_%d_%H_%M",timeinfo);
  std::string outputFileName = "/home/tensegribuntu/projects/tg_shared/" + (std::string)timebuffer + fileDataType + ".csv";
 
  return (std::string)outputFileName;
}


/**
 * Properly saves the required data in the different files generated by the prior setupCSVFiles calls
 * This method is called at each simulation timestep and the new data is thus appended in the files
 * @param[in] t time having passed within the simulator's world
 * @param[in] hopfState current state of the Hopf oscillator
 * @param[in] fileNames name of the files in which data will be stored
 * @return void
 */
void HopfControllerML::exportHopfCSV(double t, double *hopfState, std::vector<std::string> fileNames, std::vector <double> resultCOM)
{
  FILE *pFile;
  const char* file1Name = fileNames[0].c_str();
  pFile = fopen(file1Name,"a");
  if(pFile!=NULL){
    fprintf(pFile, "%f,%f,%f,%f,%f,%f,%f,%f,%f\n",t,hopfState[0],hopfState[1],hopfState[2],hopfState[3],hopfState[4],hopfState[5],hopfState[6],hopfState[7]);
    fclose(pFile);
  }

  FILE *pFile2;
  const char* file2Name = fileNames[1].c_str();
  pFile2 = fopen(file2Name,"a");
  if(pFile2!=NULL){
    fprintf(pFile2, "%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n",t, 
                      cablesWithTags[0]->getVelocity(),
                      cablesWithTags[1]->getVelocity(),
                      cablesWithTags[2]->getVelocity(),
                      cablesWithTags[3]->getVelocity(),
                      cablesWithTags[4]->getVelocity(),
                      cablesWithTags[5]->getVelocity(),
                      cablesWithTags[6]->getVelocity(),
                      cablesWithTags[7]->getVelocity(),
                      cablesWithTags[8]->getVelocity(),
                      cablesWithTags[9]->getVelocity(),
                      cablesWithTags[10]->getVelocity(),
                      cablesWithTags[11]->getVelocity(),
                      cablesWithTags[12]->getVelocity(),
                      cablesWithTags[13]->getVelocity(),
                      cablesWithTags[14]->getVelocity(),
                      cablesWithTags[15]->getVelocity(),
                      cablesWithTags[16]->getVelocity(),
                      cablesWithTags[17]->getVelocity(),
                      cablesWithTags[18]->getVelocity(),
                      cablesWithTags[19]->getVelocity(),
                      cablesWithTags[20]->getVelocity(),
                      cablesWithTags[21]->getVelocity(),
                      cablesWithTags[22]->getVelocity(),
                      cablesWithTags[23]->getVelocity());
    fclose(pFile2);
  }

  double bufferVar = initRestLengths*(1+hopfState[0]);
  FILE *pFile3;
  const char* file3Name = fileNames[2].c_str();
  pFile3 = fopen(file3Name,"a");
  if(pFile3!=NULL){
    fprintf(pFile3, "%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n",t, bufferVar,
                      cablesWithTags[0]->getRestLength(),
                      cablesWithTags[1]->getRestLength(),
                      cablesWithTags[2]->getRestLength(),
                      cablesWithTags[3]->getRestLength(),
                      cablesWithTags[4]->getRestLength(),
                      cablesWithTags[5]->getRestLength(),
                      cablesWithTags[6]->getRestLength(),
                      cablesWithTags[7]->getRestLength(),
                      cablesWithTags[8]->getRestLength(),
                      cablesWithTags[9]->getRestLength(),
                      cablesWithTags[10]->getRestLength(),
                      cablesWithTags[11]->getRestLength(),
                      cablesWithTags[12]->getRestLength(),
                      cablesWithTags[13]->getRestLength(),
                      cablesWithTags[14]->getRestLength(),
                      cablesWithTags[15]->getRestLength(),
                      cablesWithTags[16]->getRestLength(),
                      cablesWithTags[17]->getRestLength(),
                      cablesWithTags[18]->getRestLength(),
                      cablesWithTags[19]->getRestLength(),
                      cablesWithTags[20]->getRestLength(),
                      cablesWithTags[21]->getRestLength(),
                      cablesWithTags[22]->getRestLength(),
                      cablesWithTags[23]->getRestLength());
    fclose(pFile3);
  }

  FILE *pFile4;
  const char* file4Name = fileNames[3].c_str();
  pFile4 = fopen(file4Name,"a");
  if(pFile4!=NULL){
    fprintf(pFile4, "%f,%f,%f,%f\n",t,resultCOM[0],resultCOM[1],resultCOM[2]);
    fclose(pFile4);
  }
}


void HopfControllerML::saveHistLastLengths()
{
  std::deque<double> lastLengthsCable0((cablesWithTags[0]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable1((cablesWithTags[1]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable2((cablesWithTags[2]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable3((cablesWithTags[3]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable4((cablesWithTags[4]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable5((cablesWithTags[5]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable6((cablesWithTags[6]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable7((cablesWithTags[7]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable8((cablesWithTags[8]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable9((cablesWithTags[9]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable10((cablesWithTags[10]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable11((cablesWithTags[11]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable12((cablesWithTags[12]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable13((cablesWithTags[13]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable14((cablesWithTags[14]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable15((cablesWithTags[15]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable16((cablesWithTags[16]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable17((cablesWithTags[17]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable18((cablesWithTags[18]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable19((cablesWithTags[19]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable20((cablesWithTags[20]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable21((cablesWithTags[21]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable22((cablesWithTags[22]->getHistory()).lastLengths);
  std::deque<double> lastLengthsCable23((cablesWithTags[23]->getHistory()).lastLengths);
  
  FILE *pFile;
  std::string fileNameStr = "/home/tensegribuntu/projects/tg_shared/";
  fileNameStr += timebuffer;
  fileNameStr += "_histLogLastLengths.csv";
  const char* fileName = fileNameStr.c_str();
  pFile = fopen(fileName,"a");
  if(pFile!=NULL){
    for(int i=0;i<lastLengthsCable0.size();i++)
    {
      double t = (double)i/1000;
      fprintf(pFile, "%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n",t,
                      lastLengthsCable0[i],
                      lastLengthsCable1[i],
                      lastLengthsCable2[i],
                      lastLengthsCable3[i],
                      lastLengthsCable4[i],
                      lastLengthsCable5[i],
                      lastLengthsCable6[i],
                      lastLengthsCable7[i],
                      lastLengthsCable8[i],
                      lastLengthsCable9[i],
                      lastLengthsCable10[i],
                      lastLengthsCable11[i],
                      lastLengthsCable12[i],
                      lastLengthsCable13[i],
                      lastLengthsCable14[i],
                      lastLengthsCable15[i],
                      lastLengthsCable16[i],
                      lastLengthsCable17[i],
                      lastLengthsCable18[i],
                      lastLengthsCable19[i],
                      lastLengthsCable20[i],
                      lastLengthsCable21[i],
                      lastLengthsCable22[i],
                      lastLengthsCable23[i]);
    }
    fclose(pFile);
  }
}


void HopfControllerML::saveHistRestLengths()
{
  std::deque<double> restLengthsCable0((cablesWithTags[0]->getHistory()).restLengths);
  std::deque<double> restLengthsCable1((cablesWithTags[1]->getHistory()).restLengths);
  std::deque<double> restLengthsCable2((cablesWithTags[2]->getHistory()).restLengths);
  std::deque<double> restLengthsCable3((cablesWithTags[3]->getHistory()).restLengths);
  std::deque<double> restLengthsCable4((cablesWithTags[4]->getHistory()).restLengths);
  std::deque<double> restLengthsCable5((cablesWithTags[5]->getHistory()).restLengths);
  std::deque<double> restLengthsCable6((cablesWithTags[6]->getHistory()).restLengths);
  std::deque<double> restLengthsCable7((cablesWithTags[7]->getHistory()).restLengths);
  std::deque<double> restLengthsCable8((cablesWithTags[8]->getHistory()).restLengths);
  std::deque<double> restLengthsCable9((cablesWithTags[9]->getHistory()).restLengths);
  std::deque<double> restLengthsCable10((cablesWithTags[10]->getHistory()).restLengths);
  std::deque<double> restLengthsCable11((cablesWithTags[11]->getHistory()).restLengths);
  std::deque<double> restLengthsCable12((cablesWithTags[12]->getHistory()).restLengths);
  std::deque<double> restLengthsCable13((cablesWithTags[13]->getHistory()).restLengths);
  std::deque<double> restLengthsCable14((cablesWithTags[14]->getHistory()).restLengths);
  std::deque<double> restLengthsCable15((cablesWithTags[15]->getHistory()).restLengths);
  std::deque<double> restLengthsCable16((cablesWithTags[16]->getHistory()).restLengths);
  std::deque<double> restLengthsCable17((cablesWithTags[17]->getHistory()).restLengths);
  std::deque<double> restLengthsCable18((cablesWithTags[18]->getHistory()).restLengths);
  std::deque<double> restLengthsCable19((cablesWithTags[19]->getHistory()).restLengths);
  std::deque<double> restLengthsCable20((cablesWithTags[20]->getHistory()).restLengths);
  std::deque<double> restLengthsCable21((cablesWithTags[21]->getHistory()).restLengths);
  std::deque<double> restLengthsCable22((cablesWithTags[22]->getHistory()).restLengths);
  std::deque<double> restLengthsCable23((cablesWithTags[23]->getHistory()).restLengths);
  
  FILE *pFile;
  std::string fileNameStr = "/home/tensegribuntu/projects/tg_shared/";
  fileNameStr += timebuffer;
  fileNameStr += "_histLogRestLengths.csv";
  const char* fileName = fileNameStr.c_str();
  pFile = fopen(fileName,"a");
  if(pFile!=NULL){
    for(int i=0;i<restLengthsCable0.size();i++)
    {
      double t = (double)i/1000;
      fprintf(pFile, "%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n",t,
                      restLengthsCable0[i],
                      restLengthsCable1[i],
                      restLengthsCable2[i],
                      restLengthsCable3[i],
                      restLengthsCable4[i],
                      restLengthsCable5[i],
                      restLengthsCable6[i],
                      restLengthsCable7[i],
                      restLengthsCable8[i],
                      restLengthsCable9[i],
                      restLengthsCable10[i],
                      restLengthsCable11[i],
                      restLengthsCable12[i],
                      restLengthsCable13[i],
                      restLengthsCable14[i],
                      restLengthsCable15[i],
                      restLengthsCable16[i],
                      restLengthsCable17[i],
                      restLengthsCable18[i],
                      restLengthsCable19[i],
                      restLengthsCable20[i],
                      restLengthsCable21[i],
                      restLengthsCable22[i],
                      restLengthsCable23[i]);
    }
    fclose(pFile);
  }
}


void HopfControllerML::saveHistDamping()
{
  std::deque<double> dampingCable0((cablesWithTags[0]->getHistory()).dampingHistory);
  std::deque<double> dampingCable1((cablesWithTags[1]->getHistory()).dampingHistory);
  std::deque<double> dampingCable2((cablesWithTags[2]->getHistory()).dampingHistory);
  std::deque<double> dampingCable3((cablesWithTags[3]->getHistory()).dampingHistory);
  std::deque<double> dampingCable4((cablesWithTags[4]->getHistory()).dampingHistory);
  std::deque<double> dampingCable5((cablesWithTags[5]->getHistory()).dampingHistory);
  std::deque<double> dampingCable6((cablesWithTags[6]->getHistory()).dampingHistory);
  std::deque<double> dampingCable7((cablesWithTags[7]->getHistory()).dampingHistory);
  std::deque<double> dampingCable8((cablesWithTags[8]->getHistory()).dampingHistory);
  std::deque<double> dampingCable9((cablesWithTags[9]->getHistory()).dampingHistory);
  std::deque<double> dampingCable10((cablesWithTags[10]->getHistory()).dampingHistory);
  std::deque<double> dampingCable11((cablesWithTags[11]->getHistory()).dampingHistory);
  std::deque<double> dampingCable12((cablesWithTags[12]->getHistory()).dampingHistory);
  std::deque<double> dampingCable13((cablesWithTags[13]->getHistory()).dampingHistory);
  std::deque<double> dampingCable14((cablesWithTags[14]->getHistory()).dampingHistory);
  std::deque<double> dampingCable15((cablesWithTags[15]->getHistory()).dampingHistory);
  std::deque<double> dampingCable16((cablesWithTags[16]->getHistory()).dampingHistory);
  std::deque<double> dampingCable17((cablesWithTags[17]->getHistory()).dampingHistory);
  std::deque<double> dampingCable18((cablesWithTags[18]->getHistory()).dampingHistory);
  std::deque<double> dampingCable19((cablesWithTags[19]->getHistory()).dampingHistory);
  std::deque<double> dampingCable20((cablesWithTags[20]->getHistory()).dampingHistory);
  std::deque<double> dampingCable21((cablesWithTags[21]->getHistory()).dampingHistory);
  std::deque<double> dampingCable22((cablesWithTags[22]->getHistory()).dampingHistory);
  std::deque<double> dampingCable23((cablesWithTags[23]->getHistory()).dampingHistory);
  
  FILE *pFile;
  std::string fileNameStr = "/home/tensegribuntu/projects/tg_shared/";
  fileNameStr += timebuffer;
  fileNameStr += "_histLogDamping.csv";
  const char* fileName = fileNameStr.c_str();
  pFile = fopen(fileName,"a");
  if(pFile!=NULL){
    for(int i=0;i<dampingCable0.size();i++)
    {
      double t = (double)i/1000;
      fprintf(pFile, "%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n",t,
                      dampingCable0[i],
                      dampingCable1[i],
                      dampingCable2[i],
                      dampingCable3[i],
                      dampingCable4[i],
                      dampingCable5[i],
                      dampingCable6[i],
                      dampingCable7[i],
                      dampingCable8[i],
                      dampingCable9[i],
                      dampingCable10[i],
                      dampingCable11[i],
                      dampingCable12[i],
                      dampingCable13[i],
                      dampingCable14[i],
                      dampingCable15[i],
                      dampingCable16[i],
                      dampingCable17[i],
                      dampingCable18[i],
                      dampingCable19[i],
                      dampingCable20[i],
                      dampingCable21[i],
                      dampingCable22[i],
                      dampingCable23[i]);
    }
    fclose(pFile);
  }
}


void HopfControllerML::saveHistLastVelocities()
{
  std::deque<double> lastVelocitiesCable0((cablesWithTags[0]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable1((cablesWithTags[1]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable2((cablesWithTags[2]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable3((cablesWithTags[3]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable4((cablesWithTags[4]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable5((cablesWithTags[5]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable6((cablesWithTags[6]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable7((cablesWithTags[7]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable8((cablesWithTags[8]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable9((cablesWithTags[9]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable10((cablesWithTags[10]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable11((cablesWithTags[11]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable12((cablesWithTags[12]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable13((cablesWithTags[13]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable14((cablesWithTags[14]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable15((cablesWithTags[15]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable16((cablesWithTags[16]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable17((cablesWithTags[17]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable18((cablesWithTags[18]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable19((cablesWithTags[19]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable20((cablesWithTags[20]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable21((cablesWithTags[21]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable22((cablesWithTags[22]->getHistory()).lastVelocities);
  std::deque<double> lastVelocitiesCable23((cablesWithTags[23]->getHistory()).lastVelocities);
  
  FILE *pFile;
  std::string fileNameStr = "/home/tensegribuntu/projects/tg_shared/";
  fileNameStr += timebuffer;
  fileNameStr += "_histLogLastVelocities.csv";
  const char* fileName = fileNameStr.c_str();
  pFile = fopen(fileName,"a");
  if(pFile!=NULL){
    for(int i=0;i<lastVelocitiesCable0.size();i++)
    {
      double t = (double)i/1000;
      fprintf(pFile, "%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n",t,
                      lastVelocitiesCable0[i],
                      lastVelocitiesCable1[i],
                      lastVelocitiesCable2[i],
                      lastVelocitiesCable3[i],
                      lastVelocitiesCable4[i],
                      lastVelocitiesCable5[i],
                      lastVelocitiesCable6[i],
                      lastVelocitiesCable7[i],
                      lastVelocitiesCable8[i],
                      lastVelocitiesCable9[i],
                      lastVelocitiesCable10[i],
                      lastVelocitiesCable11[i],
                      lastVelocitiesCable12[i],
                      lastVelocitiesCable13[i],
                      lastVelocitiesCable14[i],
                      lastVelocitiesCable15[i],
                      lastVelocitiesCable16[i],
                      lastVelocitiesCable17[i],
                      lastVelocitiesCable18[i],
                      lastVelocitiesCable19[i],
                      lastVelocitiesCable20[i],
                      lastVelocitiesCable21[i],
                      lastVelocitiesCable22[i],
                      lastVelocitiesCable23[i]);                      
    }
    fclose(pFile);
  }
}


void HopfControllerML::saveHistTension()
{
  std::deque<double> tensionHistoryCable0((cablesWithTags[0]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable1((cablesWithTags[1]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable2((cablesWithTags[2]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable3((cablesWithTags[3]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable4((cablesWithTags[4]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable5((cablesWithTags[5]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable6((cablesWithTags[6]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable7((cablesWithTags[7]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable8((cablesWithTags[8]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable9((cablesWithTags[9]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable10((cablesWithTags[10]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable11((cablesWithTags[11]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable12((cablesWithTags[12]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable13((cablesWithTags[13]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable14((cablesWithTags[14]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable15((cablesWithTags[15]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable16((cablesWithTags[16]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable17((cablesWithTags[17]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable18((cablesWithTags[18]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable19((cablesWithTags[19]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable20((cablesWithTags[20]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable21((cablesWithTags[21]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable22((cablesWithTags[22]->getHistory()).tensionHistory);
  std::deque<double> tensionHistoryCable23((cablesWithTags[23]->getHistory()).tensionHistory);
  
  FILE *pFile;
  std::string fileNameStr = "/home/tensegribuntu/projects/tg_shared/";
  fileNameStr += timebuffer;
  fileNameStr += "_histLogTension.csv";
  const char* fileName = fileNameStr.c_str();
  pFile = fopen(fileName,"a");
  if(pFile!=NULL){
    for(int i=0;i<tensionHistoryCable0.size();i++)
    {
      double t = (double)i/1000;
      fprintf(pFile, "%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n",t,
                      tensionHistoryCable0[i],
                      tensionHistoryCable1[i],
                      tensionHistoryCable2[i],
                      tensionHistoryCable3[i],
                      tensionHistoryCable4[i],
                      tensionHistoryCable5[i],
                      tensionHistoryCable6[i],
                      tensionHistoryCable7[i],
                      tensionHistoryCable8[i],
                      tensionHistoryCable9[i],
                      tensionHistoryCable10[i],
                      tensionHistoryCable11[i],
                      tensionHistoryCable12[i],
                      tensionHistoryCable13[i],
                      tensionHistoryCable14[i],
                      tensionHistoryCable15[i],
                      tensionHistoryCable16[i],
                      tensionHistoryCable17[i],
                      tensionHistoryCable18[i],
                      tensionHistoryCable19[i],
                      tensionHistoryCable20[i],
                      tensionHistoryCable21[i],
                      tensionHistoryCable22[i],
                      tensionHistoryCable23[i]);                      
    }
    fclose(pFile);
  }
}


/**
 * Test method for position control (/!\ requires tgBasicActuator class, not tgKinematicActuator)
 */
void HopfControllerML::sineTest(TensegrityModel& subject, double dt, int firstCable, int lastCable, double initRestLengths, double offset, double amp)
{
  double sin_res = 0;
  sin_res = amp*(sin(2*3.14*0.2*dt+offset)+1);
  
  for (std::size_t i = firstCable; i <= lastCable; i ++) 
  {  
    double currRestLength = initialRL[cablesWithTags[i]->getTags()];
    //std::cout<<"currRestLength for cable " << cablesWithTags[i]->getTags() << ": " << currRestLength << std::endl;
    double nextRestLength = initRestLengths*(1+sin_res);
    //std::cout<<"nextRestLength: "<<nextRestLength<<std::endl;
    //std::cout << cablesWithTags[i]->getTags() << std::endl;
    //cablesWithTags[i]->setControlInput(nextRestLength,dt);
    cablesWithTags[i]->setControlInput(nextRestLength,dt);
  }
}


/**
 * Test method for position control (/!\ requires tgBasicActuator class, not tgKinematicActuator)
 */
void HopfControllerML::checkLengths(TensegrityModel& subject, double dt, int firstCable, int lastCable)
{
  // For each cable, check if its rest length is past the minimum,
  // otherwise adjust its length according to m_rate and dt.
  for (std::size_t i = firstCable; i < lastCable; i ++)
  {  
    double currRestLength = cablesWithTags[i]->getRestLength();
    
    // Calculate the minimum rest length for this cable.
    // Remember that m_minLength is a percent.
    double minRestLength = initialRL[cablesWithTags[i]->getTags()] * m_minLength;
    
    // If the current rest length is still greater than the minimum,
    if( currRestLength > minRestLength ) 
    {
      // Then, adjust the rest length of the actuator itself, according to
      // m_rate and dt.
      double nextRestLength = currRestLength - m_rate * dt;
    
      cablesWithTags[i]->setControlInput(nextRestLength);
    }
  }
}