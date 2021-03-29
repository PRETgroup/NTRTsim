#ifndef POSITION_INPUTS_118_H_
#define POSITION_INPUTS_118_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_118 States
enum PositionInputs118States {
    POSITION_INPUTS_118_INTEGRATE,
    POSITION_INPUTS_118_LIMIT,
    POSITION_INPUTS_118_SPIKE,
    POSITION_INPUTS_118_REFRACTORY,
};

// position_inputs_118 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs118States state;
} PositionInputs118;

// position_inputs_118 Initialisation function
void PositionInputs118Init(PositionInputs118* me);

// position_inputs_118 Execution function
void PositionInputs118Run(PositionInputs118* me);

#endif // POSITION_INPUTS_118_H_