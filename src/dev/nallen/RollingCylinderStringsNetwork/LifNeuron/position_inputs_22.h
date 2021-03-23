#ifndef POSITION_INPUTS_22_H_
#define POSITION_INPUTS_22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_22 States
enum PositionInputs22States {
    POSITION_INPUTS_22_INTEGRATE,
    POSITION_INPUTS_22_LIMIT,
    POSITION_INPUTS_22_SPIKE,
    POSITION_INPUTS_22_REFRACTORY,
};

// position_inputs_22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs22States state;
} PositionInputs22;

// position_inputs_22 Initialisation function
void PositionInputs22Init(PositionInputs22* me);

// position_inputs_22 Execution function
void PositionInputs22Run(PositionInputs22* me);

#endif // POSITION_INPUTS_22_H_