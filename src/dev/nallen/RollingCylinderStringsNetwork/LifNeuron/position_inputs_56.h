#ifndef POSITION_INPUTS_56_H_
#define POSITION_INPUTS_56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_56 States
enum PositionInputs56States {
    POSITION_INPUTS_56_INTEGRATE,
    POSITION_INPUTS_56_LIMIT,
    POSITION_INPUTS_56_SPIKE,
    POSITION_INPUTS_56_REFRACTORY,
};

// position_inputs_56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs56States state;
} PositionInputs56;

// position_inputs_56 Initialisation function
void PositionInputs56Init(PositionInputs56* me);

// position_inputs_56 Execution function
void PositionInputs56Run(PositionInputs56* me);

#endif // POSITION_INPUTS_56_H_