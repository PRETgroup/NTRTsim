#ifndef POSITION_INPUTS_303_H_
#define POSITION_INPUTS_303_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_303 States
enum PositionInputs303States {
    POSITION_INPUTS_303_INTEGRATE,
    POSITION_INPUTS_303_LIMIT,
    POSITION_INPUTS_303_SPIKE,
    POSITION_INPUTS_303_REFRACTORY,
};

// position_inputs_303 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs303States state;
} PositionInputs303;

// position_inputs_303 Initialisation function
void PositionInputs303Init(PositionInputs303* me);

// position_inputs_303 Execution function
void PositionInputs303Run(PositionInputs303* me);

#endif // POSITION_INPUTS_303_H_