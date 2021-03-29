#ifndef POSITION_INPUTS_198_H_
#define POSITION_INPUTS_198_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_198 States
enum PositionInputs198States {
    POSITION_INPUTS_198_INTEGRATE,
    POSITION_INPUTS_198_LIMIT,
    POSITION_INPUTS_198_SPIKE,
    POSITION_INPUTS_198_REFRACTORY,
};

// position_inputs_198 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs198States state;
} PositionInputs198;

// position_inputs_198 Initialisation function
void PositionInputs198Init(PositionInputs198* me);

// position_inputs_198 Execution function
void PositionInputs198Run(PositionInputs198* me);

#endif // POSITION_INPUTS_198_H_