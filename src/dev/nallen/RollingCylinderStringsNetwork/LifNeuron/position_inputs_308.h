#ifndef POSITION_INPUTS_308_H_
#define POSITION_INPUTS_308_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_308 States
enum PositionInputs308States {
    POSITION_INPUTS_308_INTEGRATE,
    POSITION_INPUTS_308_LIMIT,
    POSITION_INPUTS_308_SPIKE,
    POSITION_INPUTS_308_REFRACTORY,
};

// position_inputs_308 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs308States state;
} PositionInputs308;

// position_inputs_308 Initialisation function
void PositionInputs308Init(PositionInputs308* me);

// position_inputs_308 Execution function
void PositionInputs308Run(PositionInputs308* me);

#endif // POSITION_INPUTS_308_H_