#ifndef POSITION_INPUTS_50_H_
#define POSITION_INPUTS_50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_50 States
enum PositionInputs50States {
    POSITION_INPUTS_50_INTEGRATE,
    POSITION_INPUTS_50_LIMIT,
    POSITION_INPUTS_50_SPIKE,
    POSITION_INPUTS_50_REFRACTORY,
};

// position_inputs_50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs50States state;
} PositionInputs50;

// position_inputs_50 Initialisation function
void PositionInputs50Init(PositionInputs50* me);

// position_inputs_50 Execution function
void PositionInputs50Run(PositionInputs50* me);

#endif // POSITION_INPUTS_50_H_