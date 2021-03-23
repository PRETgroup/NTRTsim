#ifndef POSITION_INPUTS_249_H_
#define POSITION_INPUTS_249_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_249 States
enum PositionInputs249States {
    POSITION_INPUTS_249_INTEGRATE,
    POSITION_INPUTS_249_LIMIT,
    POSITION_INPUTS_249_SPIKE,
    POSITION_INPUTS_249_REFRACTORY,
};

// position_inputs_249 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs249States state;
} PositionInputs249;

// position_inputs_249 Initialisation function
void PositionInputs249Init(PositionInputs249* me);

// position_inputs_249 Execution function
void PositionInputs249Run(PositionInputs249* me);

#endif // POSITION_INPUTS_249_H_