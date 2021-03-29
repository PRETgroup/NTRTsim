#ifndef POSITION_INPUTS_158_H_
#define POSITION_INPUTS_158_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_158 States
enum PositionInputs158States {
    POSITION_INPUTS_158_INTEGRATE,
    POSITION_INPUTS_158_LIMIT,
    POSITION_INPUTS_158_SPIKE,
    POSITION_INPUTS_158_REFRACTORY,
};

// position_inputs_158 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs158States state;
} PositionInputs158;

// position_inputs_158 Initialisation function
void PositionInputs158Init(PositionInputs158* me);

// position_inputs_158 Execution function
void PositionInputs158Run(PositionInputs158* me);

#endif // POSITION_INPUTS_158_H_