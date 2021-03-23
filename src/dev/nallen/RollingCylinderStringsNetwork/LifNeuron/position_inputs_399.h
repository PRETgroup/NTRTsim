#ifndef POSITION_INPUTS_399_H_
#define POSITION_INPUTS_399_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_399 States
enum PositionInputs399States {
    POSITION_INPUTS_399_INTEGRATE,
    POSITION_INPUTS_399_LIMIT,
    POSITION_INPUTS_399_SPIKE,
    POSITION_INPUTS_399_REFRACTORY,
};

// position_inputs_399 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs399States state;
} PositionInputs399;

// position_inputs_399 Initialisation function
void PositionInputs399Init(PositionInputs399* me);

// position_inputs_399 Execution function
void PositionInputs399Run(PositionInputs399* me);

#endif // POSITION_INPUTS_399_H_