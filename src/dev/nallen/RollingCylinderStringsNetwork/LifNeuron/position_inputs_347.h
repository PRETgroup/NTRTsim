#ifndef POSITION_INPUTS_347_H_
#define POSITION_INPUTS_347_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_347 States
enum PositionInputs347States {
    POSITION_INPUTS_347_INTEGRATE,
    POSITION_INPUTS_347_LIMIT,
    POSITION_INPUTS_347_SPIKE,
    POSITION_INPUTS_347_REFRACTORY,
};

// position_inputs_347 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs347States state;
} PositionInputs347;

// position_inputs_347 Initialisation function
void PositionInputs347Init(PositionInputs347* me);

// position_inputs_347 Execution function
void PositionInputs347Run(PositionInputs347* me);

#endif // POSITION_INPUTS_347_H_