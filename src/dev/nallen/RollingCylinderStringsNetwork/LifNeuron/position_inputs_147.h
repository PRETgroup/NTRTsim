#ifndef POSITION_INPUTS_147_H_
#define POSITION_INPUTS_147_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_147 States
enum PositionInputs147States {
    POSITION_INPUTS_147_INTEGRATE,
    POSITION_INPUTS_147_LIMIT,
    POSITION_INPUTS_147_SPIKE,
    POSITION_INPUTS_147_REFRACTORY,
};

// position_inputs_147 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs147States state;
} PositionInputs147;

// position_inputs_147 Initialisation function
void PositionInputs147Init(PositionInputs147* me);

// position_inputs_147 Execution function
void PositionInputs147Run(PositionInputs147* me);

#endif // POSITION_INPUTS_147_H_