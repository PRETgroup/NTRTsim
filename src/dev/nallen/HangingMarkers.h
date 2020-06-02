#ifndef HANGING_MARKERS_CONTROLLER_H
#define HANGING_MARKERS_CONTROLLER_H

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

// Forward declarations
class TensegrityModel;

#define MARKER_HANGING_BAR_TOP 0
#define MARKER_FRONT 1
#define MARKER_LEFT 2
#define MARKER_RIGHT 3

#define TRIANGLE_D 8
#define TRIANGLE_H 12

class HangingMarkers : public tgObserver<TensegrityModel>, public tgSubject<HangingMarkers>
{
public:
  HangingMarkers();
    
  virtual ~HangingMarkers() { }

  virtual void onSetup(TensegrityModel& subject);
    
  virtual void onStep(TensegrityModel& subject, double dt) {}

};

#endif // HANGING_MARKERS_CONTROLLER_H
