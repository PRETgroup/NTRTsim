#ifndef POSITION_INPUTS_234_H_
#define POSITION_INPUTS_234_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_234 States
enum PositionInputs234States {
    POSITION_INPUTS_234_INTEGRATE,
    POSITION_INPUTS_234_LIMIT,
    POSITION_INPUTS_234_SPIKE,
    POSITION_INPUTS_234_REFRACTORY,
};

// position_inputs_234 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs234States state;
} PositionInputs234;

// position_inputs_234 Initialisation function
void PositionInputs234Init(PositionInputs234* me);

// position_inputs_234 Execution function
void PositionInputs234Run(PositionInputs234* me);

#endif // POSITION_INPUTS_234_H_