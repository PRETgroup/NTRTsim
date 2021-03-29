#ifndef POSITION_INPUTS_176_H_
#define POSITION_INPUTS_176_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_176 States
enum PositionInputs176States {
    POSITION_INPUTS_176_INTEGRATE,
    POSITION_INPUTS_176_LIMIT,
    POSITION_INPUTS_176_SPIKE,
    POSITION_INPUTS_176_REFRACTORY,
};

// position_inputs_176 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs176States state;
} PositionInputs176;

// position_inputs_176 Initialisation function
void PositionInputs176Init(PositionInputs176* me);

// position_inputs_176 Execution function
void PositionInputs176Run(PositionInputs176* me);

#endif // POSITION_INPUTS_176_H_