#ifndef POSITION_INPUTS_314_H_
#define POSITION_INPUTS_314_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_314 States
enum PositionInputs314States {
    POSITION_INPUTS_314_INTEGRATE,
    POSITION_INPUTS_314_LIMIT,
    POSITION_INPUTS_314_SPIKE,
    POSITION_INPUTS_314_REFRACTORY,
};

// position_inputs_314 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs314States state;
} PositionInputs314;

// position_inputs_314 Initialisation function
void PositionInputs314Init(PositionInputs314* me);

// position_inputs_314 Execution function
void PositionInputs314Run(PositionInputs314* me);

#endif // POSITION_INPUTS_314_H_