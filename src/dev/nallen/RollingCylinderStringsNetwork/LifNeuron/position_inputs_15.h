#ifndef POSITION_INPUTS_15_H_
#define POSITION_INPUTS_15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_15 States
enum PositionInputs15States {
    POSITION_INPUTS_15_INTEGRATE,
    POSITION_INPUTS_15_LIMIT,
    POSITION_INPUTS_15_SPIKE,
    POSITION_INPUTS_15_REFRACTORY,
};

// position_inputs_15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs15States state;
} PositionInputs15;

// position_inputs_15 Initialisation function
void PositionInputs15Init(PositionInputs15* me);

// position_inputs_15 Execution function
void PositionInputs15Run(PositionInputs15* me);

#endif // POSITION_INPUTS_15_H_