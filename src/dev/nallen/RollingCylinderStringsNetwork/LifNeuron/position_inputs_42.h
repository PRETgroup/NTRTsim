#ifndef POSITION_INPUTS_42_H_
#define POSITION_INPUTS_42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_42 States
enum PositionInputs42States {
    POSITION_INPUTS_42_INTEGRATE,
    POSITION_INPUTS_42_LIMIT,
    POSITION_INPUTS_42_SPIKE,
    POSITION_INPUTS_42_REFRACTORY,
};

// position_inputs_42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs42States state;
} PositionInputs42;

// position_inputs_42 Initialisation function
void PositionInputs42Init(PositionInputs42* me);

// position_inputs_42 Execution function
void PositionInputs42Run(PositionInputs42* me);

#endif // POSITION_INPUTS_42_H_