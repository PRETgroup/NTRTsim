#ifndef POSITION_INPUTS_102_H_
#define POSITION_INPUTS_102_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_102 States
enum PositionInputs102States {
    POSITION_INPUTS_102_INTEGRATE,
    POSITION_INPUTS_102_LIMIT,
    POSITION_INPUTS_102_SPIKE,
    POSITION_INPUTS_102_REFRACTORY,
};

// position_inputs_102 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs102States state;
} PositionInputs102;

// position_inputs_102 Initialisation function
void PositionInputs102Init(PositionInputs102* me);

// position_inputs_102 Execution function
void PositionInputs102Run(PositionInputs102* me);

#endif // POSITION_INPUTS_102_H_