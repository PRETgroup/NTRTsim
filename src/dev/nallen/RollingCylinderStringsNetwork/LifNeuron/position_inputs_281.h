#ifndef POSITION_INPUTS_281_H_
#define POSITION_INPUTS_281_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_281 States
enum PositionInputs281States {
    POSITION_INPUTS_281_INTEGRATE,
    POSITION_INPUTS_281_LIMIT,
    POSITION_INPUTS_281_SPIKE,
    POSITION_INPUTS_281_REFRACTORY,
};

// position_inputs_281 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs281States state;
} PositionInputs281;

// position_inputs_281 Initialisation function
void PositionInputs281Init(PositionInputs281* me);

// position_inputs_281 Execution function
void PositionInputs281Run(PositionInputs281* me);

#endif // POSITION_INPUTS_281_H_