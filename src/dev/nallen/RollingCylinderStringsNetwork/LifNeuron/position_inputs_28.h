#ifndef POSITION_INPUTS_28_H_
#define POSITION_INPUTS_28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_28 States
enum PositionInputs28States {
    POSITION_INPUTS_28_INTEGRATE,
    POSITION_INPUTS_28_LIMIT,
    POSITION_INPUTS_28_SPIKE,
    POSITION_INPUTS_28_REFRACTORY,
};

// position_inputs_28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs28States state;
} PositionInputs28;

// position_inputs_28 Initialisation function
void PositionInputs28Init(PositionInputs28* me);

// position_inputs_28 Execution function
void PositionInputs28Run(PositionInputs28* me);

#endif // POSITION_INPUTS_28_H_