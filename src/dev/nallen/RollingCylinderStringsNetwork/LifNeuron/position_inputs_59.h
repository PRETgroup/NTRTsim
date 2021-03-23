#ifndef POSITION_INPUTS_59_H_
#define POSITION_INPUTS_59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_59 States
enum PositionInputs59States {
    POSITION_INPUTS_59_INTEGRATE,
    POSITION_INPUTS_59_LIMIT,
    POSITION_INPUTS_59_SPIKE,
    POSITION_INPUTS_59_REFRACTORY,
};

// position_inputs_59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs59States state;
} PositionInputs59;

// position_inputs_59 Initialisation function
void PositionInputs59Init(PositionInputs59* me);

// position_inputs_59 Execution function
void PositionInputs59Run(PositionInputs59* me);

#endif // POSITION_INPUTS_59_H_