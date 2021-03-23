#ifndef POSITION_INPUTS_5_H_
#define POSITION_INPUTS_5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_5 States
enum PositionInputs5States {
    POSITION_INPUTS_5_INTEGRATE,
    POSITION_INPUTS_5_LIMIT,
    POSITION_INPUTS_5_SPIKE,
    POSITION_INPUTS_5_REFRACTORY,
};

// position_inputs_5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs5States state;
} PositionInputs5;

// position_inputs_5 Initialisation function
void PositionInputs5Init(PositionInputs5* me);

// position_inputs_5 Execution function
void PositionInputs5Run(PositionInputs5* me);

#endif // POSITION_INPUTS_5_H_