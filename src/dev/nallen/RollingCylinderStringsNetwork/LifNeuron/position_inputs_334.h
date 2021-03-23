#ifndef POSITION_INPUTS_334_H_
#define POSITION_INPUTS_334_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_334 States
enum PositionInputs334States {
    POSITION_INPUTS_334_INTEGRATE,
    POSITION_INPUTS_334_LIMIT,
    POSITION_INPUTS_334_SPIKE,
    POSITION_INPUTS_334_REFRACTORY,
};

// position_inputs_334 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs334States state;
} PositionInputs334;

// position_inputs_334 Initialisation function
void PositionInputs334Init(PositionInputs334* me);

// position_inputs_334 Execution function
void PositionInputs334Run(PositionInputs334* me);

#endif // POSITION_INPUTS_334_H_