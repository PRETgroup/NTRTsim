#ifndef POSITION_INPUTS_3_H_
#define POSITION_INPUTS_3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_3 States
enum PositionInputs3States {
    POSITION_INPUTS_3_INTEGRATE,
    POSITION_INPUTS_3_LIMIT,
    POSITION_INPUTS_3_SPIKE,
    POSITION_INPUTS_3_REFRACTORY,
};

// position_inputs_3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs3States state;
} PositionInputs3;

// position_inputs_3 Initialisation function
void PositionInputs3Init(PositionInputs3* me);

// position_inputs_3 Execution function
void PositionInputs3Run(PositionInputs3* me);

#endif // POSITION_INPUTS_3_H_