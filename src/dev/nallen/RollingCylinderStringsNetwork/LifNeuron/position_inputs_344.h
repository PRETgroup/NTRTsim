#ifndef POSITION_INPUTS_344_H_
#define POSITION_INPUTS_344_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_344 States
enum PositionInputs344States {
    POSITION_INPUTS_344_INTEGRATE,
    POSITION_INPUTS_344_LIMIT,
    POSITION_INPUTS_344_SPIKE,
    POSITION_INPUTS_344_REFRACTORY,
};

// position_inputs_344 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs344States state;
} PositionInputs344;

// position_inputs_344 Initialisation function
void PositionInputs344Init(PositionInputs344* me);

// position_inputs_344 Execution function
void PositionInputs344Run(PositionInputs344* me);

#endif // POSITION_INPUTS_344_H_