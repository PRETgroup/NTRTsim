#ifndef POSITION_INPUTS_141_H_
#define POSITION_INPUTS_141_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_141 States
enum PositionInputs141States {
    POSITION_INPUTS_141_INTEGRATE,
    POSITION_INPUTS_141_LIMIT,
    POSITION_INPUTS_141_SPIKE,
    POSITION_INPUTS_141_REFRACTORY,
};

// position_inputs_141 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs141States state;
} PositionInputs141;

// position_inputs_141 Initialisation function
void PositionInputs141Init(PositionInputs141* me);

// position_inputs_141 Execution function
void PositionInputs141Run(PositionInputs141* me);

#endif // POSITION_INPUTS_141_H_