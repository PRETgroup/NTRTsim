#ifndef POSITION_INPUTS_60_H_
#define POSITION_INPUTS_60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_60 States
enum PositionInputs60States {
    POSITION_INPUTS_60_INTEGRATE,
    POSITION_INPUTS_60_LIMIT,
    POSITION_INPUTS_60_SPIKE,
    POSITION_INPUTS_60_REFRACTORY,
};

// position_inputs_60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs60States state;
} PositionInputs60;

// position_inputs_60 Initialisation function
void PositionInputs60Init(PositionInputs60* me);

// position_inputs_60 Execution function
void PositionInputs60Run(PositionInputs60* me);

#endif // POSITION_INPUTS_60_H_