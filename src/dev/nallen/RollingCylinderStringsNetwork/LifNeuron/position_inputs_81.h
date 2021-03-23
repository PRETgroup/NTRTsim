#ifndef POSITION_INPUTS_81_H_
#define POSITION_INPUTS_81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_81 States
enum PositionInputs81States {
    POSITION_INPUTS_81_INTEGRATE,
    POSITION_INPUTS_81_LIMIT,
    POSITION_INPUTS_81_SPIKE,
    POSITION_INPUTS_81_REFRACTORY,
};

// position_inputs_81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs81States state;
} PositionInputs81;

// position_inputs_81 Initialisation function
void PositionInputs81Init(PositionInputs81* me);

// position_inputs_81 Execution function
void PositionInputs81Run(PositionInputs81* me);

#endif // POSITION_INPUTS_81_H_