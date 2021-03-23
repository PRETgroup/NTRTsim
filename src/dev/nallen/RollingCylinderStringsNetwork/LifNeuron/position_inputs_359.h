#ifndef POSITION_INPUTS_359_H_
#define POSITION_INPUTS_359_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_359 States
enum PositionInputs359States {
    POSITION_INPUTS_359_INTEGRATE,
    POSITION_INPUTS_359_LIMIT,
    POSITION_INPUTS_359_SPIKE,
    POSITION_INPUTS_359_REFRACTORY,
};

// position_inputs_359 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs359States state;
} PositionInputs359;

// position_inputs_359 Initialisation function
void PositionInputs359Init(PositionInputs359* me);

// position_inputs_359 Execution function
void PositionInputs359Run(PositionInputs359* me);

#endif // POSITION_INPUTS_359_H_