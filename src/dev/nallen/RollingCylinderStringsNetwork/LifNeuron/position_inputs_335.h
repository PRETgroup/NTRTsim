#ifndef POSITION_INPUTS_335_H_
#define POSITION_INPUTS_335_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_335 States
enum PositionInputs335States {
    POSITION_INPUTS_335_INTEGRATE,
    POSITION_INPUTS_335_LIMIT,
    POSITION_INPUTS_335_SPIKE,
    POSITION_INPUTS_335_REFRACTORY,
};

// position_inputs_335 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs335States state;
} PositionInputs335;

// position_inputs_335 Initialisation function
void PositionInputs335Init(PositionInputs335* me);

// position_inputs_335 Execution function
void PositionInputs335Run(PositionInputs335* me);

#endif // POSITION_INPUTS_335_H_