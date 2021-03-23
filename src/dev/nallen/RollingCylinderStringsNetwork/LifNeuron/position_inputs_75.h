#ifndef POSITION_INPUTS_75_H_
#define POSITION_INPUTS_75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_75 States
enum PositionInputs75States {
    POSITION_INPUTS_75_INTEGRATE,
    POSITION_INPUTS_75_LIMIT,
    POSITION_INPUTS_75_SPIKE,
    POSITION_INPUTS_75_REFRACTORY,
};

// position_inputs_75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs75States state;
} PositionInputs75;

// position_inputs_75 Initialisation function
void PositionInputs75Init(PositionInputs75* me);

// position_inputs_75 Execution function
void PositionInputs75Run(PositionInputs75* me);

#endif // POSITION_INPUTS_75_H_