#ifndef POSITION_INPUTS_223_H_
#define POSITION_INPUTS_223_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_223 States
enum PositionInputs223States {
    POSITION_INPUTS_223_INTEGRATE,
    POSITION_INPUTS_223_LIMIT,
    POSITION_INPUTS_223_SPIKE,
    POSITION_INPUTS_223_REFRACTORY,
};

// position_inputs_223 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs223States state;
} PositionInputs223;

// position_inputs_223 Initialisation function
void PositionInputs223Init(PositionInputs223* me);

// position_inputs_223 Execution function
void PositionInputs223Run(PositionInputs223* me);

#endif // POSITION_INPUTS_223_H_