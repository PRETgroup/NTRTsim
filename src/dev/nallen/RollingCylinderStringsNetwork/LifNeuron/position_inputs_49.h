#ifndef POSITION_INPUTS_49_H_
#define POSITION_INPUTS_49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_49 States
enum PositionInputs49States {
    POSITION_INPUTS_49_INTEGRATE,
    POSITION_INPUTS_49_LIMIT,
    POSITION_INPUTS_49_SPIKE,
    POSITION_INPUTS_49_REFRACTORY,
};

// position_inputs_49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs49States state;
} PositionInputs49;

// position_inputs_49 Initialisation function
void PositionInputs49Init(PositionInputs49* me);

// position_inputs_49 Execution function
void PositionInputs49Run(PositionInputs49* me);

#endif // POSITION_INPUTS_49_H_