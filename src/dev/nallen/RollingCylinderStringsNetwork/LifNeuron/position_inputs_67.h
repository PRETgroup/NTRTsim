#ifndef POSITION_INPUTS_67_H_
#define POSITION_INPUTS_67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_67 States
enum PositionInputs67States {
    POSITION_INPUTS_67_INTEGRATE,
    POSITION_INPUTS_67_LIMIT,
    POSITION_INPUTS_67_SPIKE,
    POSITION_INPUTS_67_REFRACTORY,
};

// position_inputs_67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs67States state;
} PositionInputs67;

// position_inputs_67 Initialisation function
void PositionInputs67Init(PositionInputs67* me);

// position_inputs_67 Execution function
void PositionInputs67Run(PositionInputs67* me);

#endif // POSITION_INPUTS_67_H_