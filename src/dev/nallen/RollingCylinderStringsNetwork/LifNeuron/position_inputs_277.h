#ifndef POSITION_INPUTS_277_H_
#define POSITION_INPUTS_277_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_277 States
enum PositionInputs277States {
    POSITION_INPUTS_277_INTEGRATE,
    POSITION_INPUTS_277_LIMIT,
    POSITION_INPUTS_277_SPIKE,
    POSITION_INPUTS_277_REFRACTORY,
};

// position_inputs_277 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs277States state;
} PositionInputs277;

// position_inputs_277 Initialisation function
void PositionInputs277Init(PositionInputs277* me);

// position_inputs_277 Execution function
void PositionInputs277Run(PositionInputs277* me);

#endif // POSITION_INPUTS_277_H_