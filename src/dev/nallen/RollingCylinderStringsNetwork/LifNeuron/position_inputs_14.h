#ifndef POSITION_INPUTS_14_H_
#define POSITION_INPUTS_14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_14 States
enum PositionInputs14States {
    POSITION_INPUTS_14_INTEGRATE,
    POSITION_INPUTS_14_LIMIT,
    POSITION_INPUTS_14_SPIKE,
    POSITION_INPUTS_14_REFRACTORY,
};

// position_inputs_14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs14States state;
} PositionInputs14;

// position_inputs_14 Initialisation function
void PositionInputs14Init(PositionInputs14* me);

// position_inputs_14 Execution function
void PositionInputs14Run(PositionInputs14* me);

#endif // POSITION_INPUTS_14_H_