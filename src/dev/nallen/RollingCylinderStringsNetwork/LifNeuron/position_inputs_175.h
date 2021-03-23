#ifndef POSITION_INPUTS_175_H_
#define POSITION_INPUTS_175_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_175 States
enum PositionInputs175States {
    POSITION_INPUTS_175_INTEGRATE,
    POSITION_INPUTS_175_LIMIT,
    POSITION_INPUTS_175_SPIKE,
    POSITION_INPUTS_175_REFRACTORY,
};

// position_inputs_175 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs175States state;
} PositionInputs175;

// position_inputs_175 Initialisation function
void PositionInputs175Init(PositionInputs175* me);

// position_inputs_175 Execution function
void PositionInputs175Run(PositionInputs175* me);

#endif // POSITION_INPUTS_175_H_