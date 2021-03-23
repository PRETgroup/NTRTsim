#ifndef POSITION_INPUTS_41_H_
#define POSITION_INPUTS_41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_41 States
enum PositionInputs41States {
    POSITION_INPUTS_41_INTEGRATE,
    POSITION_INPUTS_41_LIMIT,
    POSITION_INPUTS_41_SPIKE,
    POSITION_INPUTS_41_REFRACTORY,
};

// position_inputs_41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs41States state;
} PositionInputs41;

// position_inputs_41 Initialisation function
void PositionInputs41Init(PositionInputs41* me);

// position_inputs_41 Execution function
void PositionInputs41Run(PositionInputs41* me);

#endif // POSITION_INPUTS_41_H_