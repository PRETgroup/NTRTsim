#ifndef POSITION_INPUTS_224_H_
#define POSITION_INPUTS_224_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_224 States
enum PositionInputs224States {
    POSITION_INPUTS_224_INTEGRATE,
    POSITION_INPUTS_224_LIMIT,
    POSITION_INPUTS_224_SPIKE,
    POSITION_INPUTS_224_REFRACTORY,
};

// position_inputs_224 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs224States state;
} PositionInputs224;

// position_inputs_224 Initialisation function
void PositionInputs224Init(PositionInputs224* me);

// position_inputs_224 Execution function
void PositionInputs224Run(PositionInputs224* me);

#endif // POSITION_INPUTS_224_H_