#ifndef POSITION_INPUTS_368_H_
#define POSITION_INPUTS_368_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_368 States
enum PositionInputs368States {
    POSITION_INPUTS_368_INTEGRATE,
    POSITION_INPUTS_368_LIMIT,
    POSITION_INPUTS_368_SPIKE,
    POSITION_INPUTS_368_REFRACTORY,
};

// position_inputs_368 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs368States state;
} PositionInputs368;

// position_inputs_368 Initialisation function
void PositionInputs368Init(PositionInputs368* me);

// position_inputs_368 Execution function
void PositionInputs368Run(PositionInputs368* me);

#endif // POSITION_INPUTS_368_H_