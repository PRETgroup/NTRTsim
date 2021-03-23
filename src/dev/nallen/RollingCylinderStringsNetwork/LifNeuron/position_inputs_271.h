#ifndef POSITION_INPUTS_271_H_
#define POSITION_INPUTS_271_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_271 States
enum PositionInputs271States {
    POSITION_INPUTS_271_INTEGRATE,
    POSITION_INPUTS_271_LIMIT,
    POSITION_INPUTS_271_SPIKE,
    POSITION_INPUTS_271_REFRACTORY,
};

// position_inputs_271 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs271States state;
} PositionInputs271;

// position_inputs_271 Initialisation function
void PositionInputs271Init(PositionInputs271* me);

// position_inputs_271 Execution function
void PositionInputs271Run(PositionInputs271* me);

#endif // POSITION_INPUTS_271_H_