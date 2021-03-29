#ifndef POSITION_INPUTS_189_H_
#define POSITION_INPUTS_189_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_189 States
enum PositionInputs189States {
    POSITION_INPUTS_189_INTEGRATE,
    POSITION_INPUTS_189_LIMIT,
    POSITION_INPUTS_189_SPIKE,
    POSITION_INPUTS_189_REFRACTORY,
};

// position_inputs_189 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs189States state;
} PositionInputs189;

// position_inputs_189 Initialisation function
void PositionInputs189Init(PositionInputs189* me);

// position_inputs_189 Execution function
void PositionInputs189Run(PositionInputs189* me);

#endif // POSITION_INPUTS_189_H_