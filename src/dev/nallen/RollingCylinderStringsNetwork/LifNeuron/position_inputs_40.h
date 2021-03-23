#ifndef POSITION_INPUTS_40_H_
#define POSITION_INPUTS_40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_40 States
enum PositionInputs40States {
    POSITION_INPUTS_40_INTEGRATE,
    POSITION_INPUTS_40_LIMIT,
    POSITION_INPUTS_40_SPIKE,
    POSITION_INPUTS_40_REFRACTORY,
};

// position_inputs_40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs40States state;
} PositionInputs40;

// position_inputs_40 Initialisation function
void PositionInputs40Init(PositionInputs40* me);

// position_inputs_40 Execution function
void PositionInputs40Run(PositionInputs40* me);

#endif // POSITION_INPUTS_40_H_