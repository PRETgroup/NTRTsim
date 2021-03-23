#ifndef POSITION_INPUTS_385_H_
#define POSITION_INPUTS_385_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_385 States
enum PositionInputs385States {
    POSITION_INPUTS_385_INTEGRATE,
    POSITION_INPUTS_385_LIMIT,
    POSITION_INPUTS_385_SPIKE,
    POSITION_INPUTS_385_REFRACTORY,
};

// position_inputs_385 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs385States state;
} PositionInputs385;

// position_inputs_385 Initialisation function
void PositionInputs385Init(PositionInputs385* me);

// position_inputs_385 Execution function
void PositionInputs385Run(PositionInputs385* me);

#endif // POSITION_INPUTS_385_H_