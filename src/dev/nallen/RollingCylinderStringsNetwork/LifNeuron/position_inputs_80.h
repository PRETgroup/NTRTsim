#ifndef POSITION_INPUTS_80_H_
#define POSITION_INPUTS_80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_80 States
enum PositionInputs80States {
    POSITION_INPUTS_80_INTEGRATE,
    POSITION_INPUTS_80_LIMIT,
    POSITION_INPUTS_80_SPIKE,
    POSITION_INPUTS_80_REFRACTORY,
};

// position_inputs_80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs80States state;
} PositionInputs80;

// position_inputs_80 Initialisation function
void PositionInputs80Init(PositionInputs80* me);

// position_inputs_80 Execution function
void PositionInputs80Run(PositionInputs80* me);

#endif // POSITION_INPUTS_80_H_