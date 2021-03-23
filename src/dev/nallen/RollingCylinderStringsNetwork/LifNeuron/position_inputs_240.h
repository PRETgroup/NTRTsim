#ifndef POSITION_INPUTS_240_H_
#define POSITION_INPUTS_240_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_240 States
enum PositionInputs240States {
    POSITION_INPUTS_240_INTEGRATE,
    POSITION_INPUTS_240_LIMIT,
    POSITION_INPUTS_240_SPIKE,
    POSITION_INPUTS_240_REFRACTORY,
};

// position_inputs_240 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs240States state;
} PositionInputs240;

// position_inputs_240 Initialisation function
void PositionInputs240Init(PositionInputs240* me);

// position_inputs_240 Execution function
void PositionInputs240Run(PositionInputs240* me);

#endif // POSITION_INPUTS_240_H_