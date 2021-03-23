#ifndef POSITION_INPUTS_144_H_
#define POSITION_INPUTS_144_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_144 States
enum PositionInputs144States {
    POSITION_INPUTS_144_INTEGRATE,
    POSITION_INPUTS_144_LIMIT,
    POSITION_INPUTS_144_SPIKE,
    POSITION_INPUTS_144_REFRACTORY,
};

// position_inputs_144 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs144States state;
} PositionInputs144;

// position_inputs_144 Initialisation function
void PositionInputs144Init(PositionInputs144* me);

// position_inputs_144 Execution function
void PositionInputs144Run(PositionInputs144* me);

#endif // POSITION_INPUTS_144_H_