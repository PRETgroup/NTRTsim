#ifndef POSITION_INPUTS_258_H_
#define POSITION_INPUTS_258_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_258 States
enum PositionInputs258States {
    POSITION_INPUTS_258_INTEGRATE,
    POSITION_INPUTS_258_LIMIT,
    POSITION_INPUTS_258_SPIKE,
    POSITION_INPUTS_258_REFRACTORY,
};

// position_inputs_258 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs258States state;
} PositionInputs258;

// position_inputs_258 Initialisation function
void PositionInputs258Init(PositionInputs258* me);

// position_inputs_258 Execution function
void PositionInputs258Run(PositionInputs258* me);

#endif // POSITION_INPUTS_258_H_