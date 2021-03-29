#ifndef POSITION_INPUTS_178_H_
#define POSITION_INPUTS_178_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_178 States
enum PositionInputs178States {
    POSITION_INPUTS_178_INTEGRATE,
    POSITION_INPUTS_178_LIMIT,
    POSITION_INPUTS_178_SPIKE,
    POSITION_INPUTS_178_REFRACTORY,
};

// position_inputs_178 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs178States state;
} PositionInputs178;

// position_inputs_178 Initialisation function
void PositionInputs178Init(PositionInputs178* me);

// position_inputs_178 Execution function
void PositionInputs178Run(PositionInputs178* me);

#endif // POSITION_INPUTS_178_H_