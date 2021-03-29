#ifndef POSITION_INPUTS_159_H_
#define POSITION_INPUTS_159_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_159 States
enum PositionInputs159States {
    POSITION_INPUTS_159_INTEGRATE,
    POSITION_INPUTS_159_LIMIT,
    POSITION_INPUTS_159_SPIKE,
    POSITION_INPUTS_159_REFRACTORY,
};

// position_inputs_159 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs159States state;
} PositionInputs159;

// position_inputs_159 Initialisation function
void PositionInputs159Init(PositionInputs159* me);

// position_inputs_159 Execution function
void PositionInputs159Run(PositionInputs159* me);

#endif // POSITION_INPUTS_159_H_