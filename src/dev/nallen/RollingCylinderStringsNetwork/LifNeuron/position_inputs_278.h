#ifndef POSITION_INPUTS_278_H_
#define POSITION_INPUTS_278_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_278 States
enum PositionInputs278States {
    POSITION_INPUTS_278_INTEGRATE,
    POSITION_INPUTS_278_LIMIT,
    POSITION_INPUTS_278_SPIKE,
    POSITION_INPUTS_278_REFRACTORY,
};

// position_inputs_278 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs278States state;
} PositionInputs278;

// position_inputs_278 Initialisation function
void PositionInputs278Init(PositionInputs278* me);

// position_inputs_278 Execution function
void PositionInputs278Run(PositionInputs278* me);

#endif // POSITION_INPUTS_278_H_