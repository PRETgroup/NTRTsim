#ifndef POSITION_INPUTS_151_H_
#define POSITION_INPUTS_151_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_151 States
enum PositionInputs151States {
    POSITION_INPUTS_151_INTEGRATE,
    POSITION_INPUTS_151_LIMIT,
    POSITION_INPUTS_151_SPIKE,
    POSITION_INPUTS_151_REFRACTORY,
};

// position_inputs_151 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs151States state;
} PositionInputs151;

// position_inputs_151 Initialisation function
void PositionInputs151Init(PositionInputs151* me);

// position_inputs_151 Execution function
void PositionInputs151Run(PositionInputs151* me);

#endif // POSITION_INPUTS_151_H_