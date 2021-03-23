#ifndef POSITION_INPUTS_292_H_
#define POSITION_INPUTS_292_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_292 States
enum PositionInputs292States {
    POSITION_INPUTS_292_INTEGRATE,
    POSITION_INPUTS_292_LIMIT,
    POSITION_INPUTS_292_SPIKE,
    POSITION_INPUTS_292_REFRACTORY,
};

// position_inputs_292 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs292States state;
} PositionInputs292;

// position_inputs_292 Initialisation function
void PositionInputs292Init(PositionInputs292* me);

// position_inputs_292 Execution function
void PositionInputs292Run(PositionInputs292* me);

#endif // POSITION_INPUTS_292_H_