#ifndef POSITION_INPUTS_177_H_
#define POSITION_INPUTS_177_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_177 States
enum PositionInputs177States {
    POSITION_INPUTS_177_INTEGRATE,
    POSITION_INPUTS_177_LIMIT,
    POSITION_INPUTS_177_SPIKE,
    POSITION_INPUTS_177_REFRACTORY,
};

// position_inputs_177 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs177States state;
} PositionInputs177;

// position_inputs_177 Initialisation function
void PositionInputs177Init(PositionInputs177* me);

// position_inputs_177 Execution function
void PositionInputs177Run(PositionInputs177* me);

#endif // POSITION_INPUTS_177_H_