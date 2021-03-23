#ifndef POSITION_INPUTS_2_H_
#define POSITION_INPUTS_2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_2 States
enum PositionInputs2States {
    POSITION_INPUTS_2_INTEGRATE,
    POSITION_INPUTS_2_LIMIT,
    POSITION_INPUTS_2_SPIKE,
    POSITION_INPUTS_2_REFRACTORY,
};

// position_inputs_2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs2States state;
} PositionInputs2;

// position_inputs_2 Initialisation function
void PositionInputs2Init(PositionInputs2* me);

// position_inputs_2 Execution function
void PositionInputs2Run(PositionInputs2* me);

#endif // POSITION_INPUTS_2_H_