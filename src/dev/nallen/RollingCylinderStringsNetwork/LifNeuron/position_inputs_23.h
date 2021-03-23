#ifndef POSITION_INPUTS_23_H_
#define POSITION_INPUTS_23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_23 States
enum PositionInputs23States {
    POSITION_INPUTS_23_INTEGRATE,
    POSITION_INPUTS_23_LIMIT,
    POSITION_INPUTS_23_SPIKE,
    POSITION_INPUTS_23_REFRACTORY,
};

// position_inputs_23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs23States state;
} PositionInputs23;

// position_inputs_23 Initialisation function
void PositionInputs23Init(PositionInputs23* me);

// position_inputs_23 Execution function
void PositionInputs23Run(PositionInputs23* me);

#endif // POSITION_INPUTS_23_H_