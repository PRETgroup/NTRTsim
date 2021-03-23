#ifndef POSITION_INPUTS_58_H_
#define POSITION_INPUTS_58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_58 States
enum PositionInputs58States {
    POSITION_INPUTS_58_INTEGRATE,
    POSITION_INPUTS_58_LIMIT,
    POSITION_INPUTS_58_SPIKE,
    POSITION_INPUTS_58_REFRACTORY,
};

// position_inputs_58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs58States state;
} PositionInputs58;

// position_inputs_58 Initialisation function
void PositionInputs58Init(PositionInputs58* me);

// position_inputs_58 Execution function
void PositionInputs58Run(PositionInputs58* me);

#endif // POSITION_INPUTS_58_H_