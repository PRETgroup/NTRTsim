#ifndef POSITION_INPUTS_166_H_
#define POSITION_INPUTS_166_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_166 States
enum PositionInputs166States {
    POSITION_INPUTS_166_INTEGRATE,
    POSITION_INPUTS_166_LIMIT,
    POSITION_INPUTS_166_SPIKE,
    POSITION_INPUTS_166_REFRACTORY,
};

// position_inputs_166 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs166States state;
} PositionInputs166;

// position_inputs_166 Initialisation function
void PositionInputs166Init(PositionInputs166* me);

// position_inputs_166 Execution function
void PositionInputs166Run(PositionInputs166* me);

#endif // POSITION_INPUTS_166_H_