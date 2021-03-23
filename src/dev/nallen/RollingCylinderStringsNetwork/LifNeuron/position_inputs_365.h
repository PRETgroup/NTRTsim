#ifndef POSITION_INPUTS_365_H_
#define POSITION_INPUTS_365_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_365 States
enum PositionInputs365States {
    POSITION_INPUTS_365_INTEGRATE,
    POSITION_INPUTS_365_LIMIT,
    POSITION_INPUTS_365_SPIKE,
    POSITION_INPUTS_365_REFRACTORY,
};

// position_inputs_365 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs365States state;
} PositionInputs365;

// position_inputs_365 Initialisation function
void PositionInputs365Init(PositionInputs365* me);

// position_inputs_365 Execution function
void PositionInputs365Run(PositionInputs365* me);

#endif // POSITION_INPUTS_365_H_