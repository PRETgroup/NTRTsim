// This module
#include "HangingMarkers.h"
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

HangingMarkers::HangingMarkers() {
}

void HangingMarkers::onSetup(TensegrityModel& subject)
{
    // Add the required markers for our controller
    subject.addMarker(abstractMarker(subject.find<tgRod>("hanger")[0]->getPRigidBody(),
			   btVector3(0, 4, 0) - subject.find<tgRod>("hanger")[0]->getPRigidBody()->getCenterOfMassPosition(),
			   btVector3(0, 0, 0), MARKER_HANGING_BAR_TOP));

    subject.addMarker(abstractMarker(subject.find<tgRod>("structure")[0]->getPRigidBody(),
			   btVector3(TRIANGLE_D, TRIANGLE_H, 0) - subject.find<tgRod>("structure")[0]->getPRigidBody()->getCenterOfMassPosition(),
			   btVector3(0, 0, 1), MARKER_FRONT));

    subject.addMarker(abstractMarker(subject.find<tgRod>("structure")[0]->getPRigidBody(),
			   btVector3(-TRIANGLE_D*sin(30 * M_PI / 180), TRIANGLE_H, -TRIANGLE_D*cos(30 * M_PI / 180)) - subject.find<tgRod>("structure")[0]->getPRigidBody()->getCenterOfMassPosition(),
			   btVector3(1, 0, 0), MARKER_LEFT));

    subject.addMarker(abstractMarker(subject.find<tgRod>("structure")[0]->getPRigidBody(),
			   btVector3(-TRIANGLE_D*sin(30 * M_PI / 180), TRIANGLE_H, TRIANGLE_D*cos(30 * M_PI / 180)) - subject.find<tgRod>("structure")[0]->getPRigidBody()->getCenterOfMassPosition(),
			   btVector3(0, 1, 0), MARKER_RIGHT));
}
