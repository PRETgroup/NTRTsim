#ifndef POSITION_INPUTS_246_H_
#define POSITION_INPUTS_246_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_246 States
enum PositionInputs246States {
    POSITION_INPUTS_246_INTEGRATE,
    POSITION_INPUTS_246_LIMIT,
    POSITION_INPUTS_246_SPIKE,
    POSITION_INPUTS_246_REFRACTORY,
};

// position_inputs_246 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs246States state;
} PositionInputs246;

// position_inputs_246 Initialisation function
void PositionInputs246Init(PositionInputs246* me);

// position_inputs_246 Execution function
void PositionInputs246Run(PositionInputs246* me);

#endif // POSITION_INPUTS_246_H_