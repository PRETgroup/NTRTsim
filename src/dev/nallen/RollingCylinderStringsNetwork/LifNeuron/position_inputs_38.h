#ifndef POSITION_INPUTS_38_H_
#define POSITION_INPUTS_38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_38 States
enum PositionInputs38States {
    POSITION_INPUTS_38_INTEGRATE,
    POSITION_INPUTS_38_LIMIT,
    POSITION_INPUTS_38_SPIKE,
    POSITION_INPUTS_38_REFRACTORY,
};

// position_inputs_38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs38States state;
} PositionInputs38;

// position_inputs_38 Initialisation function
void PositionInputs38Init(PositionInputs38* me);

// position_inputs_38 Execution function
void PositionInputs38Run(PositionInputs38* me);

#endif // POSITION_INPUTS_38_H_