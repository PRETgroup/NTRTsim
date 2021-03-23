#ifndef POSITION_INPUTS_170_H_
#define POSITION_INPUTS_170_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_170 States
enum PositionInputs170States {
    POSITION_INPUTS_170_INTEGRATE,
    POSITION_INPUTS_170_LIMIT,
    POSITION_INPUTS_170_SPIKE,
    POSITION_INPUTS_170_REFRACTORY,
};

// position_inputs_170 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs170States state;
} PositionInputs170;

// position_inputs_170 Initialisation function
void PositionInputs170Init(PositionInputs170* me);

// position_inputs_170 Execution function
void PositionInputs170Run(PositionInputs170* me);

#endif // POSITION_INPUTS_170_H_