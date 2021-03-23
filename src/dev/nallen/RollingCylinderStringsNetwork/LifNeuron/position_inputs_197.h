#ifndef POSITION_INPUTS_197_H_
#define POSITION_INPUTS_197_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_197 States
enum PositionInputs197States {
    POSITION_INPUTS_197_INTEGRATE,
    POSITION_INPUTS_197_LIMIT,
    POSITION_INPUTS_197_SPIKE,
    POSITION_INPUTS_197_REFRACTORY,
};

// position_inputs_197 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs197States state;
} PositionInputs197;

// position_inputs_197 Initialisation function
void PositionInputs197Init(PositionInputs197* me);

// position_inputs_197 Execution function
void PositionInputs197Run(PositionInputs197* me);

#endif // POSITION_INPUTS_197_H_