#ifndef POSITION_INPUTS_287_H_
#define POSITION_INPUTS_287_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_287 States
enum PositionInputs287States {
    POSITION_INPUTS_287_INTEGRATE,
    POSITION_INPUTS_287_LIMIT,
    POSITION_INPUTS_287_SPIKE,
    POSITION_INPUTS_287_REFRACTORY,
};

// position_inputs_287 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs287States state;
} PositionInputs287;

// position_inputs_287 Initialisation function
void PositionInputs287Init(PositionInputs287* me);

// position_inputs_287 Execution function
void PositionInputs287Run(PositionInputs287* me);

#endif // POSITION_INPUTS_287_H_