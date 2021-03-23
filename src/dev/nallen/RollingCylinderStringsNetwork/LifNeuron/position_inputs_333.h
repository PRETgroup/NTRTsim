#ifndef POSITION_INPUTS_333_H_
#define POSITION_INPUTS_333_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_333 States
enum PositionInputs333States {
    POSITION_INPUTS_333_INTEGRATE,
    POSITION_INPUTS_333_LIMIT,
    POSITION_INPUTS_333_SPIKE,
    POSITION_INPUTS_333_REFRACTORY,
};

// position_inputs_333 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs333States state;
} PositionInputs333;

// position_inputs_333 Initialisation function
void PositionInputs333Init(PositionInputs333* me);

// position_inputs_333 Execution function
void PositionInputs333Run(PositionInputs333* me);

#endif // POSITION_INPUTS_333_H_