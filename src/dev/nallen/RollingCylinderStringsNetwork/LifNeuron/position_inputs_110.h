#ifndef POSITION_INPUTS_110_H_
#define POSITION_INPUTS_110_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_110 States
enum PositionInputs110States {
    POSITION_INPUTS_110_INTEGRATE,
    POSITION_INPUTS_110_LIMIT,
    POSITION_INPUTS_110_SPIKE,
    POSITION_INPUTS_110_REFRACTORY,
};

// position_inputs_110 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs110States state;
} PositionInputs110;

// position_inputs_110 Initialisation function
void PositionInputs110Init(PositionInputs110* me);

// position_inputs_110 Execution function
void PositionInputs110Run(PositionInputs110* me);

#endif // POSITION_INPUTS_110_H_