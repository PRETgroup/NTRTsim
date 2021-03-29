#ifndef POSITION_INPUTS_190_H_
#define POSITION_INPUTS_190_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_190 States
enum PositionInputs190States {
    POSITION_INPUTS_190_INTEGRATE,
    POSITION_INPUTS_190_LIMIT,
    POSITION_INPUTS_190_SPIKE,
    POSITION_INPUTS_190_REFRACTORY,
};

// position_inputs_190 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs190States state;
} PositionInputs190;

// position_inputs_190 Initialisation function
void PositionInputs190Init(PositionInputs190* me);

// position_inputs_190 Execution function
void PositionInputs190Run(PositionInputs190* me);

#endif // POSITION_INPUTS_190_H_