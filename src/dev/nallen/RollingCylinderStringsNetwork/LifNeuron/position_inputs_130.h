#ifndef POSITION_INPUTS_130_H_
#define POSITION_INPUTS_130_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_130 States
enum PositionInputs130States {
    POSITION_INPUTS_130_INTEGRATE,
    POSITION_INPUTS_130_LIMIT,
    POSITION_INPUTS_130_SPIKE,
    POSITION_INPUTS_130_REFRACTORY,
};

// position_inputs_130 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs130States state;
} PositionInputs130;

// position_inputs_130 Initialisation function
void PositionInputs130Init(PositionInputs130* me);

// position_inputs_130 Execution function
void PositionInputs130Run(PositionInputs130* me);

#endif // POSITION_INPUTS_130_H_