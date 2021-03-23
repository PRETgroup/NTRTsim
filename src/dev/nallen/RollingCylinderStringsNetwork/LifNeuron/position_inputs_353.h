#ifndef POSITION_INPUTS_353_H_
#define POSITION_INPUTS_353_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_353 States
enum PositionInputs353States {
    POSITION_INPUTS_353_INTEGRATE,
    POSITION_INPUTS_353_LIMIT,
    POSITION_INPUTS_353_SPIKE,
    POSITION_INPUTS_353_REFRACTORY,
};

// position_inputs_353 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs353States state;
} PositionInputs353;

// position_inputs_353 Initialisation function
void PositionInputs353Init(PositionInputs353* me);

// position_inputs_353 Execution function
void PositionInputs353Run(PositionInputs353* me);

#endif // POSITION_INPUTS_353_H_