#ifndef POSITION_INPUTS_318_H_
#define POSITION_INPUTS_318_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_318 States
enum PositionInputs318States {
    POSITION_INPUTS_318_INTEGRATE,
    POSITION_INPUTS_318_LIMIT,
    POSITION_INPUTS_318_SPIKE,
    POSITION_INPUTS_318_REFRACTORY,
};

// position_inputs_318 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs318States state;
} PositionInputs318;

// position_inputs_318 Initialisation function
void PositionInputs318Init(PositionInputs318* me);

// position_inputs_318 Execution function
void PositionInputs318Run(PositionInputs318* me);

#endif // POSITION_INPUTS_318_H_