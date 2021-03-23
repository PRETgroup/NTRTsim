#ifndef POSITION_INPUTS_283_H_
#define POSITION_INPUTS_283_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_283 States
enum PositionInputs283States {
    POSITION_INPUTS_283_INTEGRATE,
    POSITION_INPUTS_283_LIMIT,
    POSITION_INPUTS_283_SPIKE,
    POSITION_INPUTS_283_REFRACTORY,
};

// position_inputs_283 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs283States state;
} PositionInputs283;

// position_inputs_283 Initialisation function
void PositionInputs283Init(PositionInputs283* me);

// position_inputs_283 Execution function
void PositionInputs283Run(PositionInputs283* me);

#endif // POSITION_INPUTS_283_H_