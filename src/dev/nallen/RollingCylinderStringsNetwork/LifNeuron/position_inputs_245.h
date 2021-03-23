#ifndef POSITION_INPUTS_245_H_
#define POSITION_INPUTS_245_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_245 States
enum PositionInputs245States {
    POSITION_INPUTS_245_INTEGRATE,
    POSITION_INPUTS_245_LIMIT,
    POSITION_INPUTS_245_SPIKE,
    POSITION_INPUTS_245_REFRACTORY,
};

// position_inputs_245 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs245States state;
} PositionInputs245;

// position_inputs_245 Initialisation function
void PositionInputs245Init(PositionInputs245* me);

// position_inputs_245 Execution function
void PositionInputs245Run(PositionInputs245* me);

#endif // POSITION_INPUTS_245_H_