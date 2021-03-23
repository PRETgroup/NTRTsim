#ifndef POSITION_INPUTS_231_H_
#define POSITION_INPUTS_231_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_231 States
enum PositionInputs231States {
    POSITION_INPUTS_231_INTEGRATE,
    POSITION_INPUTS_231_LIMIT,
    POSITION_INPUTS_231_SPIKE,
    POSITION_INPUTS_231_REFRACTORY,
};

// position_inputs_231 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs231States state;
} PositionInputs231;

// position_inputs_231 Initialisation function
void PositionInputs231Init(PositionInputs231* me);

// position_inputs_231 Execution function
void PositionInputs231Run(PositionInputs231* me);

#endif // POSITION_INPUTS_231_H_