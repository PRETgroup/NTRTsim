#ifndef POSITION_INPUTS_1_H_
#define POSITION_INPUTS_1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_1 States
enum PositionInputs1States {
    POSITION_INPUTS_1_INTEGRATE,
    POSITION_INPUTS_1_LIMIT,
    POSITION_INPUTS_1_SPIKE,
    POSITION_INPUTS_1_REFRACTORY,
};

// position_inputs_1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs1States state;
} PositionInputs1;

// position_inputs_1 Initialisation function
void PositionInputs1Init(PositionInputs1* me);

// position_inputs_1 Execution function
void PositionInputs1Run(PositionInputs1* me);

#endif // POSITION_INPUTS_1_H_