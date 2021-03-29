#ifndef POSITION_INPUTS_150_H_
#define POSITION_INPUTS_150_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_150 States
enum PositionInputs150States {
    POSITION_INPUTS_150_INTEGRATE,
    POSITION_INPUTS_150_LIMIT,
    POSITION_INPUTS_150_SPIKE,
    POSITION_INPUTS_150_REFRACTORY,
};

// position_inputs_150 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs150States state;
} PositionInputs150;

// position_inputs_150 Initialisation function
void PositionInputs150Init(PositionInputs150* me);

// position_inputs_150 Execution function
void PositionInputs150Run(PositionInputs150* me);

#endif // POSITION_INPUTS_150_H_