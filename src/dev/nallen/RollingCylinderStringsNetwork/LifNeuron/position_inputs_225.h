#ifndef POSITION_INPUTS_225_H_
#define POSITION_INPUTS_225_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_225 States
enum PositionInputs225States {
    POSITION_INPUTS_225_INTEGRATE,
    POSITION_INPUTS_225_LIMIT,
    POSITION_INPUTS_225_SPIKE,
    POSITION_INPUTS_225_REFRACTORY,
};

// position_inputs_225 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs225States state;
} PositionInputs225;

// position_inputs_225 Initialisation function
void PositionInputs225Init(PositionInputs225* me);

// position_inputs_225 Execution function
void PositionInputs225Run(PositionInputs225* me);

#endif // POSITION_INPUTS_225_H_