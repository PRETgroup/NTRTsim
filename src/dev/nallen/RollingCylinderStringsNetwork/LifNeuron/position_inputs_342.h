#ifndef POSITION_INPUTS_342_H_
#define POSITION_INPUTS_342_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_342 States
enum PositionInputs342States {
    POSITION_INPUTS_342_INTEGRATE,
    POSITION_INPUTS_342_LIMIT,
    POSITION_INPUTS_342_SPIKE,
    POSITION_INPUTS_342_REFRACTORY,
};

// position_inputs_342 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs342States state;
} PositionInputs342;

// position_inputs_342 Initialisation function
void PositionInputs342Init(PositionInputs342* me);

// position_inputs_342 Execution function
void PositionInputs342Run(PositionInputs342* me);

#endif // POSITION_INPUTS_342_H_