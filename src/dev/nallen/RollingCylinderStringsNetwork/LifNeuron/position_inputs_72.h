#ifndef POSITION_INPUTS_72_H_
#define POSITION_INPUTS_72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_72 States
enum PositionInputs72States {
    POSITION_INPUTS_72_INTEGRATE,
    POSITION_INPUTS_72_LIMIT,
    POSITION_INPUTS_72_SPIKE,
    POSITION_INPUTS_72_REFRACTORY,
};

// position_inputs_72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs72States state;
} PositionInputs72;

// position_inputs_72 Initialisation function
void PositionInputs72Init(PositionInputs72* me);

// position_inputs_72 Execution function
void PositionInputs72Run(PositionInputs72* me);

#endif // POSITION_INPUTS_72_H_