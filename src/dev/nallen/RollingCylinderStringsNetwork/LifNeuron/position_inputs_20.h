#ifndef POSITION_INPUTS_20_H_
#define POSITION_INPUTS_20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_20 States
enum PositionInputs20States {
    POSITION_INPUTS_20_INTEGRATE,
    POSITION_INPUTS_20_LIMIT,
    POSITION_INPUTS_20_SPIKE,
    POSITION_INPUTS_20_REFRACTORY,
};

// position_inputs_20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs20States state;
} PositionInputs20;

// position_inputs_20 Initialisation function
void PositionInputs20Init(PositionInputs20* me);

// position_inputs_20 Execution function
void PositionInputs20Run(PositionInputs20* me);

#endif // POSITION_INPUTS_20_H_