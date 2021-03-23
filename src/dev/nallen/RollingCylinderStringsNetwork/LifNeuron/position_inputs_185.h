#ifndef POSITION_INPUTS_185_H_
#define POSITION_INPUTS_185_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_185 States
enum PositionInputs185States {
    POSITION_INPUTS_185_INTEGRATE,
    POSITION_INPUTS_185_LIMIT,
    POSITION_INPUTS_185_SPIKE,
    POSITION_INPUTS_185_REFRACTORY,
};

// position_inputs_185 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs185States state;
} PositionInputs185;

// position_inputs_185 Initialisation function
void PositionInputs185Init(PositionInputs185* me);

// position_inputs_185 Execution function
void PositionInputs185Run(PositionInputs185* me);

#endif // POSITION_INPUTS_185_H_