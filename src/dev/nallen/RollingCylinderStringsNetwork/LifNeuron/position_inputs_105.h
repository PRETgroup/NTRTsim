#ifndef POSITION_INPUTS_105_H_
#define POSITION_INPUTS_105_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_105 States
enum PositionInputs105States {
    POSITION_INPUTS_105_INTEGRATE,
    POSITION_INPUTS_105_LIMIT,
    POSITION_INPUTS_105_SPIKE,
    POSITION_INPUTS_105_REFRACTORY,
};

// position_inputs_105 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs105States state;
} PositionInputs105;

// position_inputs_105 Initialisation function
void PositionInputs105Init(PositionInputs105* me);

// position_inputs_105 Execution function
void PositionInputs105Run(PositionInputs105* me);

#endif // POSITION_INPUTS_105_H_