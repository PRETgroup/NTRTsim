#ifndef POSITION_INPUTS_146_H_
#define POSITION_INPUTS_146_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_146 States
enum PositionInputs146States {
    POSITION_INPUTS_146_INTEGRATE,
    POSITION_INPUTS_146_LIMIT,
    POSITION_INPUTS_146_SPIKE,
    POSITION_INPUTS_146_REFRACTORY,
};

// position_inputs_146 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs146States state;
} PositionInputs146;

// position_inputs_146 Initialisation function
void PositionInputs146Init(PositionInputs146* me);

// position_inputs_146 Execution function
void PositionInputs146Run(PositionInputs146* me);

#endif // POSITION_INPUTS_146_H_