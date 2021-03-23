#ifndef POSITION_INPUTS_397_H_
#define POSITION_INPUTS_397_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_397 States
enum PositionInputs397States {
    POSITION_INPUTS_397_INTEGRATE,
    POSITION_INPUTS_397_LIMIT,
    POSITION_INPUTS_397_SPIKE,
    POSITION_INPUTS_397_REFRACTORY,
};

// position_inputs_397 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs397States state;
} PositionInputs397;

// position_inputs_397 Initialisation function
void PositionInputs397Init(PositionInputs397* me);

// position_inputs_397 Execution function
void PositionInputs397Run(PositionInputs397* me);

#endif // POSITION_INPUTS_397_H_