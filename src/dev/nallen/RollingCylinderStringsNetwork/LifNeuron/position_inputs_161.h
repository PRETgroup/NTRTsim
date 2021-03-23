#ifndef POSITION_INPUTS_161_H_
#define POSITION_INPUTS_161_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_161 States
enum PositionInputs161States {
    POSITION_INPUTS_161_INTEGRATE,
    POSITION_INPUTS_161_LIMIT,
    POSITION_INPUTS_161_SPIKE,
    POSITION_INPUTS_161_REFRACTORY,
};

// position_inputs_161 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs161States state;
} PositionInputs161;

// position_inputs_161 Initialisation function
void PositionInputs161Init(PositionInputs161* me);

// position_inputs_161 Execution function
void PositionInputs161Run(PositionInputs161* me);

#endif // POSITION_INPUTS_161_H_