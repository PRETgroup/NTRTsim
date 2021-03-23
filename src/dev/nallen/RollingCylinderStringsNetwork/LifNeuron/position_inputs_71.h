#ifndef POSITION_INPUTS_71_H_
#define POSITION_INPUTS_71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_71 States
enum PositionInputs71States {
    POSITION_INPUTS_71_INTEGRATE,
    POSITION_INPUTS_71_LIMIT,
    POSITION_INPUTS_71_SPIKE,
    POSITION_INPUTS_71_REFRACTORY,
};

// position_inputs_71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs71States state;
} PositionInputs71;

// position_inputs_71 Initialisation function
void PositionInputs71Init(PositionInputs71* me);

// position_inputs_71 Execution function
void PositionInputs71Run(PositionInputs71* me);

#endif // POSITION_INPUTS_71_H_