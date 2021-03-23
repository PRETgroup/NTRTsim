#ifndef POSITION_INPUTS_289_H_
#define POSITION_INPUTS_289_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_289 States
enum PositionInputs289States {
    POSITION_INPUTS_289_INTEGRATE,
    POSITION_INPUTS_289_LIMIT,
    POSITION_INPUTS_289_SPIKE,
    POSITION_INPUTS_289_REFRACTORY,
};

// position_inputs_289 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs289States state;
} PositionInputs289;

// position_inputs_289 Initialisation function
void PositionInputs289Init(PositionInputs289* me);

// position_inputs_289 Execution function
void PositionInputs289Run(PositionInputs289* me);

#endif // POSITION_INPUTS_289_H_