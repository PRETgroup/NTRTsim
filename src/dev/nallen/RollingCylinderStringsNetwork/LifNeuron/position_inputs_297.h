#ifndef POSITION_INPUTS_297_H_
#define POSITION_INPUTS_297_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_297 States
enum PositionInputs297States {
    POSITION_INPUTS_297_INTEGRATE,
    POSITION_INPUTS_297_LIMIT,
    POSITION_INPUTS_297_SPIKE,
    POSITION_INPUTS_297_REFRACTORY,
};

// position_inputs_297 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs297States state;
} PositionInputs297;

// position_inputs_297 Initialisation function
void PositionInputs297Init(PositionInputs297* me);

// position_inputs_297 Execution function
void PositionInputs297Run(PositionInputs297* me);

#endif // POSITION_INPUTS_297_H_