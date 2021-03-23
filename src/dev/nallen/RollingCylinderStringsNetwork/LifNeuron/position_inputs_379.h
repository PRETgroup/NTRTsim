#ifndef POSITION_INPUTS_379_H_
#define POSITION_INPUTS_379_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_379 States
enum PositionInputs379States {
    POSITION_INPUTS_379_INTEGRATE,
    POSITION_INPUTS_379_LIMIT,
    POSITION_INPUTS_379_SPIKE,
    POSITION_INPUTS_379_REFRACTORY,
};

// position_inputs_379 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs379States state;
} PositionInputs379;

// position_inputs_379 Initialisation function
void PositionInputs379Init(PositionInputs379* me);

// position_inputs_379 Execution function
void PositionInputs379Run(PositionInputs379* me);

#endif // POSITION_INPUTS_379_H_