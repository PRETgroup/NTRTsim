#ifndef POSITION_INPUTS_186_H_
#define POSITION_INPUTS_186_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_186 States
enum PositionInputs186States {
    POSITION_INPUTS_186_INTEGRATE,
    POSITION_INPUTS_186_LIMIT,
    POSITION_INPUTS_186_SPIKE,
    POSITION_INPUTS_186_REFRACTORY,
};

// position_inputs_186 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs186States state;
} PositionInputs186;

// position_inputs_186 Initialisation function
void PositionInputs186Init(PositionInputs186* me);

// position_inputs_186 Execution function
void PositionInputs186Run(PositionInputs186* me);

#endif // POSITION_INPUTS_186_H_