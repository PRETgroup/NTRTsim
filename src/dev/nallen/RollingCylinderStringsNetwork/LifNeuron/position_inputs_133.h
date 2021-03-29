#ifndef POSITION_INPUTS_133_H_
#define POSITION_INPUTS_133_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_133 States
enum PositionInputs133States {
    POSITION_INPUTS_133_INTEGRATE,
    POSITION_INPUTS_133_LIMIT,
    POSITION_INPUTS_133_SPIKE,
    POSITION_INPUTS_133_REFRACTORY,
};

// position_inputs_133 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs133States state;
} PositionInputs133;

// position_inputs_133 Initialisation function
void PositionInputs133Init(PositionInputs133* me);

// position_inputs_133 Execution function
void PositionInputs133Run(PositionInputs133* me);

#endif // POSITION_INPUTS_133_H_