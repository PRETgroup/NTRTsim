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
 * @file TwoBoxesModel.cpp
 * @brief Contains the implementation of class TwoBoxesModel.
 * @author Drew Sabelhaus
 * @copyright Copyright (C) 2016 NASA Ames Research Center
 * $Id$
 */

// This module
#include "TwoBoxesModel.h"
// This library
#include "core/tgCompressionSpringActuator.h"
#include "core/tgUnidirComprSprActuator.h"
#include "core/tgBasicActuator.h"
#include "core/tgRod.h"
#include "core/tgBox.h"
#include "core/tgBoxMoreAnchors.h"
#include "tgcreator/tgBuildSpec.h"
#include "tgcreator/tgCompressionSpringActuatorInfo.h"
#include "tgcreator/tgUnidirComprSprActuatorInfo.h"
#include "tgcreator/tgBasicActuatorInfo.h"
#include "tgcreator/tgRodInfo.h"
#include "tgcreator/tgBoxInfo.h"
#include "tgcreator/tgBoxMoreAnchorsInfo.h"
#include "tgcreator/tgStructure.h"
#include "tgcreator/tgStructureInfo.h"
// The Bullet Physics library
#include "LinearMath/btVector3.h"
// The C++ Standard Library
#include <stdexcept>

namespace
{
    // using tgCompressionSpringActuator here.
    // frictional parameters are for the tgBox objects.
    const struct Config
    {
      double density;
      double radius;
      bool isFreeEndAttached;
      double stiffness;
      double damping;
      btVector3 * direction;
      double boxLength;
      double boxWidth;
      double boxHeight;
      btVector3 boxStart;
      btVector3 boxEnd;
      double friction;
      double rollFriction;
      double restitution;
      double springRestLength;
      bool moveCablePointAToEdge;
      bool moveCablePointBToEdge;
      double pretension; // parameters for basic actuator
      bool   hist;
      double maxTens;
      double targetVelocity;
    } c =
   {
     //0.1,    // density (kg / length^3)
     0.0,    // density (kg / length^3)
     0.31,     // radius (length)
     true,   // isFreeEndAttached
     500.0,   // stiffness (kg / sec^2) was 1500
     20.0,    // damping (kg / sec)
     //new btVector3(1, 0, 0),  // direction
     new btVector3(0, 1, 0),  // direction
     2.0,   // boxLength (length)
     4.0,   // boxWidth (length)
     1.0,   // boxHeight (length)
     btVector3(0, 0, 0 ), // boxStart
     btVector3(0, 3, 0 ), // boxEnd
     1.0,      // friction (unitless)
     1.0,     // rollFriction (unitless)
     0.2,      // restitution (?)
     4.0,   // springRestLength (length)
     false,   // moveCablePointAToEdge
     false,   // moveCablePointBToEdge
     600.0,        // pretension -> set to 4 * 613, the previous value of the rest length controller
     0,			// History logging (boolean)
     100000,   // maxTens
     10000,    // targetVelocity
  };
} // namespace

// Constructor: does nothing. All the good stuff happens when the 'Info' classes
// are passed to the tgBuilders and whatnot.
TwoBoxesModel::TwoBoxesModel() : tgModel() 
{
}

// Destructor MUST DELETE the btVector3 in the config struct.
// Since the pointer is created here, it must also be deleted here, and not
// in any of the classes in core.
// @TO-DO: DO WE NEED THIS? IT DOESN'T SEEM TO BE CALLED AT THE END OF THE
// SIMULATION ANYWAY...
TwoBoxesModel::~TwoBoxesModel()
{
    #if (1)
    std::cout << "TwoBoxesModel destructor." << std::endl;
    if( c.direction != NULL )
      {
	std::cout << "Direction vector is not null, deleting it." << std::endl;
	delete c.direction;
	//c.direction = NULL;
	std::cout << "c.direction has been deleted." << std::endl;
      }
    else
      {
	std::cout << "Direction vector is NULL, not deleting it." << std::endl;
      }
    #endif   
}

// a helper function to add a bunch of nodes
void TwoBoxesModel::addNodes(tgStructure& s)
{
  // Version with vertical boxes:
  s.addNode(0, 0, 0);              // 0, origin, bottom of box 1
  s.addNode(0, 2 * c.boxLength, 0);      // 1, top of box 1
  s.addNode(0, 4 * c.boxLength, 0);  // 2, bottom of box 2
  s.addNode(0, 5 * c.boxLength, 0);  // 3, top of box 2
  // Note that box width is distance from center to outside,
  // NOT the distance from one side to another.
  s.addNode(-c.boxWidth, c.boxLength,  0); // 4, side of box 1
  s.addNode(-c.boxWidth, 4.5 * c.boxLength, 0); // 5, side of box 2
  // Now, a node on the other side of the box:
  s.addNode(0, c.boxLength, -c.boxHeight); // 6, on the other side of box 1
  s.addNode(0, 4.5 * c.boxLength, -c.boxHeight); // 7, on the other side of box 2
  
  // Remember, boxes are created with (x, y, z) == (w, L, h) before rotation.
  // Version with horizontal boxes:
  
  //s.addNode(0, c.boxWidth, 0);              // 0, origin, start of box 1
  //s.addNode(c.boxLength, c.boxWidth, 0);      // 1, end of box 1
  //s.addNode(2 * c.boxLength, c.boxWidth, 0);  // 2, start of box 2
  //.addNode(3 * c.boxLength, c.boxWidth, 0);  // 3, end of box 2
  // Note that box width is distance from center to outside,
  // NOT the distance from one side to another.
  //s.addNode( 1.5 * c.boxLength, c.boxWidth, c.boxHeight); // 4, side of box 1
  //s.addNode( 2.5 * c.boxLength, c.boxWidth, c.boxHeight); // 5, side of box 2

  // Testing to see how boxes are extruded. What is width, and what is height,
  // for different directions?
  // This test has (L = 3, w = 4, h = 1.)
  // Below gives a box with "width" as the
  //s.addNode( c.boxStart ); // 0
  //s.addNode( 0, 0, 0 ); // 0
  //s.addNode( c.boxEnd ); // 1
  //s.addNode( 0, 3, 0 ); // 1
  //s.addNode( c.boxLength, c.boxHeight, 0); // 6
}

