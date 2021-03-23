#ifndef POSITION_INPUTS_92_H_
#define POSITION_INPUTS_92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_92 States
enum PositionInputs92States {
    POSITION_INPUTS_92_INTEGRATE,
    POSITION_INPUTS_92_LIMIT,
    POSITION_INPUTS_92_SPIKE,
    POSITION_INPUTS_92_REFRACTORY,
};

// position_inputs_92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs92States state;
} PositionInputs92;

// position_inputs_92 Initialisation function
void PositionInputs92Init(PositionInputs92* me);

// position_inputs_92 Execution function
void PositionInputs92Run(PositionInputs92* me);

#endif // POSITION_INPUTS_92_H_