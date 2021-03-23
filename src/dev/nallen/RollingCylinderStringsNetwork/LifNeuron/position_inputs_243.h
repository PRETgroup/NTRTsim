#ifndef POSITION_INPUTS_243_H_
#define POSITION_INPUTS_243_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_243 States
enum PositionInputs243States {
    POSITION_INPUTS_243_INTEGRATE,
    POSITION_INPUTS_243_LIMIT,
    POSITION_INPUTS_243_SPIKE,
    POSITION_INPUTS_243_REFRACTORY,
};

// position_inputs_243 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs243States state;
} PositionInputs243;

// position_inputs_243 Initialisation function
void PositionInputs243Init(PositionInputs243* me);

// position_inputs_243 Execution function
void PositionInputs243Run(PositionInputs243* me);

#endif // POSITION_INPUTS_243_H_