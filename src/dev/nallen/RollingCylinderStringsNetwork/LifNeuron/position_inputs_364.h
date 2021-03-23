#ifndef POSITION_INPUTS_364_H_
#define POSITION_INPUTS_364_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_364 States
enum PositionInputs364States {
    POSITION_INPUTS_364_INTEGRATE,
    POSITION_INPUTS_364_LIMIT,
    POSITION_INPUTS_364_SPIKE,
    POSITION_INPUTS_364_REFRACTORY,
};

// position_inputs_364 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs364States state;
} PositionInputs364;

// position_inputs_364 Initialisation function
void PositionInputs364Init(PositionInputs364* me);

// position_inputs_364 Execution function
void PositionInputs364Run(PositionInputs364* me);

#endif // POSITION_INPUTS_364_H_