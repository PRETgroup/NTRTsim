#ifndef POSITION_INPUTS_37_H_
#define POSITION_INPUTS_37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_37 States
enum PositionInputs37States {
    POSITION_INPUTS_37_INTEGRATE,
    POSITION_INPUTS_37_LIMIT,
    POSITION_INPUTS_37_SPIKE,
    POSITION_INPUTS_37_REFRACTORY,
};

// position_inputs_37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs37States state;
} PositionInputs37;

// position_inputs_37 Initialisation function
void PositionInputs37Init(PositionInputs37* me);

// position_inputs_37 Execution function
void PositionInputs37Run(PositionInputs37* me);

#endif // POSITION_INPUTS_37_H_