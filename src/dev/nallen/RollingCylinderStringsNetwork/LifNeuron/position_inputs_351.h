#ifndef POSITION_INPUTS_351_H_
#define POSITION_INPUTS_351_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_351 States
enum PositionInputs351States {
    POSITION_INPUTS_351_INTEGRATE,
    POSITION_INPUTS_351_LIMIT,
    POSITION_INPUTS_351_SPIKE,
    POSITION_INPUTS_351_REFRACTORY,
};

// position_inputs_351 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs351States state;
} PositionInputs351;

// position_inputs_351 Initialisation function
void PositionInputs351Init(PositionInputs351* me);

// position_inputs_351 Execution function
void PositionInputs351Run(PositionInputs351* me);

#endif // POSITION_INPUTS_351_H_