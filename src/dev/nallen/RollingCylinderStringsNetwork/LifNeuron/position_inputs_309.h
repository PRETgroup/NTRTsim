#ifndef POSITION_INPUTS_309_H_
#define POSITION_INPUTS_309_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_309 States
enum PositionInputs309States {
    POSITION_INPUTS_309_INTEGRATE,
    POSITION_INPUTS_309_LIMIT,
    POSITION_INPUTS_309_SPIKE,
    POSITION_INPUTS_309_REFRACTORY,
};

// position_inputs_309 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs309States state;
} PositionInputs309;

// position_inputs_309 Initialisation function
void PositionInputs309Init(PositionInputs309* me);

// position_inputs_309 Execution function
void PositionInputs309Run(PositionInputs309* me);

#endif // POSITION_INPUTS_309_H_