#ifndef POSITION_INPUTS_317_H_
#define POSITION_INPUTS_317_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_317 States
enum PositionInputs317States {
    POSITION_INPUTS_317_INTEGRATE,
    POSITION_INPUTS_317_LIMIT,
    POSITION_INPUTS_317_SPIKE,
    POSITION_INPUTS_317_REFRACTORY,
};

// position_inputs_317 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs317States state;
} PositionInputs317;

// position_inputs_317 Initialisation function
void PositionInputs317Init(PositionInputs317* me);

// position_inputs_317 Execution function
void PositionInputs317Run(PositionInputs317* me);

#endif // POSITION_INPUTS_317_H_