// helper function to tag two sets of nodes as boxes
void TwoBoxesModel::addBoxes(tgStructure& s)
{
  s.addPair( 0,  1, "box");
  s.addPair( 2,  3, "box");
  // Testing for determining the direction that a box gets created in:
  //s.addPair(0, 6, "box");
}

// helper function to add our single compression spring actuator
void TwoBoxesModel::addActuators(tgStructure& s)
{
  // spring is vertical between top of box 1 and bottom of box 2.
  //s.addPair(1, 2,  "compressionSpring");
  s.addPair(1, 2, "basicActuator");
  s.addPair(4, 5, "basicActuator");
  s.addPair(6, 7, "basicActuator");
}

// Finally, create the model!
void TwoBoxesModel::setup(tgWorld& world)
{
    // config struct for the rods
    const tgBox::Config boxConfig(c.boxWidth, c.boxHeight, c.density, 
				  c.friction, c.rollFriction, c.restitution);

    // config struct for the compression spring
    //tgCompressionSpringActuator::Config compressionSpringConfig(c.isFreeEndAttached,
    //				c.stiffness, c.damping, c.springRestLength,
    //				c.moveCablePointAToEdge, c.moveCablePointBToEdge);
    tgUnidirComprSprActuator::Config compressionSpringConfig(
				c.isFreeEndAttached, c.stiffness, c.damping,
				c.springRestLength, c.moveCablePointAToEdge,
				c.moveCablePointBToEdge, c.direction);

    tgBasicActuator::Config basActConfig(c.stiffness, c.damping, c.pretension,
    					 c.hist, c.maxTens, c.targetVelocity);
    // Modify: do not move the basic actuator to the edge on either side.
    basActConfig.moveCablePointAToEdge = c.moveCablePointAToEdge;
    basActConfig.moveCablePointBToEdge = c.moveCablePointBToEdge;

    #if (1)
    std::cout << "TwoBoxesModel::setup. Direction is: ";
    std::cout << "(" << c.direction->x() << ",";
    std::cout << c.direction->y() << ",";
    std::cout << c.direction->z() << ")" << std::endl;
    #endif    
    
    // Start creating the structure
    tgStructure s;
    addNodes(s);
    addBoxes(s);
    addActuators(s);
    s.move(btVector3(0, 2, 0));

    // Add a rotation. This is needed if the ground slopes too much,
    // otherwise  glitches put a rod below the ground.
    /*btVector3 rotationPoint = btVector3(0, 0, 0); // origin
    btVector3 rotationAxis = btVector3(0, 1, 0);  // y-axis
    double rotationAngle = M_PI/2;
    s.addRotation(rotationPoint, rotationAxis, rotationAngle);
    */

    // Create the build spec that uses tags to turn the structure into a real model
    tgBuildSpec spec;
    //spec.addBuilder("box", new tgBoxInfo(boxConfig));
    spec.addBuilder("box", new tgBoxMoreAnchorsInfo(boxConfig));
    //spec.addBuilder("compressionSpring", new tgCompressionSpringActuatorInfo(compressionSpringConfig));
    //spec.addBuilder("compressionSpring", new tgUnidirComprSprActuatorInfo(compressionSpringConfig));
    //spec.addBuilder("basicActuator", new tgUnidirComprSprActuatorInfo(compressionSpringConfig));
    spec.addBuilder("basicActuator", new tgBasicActuatorInfo(basActConfig));

    
    // Create your structureInfo
    tgStructureInfo structureInfo(s, spec);

    // Use the structureInfo to build ourselves
    structureInfo.buildInto(*this, world);

    // We could now use tgCast::filter or similar to pull out the
    // models (e.g. muscles) that we want to control. 
    allActuators = tgCast::filter<tgModel, tgCompressionSpringActuator> (getDescendants());
    //allActuators = tgCast::filter<tgModel, tgBasicActuator> (getDescendants());

    // call the onSetup methods of all observed things e.g. controllers
    notifySetup();

    // Actually setup the children
    tgModel::setup(world);
}

void TwoBoxesModel::step(double dt)
{
    // Precondition
    if (dt <= 0.0)
    {
        throw std::invalid_argument("dt is not positive");
    }
    else
    {
        // Notify observers (controllers) of the step so that they can take action
        notifyStep(dt);
        tgModel::step(dt);  // Step any children
    }
}

void TwoBoxesModel::onVisit(tgModelVisitor& r)
{
    tgModel::onVisit(r);
}

const std::vector<tgCompressionSpringActuator*>& TwoBoxesModel::getAllActuators() const
//const std::vector<tgBasicActuator*>& TwoBoxesModel::getAllActuators() const
{
    return allActuators;
}
    
void TwoBoxesModel::teardown()
{
    notifyTeardown();
    tgModel::teardown();
}
