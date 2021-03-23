#ifndef POSITION_INPUTS_195_H_
#define POSITION_INPUTS_195_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_195 States
enum PositionInputs195States {
    POSITION_INPUTS_195_INTEGRATE,
    POSITION_INPUTS_195_LIMIT,
    POSITION_INPUTS_195_SPIKE,
    POSITION_INPUTS_195_REFRACTORY,
};

// position_inputs_195 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs195States state;
} PositionInputs195;

// position_inputs_195 Initialisation function
void PositionInputs195Init(PositionInputs195* me);

// position_inputs_195 Execution function
void PositionInputs195Run(PositionInputs195* me);

#endif // POSITION_INPUTS_195_H_