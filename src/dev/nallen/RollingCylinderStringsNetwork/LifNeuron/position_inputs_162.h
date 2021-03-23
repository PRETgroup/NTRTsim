#ifndef POSITION_INPUTS_162_H_
#define POSITION_INPUTS_162_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_162 States
enum PositionInputs162States {
    POSITION_INPUTS_162_INTEGRATE,
    POSITION_INPUTS_162_LIMIT,
    POSITION_INPUTS_162_SPIKE,
    POSITION_INPUTS_162_REFRACTORY,
};

// position_inputs_162 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs162States state;
} PositionInputs162;

// position_inputs_162 Initialisation function
void PositionInputs162Init(PositionInputs162* me);

// position_inputs_162 Execution function
void PositionInputs162Run(PositionInputs162* me);

#endif // POSITION_INPUTS_162_H_