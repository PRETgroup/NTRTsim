#ifndef POSITION_INPUTS_94_H_
#define POSITION_INPUTS_94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_94 States
enum PositionInputs94States {
    POSITION_INPUTS_94_INTEGRATE,
    POSITION_INPUTS_94_LIMIT,
    POSITION_INPUTS_94_SPIKE,
    POSITION_INPUTS_94_REFRACTORY,
};

// position_inputs_94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs94States state;
} PositionInputs94;

// position_inputs_94 Initialisation function
void PositionInputs94Init(PositionInputs94* me);

// position_inputs_94 Execution function
void PositionInputs94Run(PositionInputs94* me);

#endif // POSITION_INPUTS_94_H_