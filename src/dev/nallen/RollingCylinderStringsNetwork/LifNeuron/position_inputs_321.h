#ifndef POSITION_INPUTS_321_H_
#define POSITION_INPUTS_321_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_321 States
enum PositionInputs321States {
    POSITION_INPUTS_321_INTEGRATE,
    POSITION_INPUTS_321_LIMIT,
    POSITION_INPUTS_321_SPIKE,
    POSITION_INPUTS_321_REFRACTORY,
};

// position_inputs_321 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs321States state;
} PositionInputs321;

// position_inputs_321 Initialisation function
void PositionInputs321Init(PositionInputs321* me);

// position_inputs_321 Execution function
void PositionInputs321Run(PositionInputs321* me);

#endif // POSITION_INPUTS_321_H_