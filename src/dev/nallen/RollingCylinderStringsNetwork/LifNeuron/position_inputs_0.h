#ifndef POSITION_INPUTS_0_H_
#define POSITION_INPUTS_0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_0 States
enum PositionInputs0States {
    POSITION_INPUTS_0_INTEGRATE,
    POSITION_INPUTS_0_LIMIT,
    POSITION_INPUTS_0_SPIKE,
    POSITION_INPUTS_0_REFRACTORY,
};

// position_inputs_0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs0States state;
} PositionInputs0;

// position_inputs_0 Initialisation function
void PositionInputs0Init(PositionInputs0* me);

// position_inputs_0 Execution function
void PositionInputs0Run(PositionInputs0* me);

#endif // POSITION_INPUTS_0_H_