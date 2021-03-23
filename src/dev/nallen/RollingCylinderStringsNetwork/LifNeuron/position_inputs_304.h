#ifndef POSITION_INPUTS_304_H_
#define POSITION_INPUTS_304_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_304 States
enum PositionInputs304States {
    POSITION_INPUTS_304_INTEGRATE,
    POSITION_INPUTS_304_LIMIT,
    POSITION_INPUTS_304_SPIKE,
    POSITION_INPUTS_304_REFRACTORY,
};

// position_inputs_304 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs304States state;
} PositionInputs304;

// position_inputs_304 Initialisation function
void PositionInputs304Init(PositionInputs304* me);

// position_inputs_304 Execution function
void PositionInputs304Run(PositionInputs304* me);

#endif // POSITION_INPUTS_304_H_