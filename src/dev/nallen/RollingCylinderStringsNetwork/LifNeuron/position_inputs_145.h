#ifndef POSITION_INPUTS_145_H_
#define POSITION_INPUTS_145_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_145 States
enum PositionInputs145States {
    POSITION_INPUTS_145_INTEGRATE,
    POSITION_INPUTS_145_LIMIT,
    POSITION_INPUTS_145_SPIKE,
    POSITION_INPUTS_145_REFRACTORY,
};

// position_inputs_145 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs145States state;
} PositionInputs145;

// position_inputs_145 Initialisation function
void PositionInputs145Init(PositionInputs145* me);

// position_inputs_145 Execution function
void PositionInputs145Run(PositionInputs145* me);

#endif // POSITION_INPUTS_145_H_