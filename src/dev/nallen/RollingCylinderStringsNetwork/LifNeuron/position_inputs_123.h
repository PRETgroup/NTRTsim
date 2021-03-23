#ifndef POSITION_INPUTS_123_H_
#define POSITION_INPUTS_123_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_123 States
enum PositionInputs123States {
    POSITION_INPUTS_123_INTEGRATE,
    POSITION_INPUTS_123_LIMIT,
    POSITION_INPUTS_123_SPIKE,
    POSITION_INPUTS_123_REFRACTORY,
};

// position_inputs_123 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs123States state;
} PositionInputs123;

// position_inputs_123 Initialisation function
void PositionInputs123Init(PositionInputs123* me);

// position_inputs_123 Execution function
void PositionInputs123Run(PositionInputs123* me);

#endif // POSITION_INPUTS_123_H_