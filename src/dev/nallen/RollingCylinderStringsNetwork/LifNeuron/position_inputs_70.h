#ifndef POSITION_INPUTS_70_H_
#define POSITION_INPUTS_70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_70 States
enum PositionInputs70States {
    POSITION_INPUTS_70_INTEGRATE,
    POSITION_INPUTS_70_LIMIT,
    POSITION_INPUTS_70_SPIKE,
    POSITION_INPUTS_70_REFRACTORY,
};

// position_inputs_70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs70States state;
} PositionInputs70;

// position_inputs_70 Initialisation function
void PositionInputs70Init(PositionInputs70* me);

// position_inputs_70 Execution function
void PositionInputs70Run(PositionInputs70* me);

#endif // POSITION_INPUTS_70_H_