#ifndef POSITION_INPUTS_226_H_
#define POSITION_INPUTS_226_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_226 States
enum PositionInputs226States {
    POSITION_INPUTS_226_INTEGRATE,
    POSITION_INPUTS_226_LIMIT,
    POSITION_INPUTS_226_SPIKE,
    POSITION_INPUTS_226_REFRACTORY,
};

// position_inputs_226 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs226States state;
} PositionInputs226;

// position_inputs_226 Initialisation function
void PositionInputs226Init(PositionInputs226* me);

// position_inputs_226 Execution function
void PositionInputs226Run(PositionInputs226* me);

#endif // POSITION_INPUTS_226_H_