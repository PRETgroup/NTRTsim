#ifndef POSITION_INPUTS_395_H_
#define POSITION_INPUTS_395_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_395 States
enum PositionInputs395States {
    POSITION_INPUTS_395_INTEGRATE,
    POSITION_INPUTS_395_LIMIT,
    POSITION_INPUTS_395_SPIKE,
    POSITION_INPUTS_395_REFRACTORY,
};

// position_inputs_395 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs395States state;
} PositionInputs395;

// position_inputs_395 Initialisation function
void PositionInputs395Init(PositionInputs395* me);

// position_inputs_395 Execution function
void PositionInputs395Run(PositionInputs395* me);

#endif // POSITION_INPUTS_395_H_