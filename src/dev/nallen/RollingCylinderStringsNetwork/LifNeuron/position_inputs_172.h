#ifndef POSITION_INPUTS_172_H_
#define POSITION_INPUTS_172_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_172 States
enum PositionInputs172States {
    POSITION_INPUTS_172_INTEGRATE,
    POSITION_INPUTS_172_LIMIT,
    POSITION_INPUTS_172_SPIKE,
    POSITION_INPUTS_172_REFRACTORY,
};

// position_inputs_172 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs172States state;
} PositionInputs172;

// position_inputs_172 Initialisation function
void PositionInputs172Init(PositionInputs172* me);

// position_inputs_172 Execution function
void PositionInputs172Run(PositionInputs172* me);

#endif // POSITION_INPUTS_172_H_