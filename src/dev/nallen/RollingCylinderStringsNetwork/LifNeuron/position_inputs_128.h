#ifndef POSITION_INPUTS_128_H_
#define POSITION_INPUTS_128_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_128 States
enum PositionInputs128States {
    POSITION_INPUTS_128_INTEGRATE,
    POSITION_INPUTS_128_LIMIT,
    POSITION_INPUTS_128_SPIKE,
    POSITION_INPUTS_128_REFRACTORY,
};

// position_inputs_128 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs128States state;
} PositionInputs128;

// position_inputs_128 Initialisation function
void PositionInputs128Init(PositionInputs128* me);

// position_inputs_128 Execution function
void PositionInputs128Run(PositionInputs128* me);

#endif // POSITION_INPUTS_128_H_