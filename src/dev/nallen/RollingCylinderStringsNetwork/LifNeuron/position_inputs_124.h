#ifndef POSITION_INPUTS_124_H_
#define POSITION_INPUTS_124_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_124 States
enum PositionInputs124States {
    POSITION_INPUTS_124_INTEGRATE,
    POSITION_INPUTS_124_LIMIT,
    POSITION_INPUTS_124_SPIKE,
    POSITION_INPUTS_124_REFRACTORY,
};

// position_inputs_124 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs124States state;
} PositionInputs124;

// position_inputs_124 Initialisation function
void PositionInputs124Init(PositionInputs124* me);

// position_inputs_124 Execution function
void PositionInputs124Run(PositionInputs124* me);

#endif // POSITION_INPUTS_124_H_