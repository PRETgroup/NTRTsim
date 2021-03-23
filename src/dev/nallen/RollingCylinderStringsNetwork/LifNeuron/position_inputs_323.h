#ifndef POSITION_INPUTS_323_H_
#define POSITION_INPUTS_323_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_323 States
enum PositionInputs323States {
    POSITION_INPUTS_323_INTEGRATE,
    POSITION_INPUTS_323_LIMIT,
    POSITION_INPUTS_323_SPIKE,
    POSITION_INPUTS_323_REFRACTORY,
};

// position_inputs_323 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs323States state;
} PositionInputs323;

// position_inputs_323 Initialisation function
void PositionInputs323Init(PositionInputs323* me);

// position_inputs_323 Execution function
void PositionInputs323Run(PositionInputs323* me);

#endif // POSITION_INPUTS_323_H_