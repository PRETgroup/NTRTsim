#ifndef POSITION_INPUTS_242_H_
#define POSITION_INPUTS_242_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_242 States
enum PositionInputs242States {
    POSITION_INPUTS_242_INTEGRATE,
    POSITION_INPUTS_242_LIMIT,
    POSITION_INPUTS_242_SPIKE,
    POSITION_INPUTS_242_REFRACTORY,
};

// position_inputs_242 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs242States state;
} PositionInputs242;

// position_inputs_242 Initialisation function
void PositionInputs242Init(PositionInputs242* me);

// position_inputs_242 Execution function
void PositionInputs242Run(PositionInputs242* me);

#endif // POSITION_INPUTS_242_H_