#ifndef POSITION_INPUTS_157_H_
#define POSITION_INPUTS_157_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_157 States
enum PositionInputs157States {
    POSITION_INPUTS_157_INTEGRATE,
    POSITION_INPUTS_157_LIMIT,
    POSITION_INPUTS_157_SPIKE,
    POSITION_INPUTS_157_REFRACTORY,
};

// position_inputs_157 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs157States state;
} PositionInputs157;

// position_inputs_157 Initialisation function
void PositionInputs157Init(PositionInputs157* me);

// position_inputs_157 Execution function
void PositionInputs157Run(PositionInputs157* me);

#endif // POSITION_INPUTS_157_H_