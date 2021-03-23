#ifndef POSITION_INPUTS_184_H_
#define POSITION_INPUTS_184_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_184 States
enum PositionInputs184States {
    POSITION_INPUTS_184_INTEGRATE,
    POSITION_INPUTS_184_LIMIT,
    POSITION_INPUTS_184_SPIKE,
    POSITION_INPUTS_184_REFRACTORY,
};

// position_inputs_184 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs184States state;
} PositionInputs184;

// position_inputs_184 Initialisation function
void PositionInputs184Init(PositionInputs184* me);

// position_inputs_184 Execution function
void PositionInputs184Run(PositionInputs184* me);

#endif // POSITION_INPUTS_184_H_