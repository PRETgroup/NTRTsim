#ifndef POSITION_INPUTS_268_H_
#define POSITION_INPUTS_268_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_268 States
enum PositionInputs268States {
    POSITION_INPUTS_268_INTEGRATE,
    POSITION_INPUTS_268_LIMIT,
    POSITION_INPUTS_268_SPIKE,
    POSITION_INPUTS_268_REFRACTORY,
};

// position_inputs_268 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs268States state;
} PositionInputs268;

// position_inputs_268 Initialisation function
void PositionInputs268Init(PositionInputs268* me);

// position_inputs_268 Execution function
void PositionInputs268Run(PositionInputs268* me);

#endif // POSITION_INPUTS_268_H_