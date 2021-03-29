#ifndef POSITION_INPUTS_131_H_
#define POSITION_INPUTS_131_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_131 States
enum PositionInputs131States {
    POSITION_INPUTS_131_INTEGRATE,
    POSITION_INPUTS_131_LIMIT,
    POSITION_INPUTS_131_SPIKE,
    POSITION_INPUTS_131_REFRACTORY,
};

// position_inputs_131 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs131States state;
} PositionInputs131;

// position_inputs_131 Initialisation function
void PositionInputs131Init(PositionInputs131* me);

// position_inputs_131 Execution function
void PositionInputs131Run(PositionInputs131* me);

#endif // POSITION_INPUTS_131_H_