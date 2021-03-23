#ifndef POSITION_INPUTS_34_H_
#define POSITION_INPUTS_34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_34 States
enum PositionInputs34States {
    POSITION_INPUTS_34_INTEGRATE,
    POSITION_INPUTS_34_LIMIT,
    POSITION_INPUTS_34_SPIKE,
    POSITION_INPUTS_34_REFRACTORY,
};

// position_inputs_34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs34States state;
} PositionInputs34;

// position_inputs_34 Initialisation function
void PositionInputs34Init(PositionInputs34* me);

// position_inputs_34 Execution function
void PositionInputs34Run(PositionInputs34* me);

#endif // POSITION_INPUTS_34_H_