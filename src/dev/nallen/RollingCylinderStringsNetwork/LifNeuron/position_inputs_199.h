#ifndef POSITION_INPUTS_199_H_
#define POSITION_INPUTS_199_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_199 States
enum PositionInputs199States {
    POSITION_INPUTS_199_INTEGRATE,
    POSITION_INPUTS_199_LIMIT,
    POSITION_INPUTS_199_SPIKE,
    POSITION_INPUTS_199_REFRACTORY,
};

// position_inputs_199 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs199States state;
} PositionInputs199;

// position_inputs_199 Initialisation function
void PositionInputs199Init(PositionInputs199* me);

// position_inputs_199 Execution function
void PositionInputs199Run(PositionInputs199* me);

#endif // POSITION_INPUTS_199_H_