#ifndef POSITION_INPUTS_254_H_
#define POSITION_INPUTS_254_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_254 States
enum PositionInputs254States {
    POSITION_INPUTS_254_INTEGRATE,
    POSITION_INPUTS_254_LIMIT,
    POSITION_INPUTS_254_SPIKE,
    POSITION_INPUTS_254_REFRACTORY,
};

// position_inputs_254 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs254States state;
} PositionInputs254;

// position_inputs_254 Initialisation function
void PositionInputs254Init(PositionInputs254* me);

// position_inputs_254 Execution function
void PositionInputs254Run(PositionInputs254* me);

#endif // POSITION_INPUTS_254_H_