#ifndef POSITION_INPUTS_4_H_
#define POSITION_INPUTS_4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_4 States
enum PositionInputs4States {
    POSITION_INPUTS_4_INTEGRATE,
    POSITION_INPUTS_4_LIMIT,
    POSITION_INPUTS_4_SPIKE,
    POSITION_INPUTS_4_REFRACTORY,
};

// position_inputs_4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs4States state;
} PositionInputs4;

// position_inputs_4 Initialisation function
void PositionInputs4Init(PositionInputs4* me);

// position_inputs_4 Execution function
void PositionInputs4Run(PositionInputs4* me);

#endif // POSITION_INPUTS_4_H_