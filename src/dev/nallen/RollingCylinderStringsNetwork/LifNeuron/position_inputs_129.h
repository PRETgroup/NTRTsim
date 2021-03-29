#ifndef POSITION_INPUTS_129_H_
#define POSITION_INPUTS_129_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_129 States
enum PositionInputs129States {
    POSITION_INPUTS_129_INTEGRATE,
    POSITION_INPUTS_129_LIMIT,
    POSITION_INPUTS_129_SPIKE,
    POSITION_INPUTS_129_REFRACTORY,
};

// position_inputs_129 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs129States state;
} PositionInputs129;

// position_inputs_129 Initialisation function
void PositionInputs129Init(PositionInputs129* me);

// position_inputs_129 Execution function
void PositionInputs129Run(PositionInputs129* me);

#endif // POSITION_INPUTS_129_H_