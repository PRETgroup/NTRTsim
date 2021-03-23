#ifndef POSITION_INPUTS_30_H_
#define POSITION_INPUTS_30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_30 States
enum PositionInputs30States {
    POSITION_INPUTS_30_INTEGRATE,
    POSITION_INPUTS_30_LIMIT,
    POSITION_INPUTS_30_SPIKE,
    POSITION_INPUTS_30_REFRACTORY,
};

// position_inputs_30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs30States state;
} PositionInputs30;

// position_inputs_30 Initialisation function
void PositionInputs30Init(PositionInputs30* me);

// position_inputs_30 Execution function
void PositionInputs30Run(PositionInputs30* me);

#endif // POSITION_INPUTS_30_H_