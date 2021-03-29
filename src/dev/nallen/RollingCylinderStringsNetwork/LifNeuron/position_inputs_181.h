#ifndef POSITION_INPUTS_181_H_
#define POSITION_INPUTS_181_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_181 States
enum PositionInputs181States {
    POSITION_INPUTS_181_INTEGRATE,
    POSITION_INPUTS_181_LIMIT,
    POSITION_INPUTS_181_SPIKE,
    POSITION_INPUTS_181_REFRACTORY,
};

// position_inputs_181 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs181States state;
} PositionInputs181;

// position_inputs_181 Initialisation function
void PositionInputs181Init(PositionInputs181* me);

// position_inputs_181 Execution function
void PositionInputs181Run(PositionInputs181* me);

#endif // POSITION_INPUTS_181_H_