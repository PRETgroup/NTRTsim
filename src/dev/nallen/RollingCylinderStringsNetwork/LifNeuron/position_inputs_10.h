#ifndef POSITION_INPUTS_10_H_
#define POSITION_INPUTS_10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_10 States
enum PositionInputs10States {
    POSITION_INPUTS_10_INTEGRATE,
    POSITION_INPUTS_10_LIMIT,
    POSITION_INPUTS_10_SPIKE,
    POSITION_INPUTS_10_REFRACTORY,
};

// position_inputs_10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs10States state;
} PositionInputs10;

// position_inputs_10 Initialisation function
void PositionInputs10Init(PositionInputs10* me);

// position_inputs_10 Execution function
void PositionInputs10Run(PositionInputs10* me);

#endif // POSITION_INPUTS_10_H_