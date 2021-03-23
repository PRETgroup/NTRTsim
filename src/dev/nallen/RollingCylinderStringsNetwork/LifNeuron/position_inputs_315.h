#ifndef POSITION_INPUTS_315_H_
#define POSITION_INPUTS_315_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_315 States
enum PositionInputs315States {
    POSITION_INPUTS_315_INTEGRATE,
    POSITION_INPUTS_315_LIMIT,
    POSITION_INPUTS_315_SPIKE,
    POSITION_INPUTS_315_REFRACTORY,
};

// position_inputs_315 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs315States state;
} PositionInputs315;

// position_inputs_315 Initialisation function
void PositionInputs315Init(PositionInputs315* me);

// position_inputs_315 Execution function
void PositionInputs315Run(PositionInputs315* me);

#endif // POSITION_INPUTS_315_H_