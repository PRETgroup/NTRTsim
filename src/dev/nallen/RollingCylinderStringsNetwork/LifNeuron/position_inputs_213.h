#ifndef POSITION_INPUTS_213_H_
#define POSITION_INPUTS_213_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_213 States
enum PositionInputs213States {
    POSITION_INPUTS_213_INTEGRATE,
    POSITION_INPUTS_213_LIMIT,
    POSITION_INPUTS_213_SPIKE,
    POSITION_INPUTS_213_REFRACTORY,
};

// position_inputs_213 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs213States state;
} PositionInputs213;

// position_inputs_213 Initialisation function
void PositionInputs213Init(PositionInputs213* me);

// position_inputs_213 Execution function
void PositionInputs213Run(PositionInputs213* me);

#endif // POSITION_INPUTS_213_H_