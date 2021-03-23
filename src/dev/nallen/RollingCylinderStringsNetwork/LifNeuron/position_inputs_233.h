#ifndef POSITION_INPUTS_233_H_
#define POSITION_INPUTS_233_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_233 States
enum PositionInputs233States {
    POSITION_INPUTS_233_INTEGRATE,
    POSITION_INPUTS_233_LIMIT,
    POSITION_INPUTS_233_SPIKE,
    POSITION_INPUTS_233_REFRACTORY,
};

// position_inputs_233 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs233States state;
} PositionInputs233;

// position_inputs_233 Initialisation function
void PositionInputs233Init(PositionInputs233* me);

// position_inputs_233 Execution function
void PositionInputs233Run(PositionInputs233* me);

#endif // POSITION_INPUTS_233_H_