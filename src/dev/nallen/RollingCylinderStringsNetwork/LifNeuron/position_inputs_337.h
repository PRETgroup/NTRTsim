#ifndef POSITION_INPUTS_337_H_
#define POSITION_INPUTS_337_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_337 States
enum PositionInputs337States {
    POSITION_INPUTS_337_INTEGRATE,
    POSITION_INPUTS_337_LIMIT,
    POSITION_INPUTS_337_SPIKE,
    POSITION_INPUTS_337_REFRACTORY,
};

// position_inputs_337 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs337States state;
} PositionInputs337;

// position_inputs_337 Initialisation function
void PositionInputs337Init(PositionInputs337* me);

// position_inputs_337 Execution function
void PositionInputs337Run(PositionInputs337* me);

#endif // POSITION_INPUTS_337_H_