#ifndef POSITION_INPUTS_57_H_
#define POSITION_INPUTS_57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_57 States
enum PositionInputs57States {
    POSITION_INPUTS_57_INTEGRATE,
    POSITION_INPUTS_57_LIMIT,
    POSITION_INPUTS_57_SPIKE,
    POSITION_INPUTS_57_REFRACTORY,
};

// position_inputs_57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs57States state;
} PositionInputs57;

// position_inputs_57 Initialisation function
void PositionInputs57Init(PositionInputs57* me);

// position_inputs_57 Execution function
void PositionInputs57Run(PositionInputs57* me);

#endif // POSITION_INPUTS_57_H_