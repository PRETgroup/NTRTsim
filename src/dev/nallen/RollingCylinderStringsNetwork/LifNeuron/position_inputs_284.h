#ifndef POSITION_INPUTS_284_H_
#define POSITION_INPUTS_284_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_284 States
enum PositionInputs284States {
    POSITION_INPUTS_284_INTEGRATE,
    POSITION_INPUTS_284_LIMIT,
    POSITION_INPUTS_284_SPIKE,
    POSITION_INPUTS_284_REFRACTORY,
};

// position_inputs_284 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs284States state;
} PositionInputs284;

// position_inputs_284 Initialisation function
void PositionInputs284Init(PositionInputs284* me);

// position_inputs_284 Execution function
void PositionInputs284Run(PositionInputs284* me);

#endif // POSITION_INPUTS_284_H_