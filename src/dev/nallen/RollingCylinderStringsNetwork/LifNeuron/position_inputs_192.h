#ifndef POSITION_INPUTS_192_H_
#define POSITION_INPUTS_192_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_192 States
enum PositionInputs192States {
    POSITION_INPUTS_192_INTEGRATE,
    POSITION_INPUTS_192_LIMIT,
    POSITION_INPUTS_192_SPIKE,
    POSITION_INPUTS_192_REFRACTORY,
};

// position_inputs_192 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs192States state;
} PositionInputs192;

// position_inputs_192 Initialisation function
void PositionInputs192Init(PositionInputs192* me);

// position_inputs_192 Execution function
void PositionInputs192Run(PositionInputs192* me);

#endif // POSITION_INPUTS_192_H_