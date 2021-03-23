#ifndef POSITION_INPUTS_126_H_
#define POSITION_INPUTS_126_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_126 States
enum PositionInputs126States {
    POSITION_INPUTS_126_INTEGRATE,
    POSITION_INPUTS_126_LIMIT,
    POSITION_INPUTS_126_SPIKE,
    POSITION_INPUTS_126_REFRACTORY,
};

// position_inputs_126 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs126States state;
} PositionInputs126;

// position_inputs_126 Initialisation function
void PositionInputs126Init(PositionInputs126* me);

// position_inputs_126 Execution function
void PositionInputs126Run(PositionInputs126* me);

#endif // POSITION_INPUTS_126_H_