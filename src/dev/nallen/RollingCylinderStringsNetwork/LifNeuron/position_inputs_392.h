#ifndef POSITION_INPUTS_392_H_
#define POSITION_INPUTS_392_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_392 States
enum PositionInputs392States {
    POSITION_INPUTS_392_INTEGRATE,
    POSITION_INPUTS_392_LIMIT,
    POSITION_INPUTS_392_SPIKE,
    POSITION_INPUTS_392_REFRACTORY,
};

// position_inputs_392 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs392States state;
} PositionInputs392;

// position_inputs_392 Initialisation function
void PositionInputs392Init(PositionInputs392* me);

// position_inputs_392 Execution function
void PositionInputs392Run(PositionInputs392* me);

#endif // POSITION_INPUTS_392_H_