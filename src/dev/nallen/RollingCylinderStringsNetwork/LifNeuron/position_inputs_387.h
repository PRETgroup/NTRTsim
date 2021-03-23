#ifndef POSITION_INPUTS_387_H_
#define POSITION_INPUTS_387_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_387 States
enum PositionInputs387States {
    POSITION_INPUTS_387_INTEGRATE,
    POSITION_INPUTS_387_LIMIT,
    POSITION_INPUTS_387_SPIKE,
    POSITION_INPUTS_387_REFRACTORY,
};

// position_inputs_387 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs387States state;
} PositionInputs387;

// position_inputs_387 Initialisation function
void PositionInputs387Init(PositionInputs387* me);

// position_inputs_387 Execution function
void PositionInputs387Run(PositionInputs387* me);

#endif // POSITION_INPUTS_387_H_