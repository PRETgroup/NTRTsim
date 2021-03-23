#ifndef POSITION_INPUTS_179_H_
#define POSITION_INPUTS_179_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_179 States
enum PositionInputs179States {
    POSITION_INPUTS_179_INTEGRATE,
    POSITION_INPUTS_179_LIMIT,
    POSITION_INPUTS_179_SPIKE,
    POSITION_INPUTS_179_REFRACTORY,
};

// position_inputs_179 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs179States state;
} PositionInputs179;

// position_inputs_179 Initialisation function
void PositionInputs179Init(PositionInputs179* me);

// position_inputs_179 Execution function
void PositionInputs179Run(PositionInputs179* me);

#endif // POSITION_INPUTS_179_H_