#ifndef POSITION_INPUTS_187_H_
#define POSITION_INPUTS_187_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_187 States
enum PositionInputs187States {
    POSITION_INPUTS_187_INTEGRATE,
    POSITION_INPUTS_187_LIMIT,
    POSITION_INPUTS_187_SPIKE,
    POSITION_INPUTS_187_REFRACTORY,
};

// position_inputs_187 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs187States state;
} PositionInputs187;

// position_inputs_187 Initialisation function
void PositionInputs187Init(PositionInputs187* me);

// position_inputs_187 Execution function
void PositionInputs187Run(PositionInputs187* me);

#endif // POSITION_INPUTS_187_H_