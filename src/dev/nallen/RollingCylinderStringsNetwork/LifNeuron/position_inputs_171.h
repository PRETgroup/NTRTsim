#ifndef POSITION_INPUTS_171_H_
#define POSITION_INPUTS_171_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_171 States
enum PositionInputs171States {
    POSITION_INPUTS_171_INTEGRATE,
    POSITION_INPUTS_171_LIMIT,
    POSITION_INPUTS_171_SPIKE,
    POSITION_INPUTS_171_REFRACTORY,
};

// position_inputs_171 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs171States state;
} PositionInputs171;

// position_inputs_171 Initialisation function
void PositionInputs171Init(PositionInputs171* me);

// position_inputs_171 Execution function
void PositionInputs171Run(PositionInputs171* me);

#endif // POSITION_INPUTS_171_H_