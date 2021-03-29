#ifndef POSITION_INPUTS_165_H_
#define POSITION_INPUTS_165_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_165 States
enum PositionInputs165States {
    POSITION_INPUTS_165_INTEGRATE,
    POSITION_INPUTS_165_LIMIT,
    POSITION_INPUTS_165_SPIKE,
    POSITION_INPUTS_165_REFRACTORY,
};

// position_inputs_165 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs165States state;
} PositionInputs165;

// position_inputs_165 Initialisation function
void PositionInputs165Init(PositionInputs165* me);

// position_inputs_165 Execution function
void PositionInputs165Run(PositionInputs165* me);

#endif // POSITION_INPUTS_165_H_