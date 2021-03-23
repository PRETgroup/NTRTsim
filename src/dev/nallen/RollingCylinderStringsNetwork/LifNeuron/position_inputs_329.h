#ifndef POSITION_INPUTS_329_H_
#define POSITION_INPUTS_329_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_329 States
enum PositionInputs329States {
    POSITION_INPUTS_329_INTEGRATE,
    POSITION_INPUTS_329_LIMIT,
    POSITION_INPUTS_329_SPIKE,
    POSITION_INPUTS_329_REFRACTORY,
};

// position_inputs_329 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs329States state;
} PositionInputs329;

// position_inputs_329 Initialisation function
void PositionInputs329Init(PositionInputs329* me);

// position_inputs_329 Execution function
void PositionInputs329Run(PositionInputs329* me);

#endif // POSITION_INPUTS_329_H_