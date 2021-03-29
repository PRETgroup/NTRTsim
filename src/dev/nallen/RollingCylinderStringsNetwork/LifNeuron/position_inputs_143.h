#ifndef POSITION_INPUTS_143_H_
#define POSITION_INPUTS_143_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_143 States
enum PositionInputs143States {
    POSITION_INPUTS_143_INTEGRATE,
    POSITION_INPUTS_143_LIMIT,
    POSITION_INPUTS_143_SPIKE,
    POSITION_INPUTS_143_REFRACTORY,
};

// position_inputs_143 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs143States state;
} PositionInputs143;

// position_inputs_143 Initialisation function
void PositionInputs143Init(PositionInputs143* me);

// position_inputs_143 Execution function
void PositionInputs143Run(PositionInputs143* me);

#endif // POSITION_INPUTS_143_H_