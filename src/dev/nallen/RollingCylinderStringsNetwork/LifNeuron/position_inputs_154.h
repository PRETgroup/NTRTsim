#ifndef POSITION_INPUTS_154_H_
#define POSITION_INPUTS_154_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_154 States
enum PositionInputs154States {
    POSITION_INPUTS_154_INTEGRATE,
    POSITION_INPUTS_154_LIMIT,
    POSITION_INPUTS_154_SPIKE,
    POSITION_INPUTS_154_REFRACTORY,
};

// position_inputs_154 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs154States state;
} PositionInputs154;

// position_inputs_154 Initialisation function
void PositionInputs154Init(PositionInputs154* me);

// position_inputs_154 Execution function
void PositionInputs154Run(PositionInputs154* me);

#endif // POSITION_INPUTS_154_H_