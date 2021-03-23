#ifndef POSITION_INPUTS_298_H_
#define POSITION_INPUTS_298_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_298 States
enum PositionInputs298States {
    POSITION_INPUTS_298_INTEGRATE,
    POSITION_INPUTS_298_LIMIT,
    POSITION_INPUTS_298_SPIKE,
    POSITION_INPUTS_298_REFRACTORY,
};

// position_inputs_298 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs298States state;
} PositionInputs298;

// position_inputs_298 Initialisation function
void PositionInputs298Init(PositionInputs298* me);

// position_inputs_298 Execution function
void PositionInputs298Run(PositionInputs298* me);

#endif // POSITION_INPUTS_298_H_