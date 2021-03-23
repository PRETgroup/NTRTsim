#ifndef POSITION_INPUTS_396_H_
#define POSITION_INPUTS_396_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_396 States
enum PositionInputs396States {
    POSITION_INPUTS_396_INTEGRATE,
    POSITION_INPUTS_396_LIMIT,
    POSITION_INPUTS_396_SPIKE,
    POSITION_INPUTS_396_REFRACTORY,
};

// position_inputs_396 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs396States state;
} PositionInputs396;

// position_inputs_396 Initialisation function
void PositionInputs396Init(PositionInputs396* me);

// position_inputs_396 Execution function
void PositionInputs396Run(PositionInputs396* me);

#endif // POSITION_INPUTS_396_H_