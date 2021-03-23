#ifndef POSITION_INPUTS_328_H_
#define POSITION_INPUTS_328_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_328 States
enum PositionInputs328States {
    POSITION_INPUTS_328_INTEGRATE,
    POSITION_INPUTS_328_LIMIT,
    POSITION_INPUTS_328_SPIKE,
    POSITION_INPUTS_328_REFRACTORY,
};

// position_inputs_328 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs328States state;
} PositionInputs328;

// position_inputs_328 Initialisation function
void PositionInputs328Init(PositionInputs328* me);

// position_inputs_328 Execution function
void PositionInputs328Run(PositionInputs328* me);

#endif // POSITION_INPUTS_328_H_