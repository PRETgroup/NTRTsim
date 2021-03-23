#ifndef POSITION_INPUTS_83_H_
#define POSITION_INPUTS_83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_83 States
enum PositionInputs83States {
    POSITION_INPUTS_83_INTEGRATE,
    POSITION_INPUTS_83_LIMIT,
    POSITION_INPUTS_83_SPIKE,
    POSITION_INPUTS_83_REFRACTORY,
};

// position_inputs_83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs83States state;
} PositionInputs83;

// position_inputs_83 Initialisation function
void PositionInputs83Init(PositionInputs83* me);

// position_inputs_83 Execution function
void PositionInputs83Run(PositionInputs83* me);

#endif // POSITION_INPUTS_83_H_