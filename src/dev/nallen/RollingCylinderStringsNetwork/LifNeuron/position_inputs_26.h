#ifndef POSITION_INPUTS_26_H_
#define POSITION_INPUTS_26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_26 States
enum PositionInputs26States {
    POSITION_INPUTS_26_INTEGRATE,
    POSITION_INPUTS_26_LIMIT,
    POSITION_INPUTS_26_SPIKE,
    POSITION_INPUTS_26_REFRACTORY,
};

// position_inputs_26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs26States state;
} PositionInputs26;

// position_inputs_26 Initialisation function
void PositionInputs26Init(PositionInputs26* me);

// position_inputs_26 Execution function
void PositionInputs26Run(PositionInputs26* me);

#endif // POSITION_INPUTS_26_H_