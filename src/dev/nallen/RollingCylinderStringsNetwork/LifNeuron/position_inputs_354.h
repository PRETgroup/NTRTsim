#ifndef POSITION_INPUTS_354_H_
#define POSITION_INPUTS_354_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_354 States
enum PositionInputs354States {
    POSITION_INPUTS_354_INTEGRATE,
    POSITION_INPUTS_354_LIMIT,
    POSITION_INPUTS_354_SPIKE,
    POSITION_INPUTS_354_REFRACTORY,
};

// position_inputs_354 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs354States state;
} PositionInputs354;

// position_inputs_354 Initialisation function
void PositionInputs354Init(PositionInputs354* me);

// position_inputs_354 Execution function
void PositionInputs354Run(PositionInputs354* me);

#endif // POSITION_INPUTS_354_H_