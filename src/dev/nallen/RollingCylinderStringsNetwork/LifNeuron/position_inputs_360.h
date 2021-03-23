#ifndef POSITION_INPUTS_360_H_
#define POSITION_INPUTS_360_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_360 States
enum PositionInputs360States {
    POSITION_INPUTS_360_INTEGRATE,
    POSITION_INPUTS_360_LIMIT,
    POSITION_INPUTS_360_SPIKE,
    POSITION_INPUTS_360_REFRACTORY,
};

// position_inputs_360 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs360States state;
} PositionInputs360;

// position_inputs_360 Initialisation function
void PositionInputs360Init(PositionInputs360* me);

// position_inputs_360 Execution function
void PositionInputs360Run(PositionInputs360* me);

#endif // POSITION_INPUTS_360_H_