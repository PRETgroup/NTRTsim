#ifndef POSITION_INPUTS_17_H_
#define POSITION_INPUTS_17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_17 States
enum PositionInputs17States {
    POSITION_INPUTS_17_INTEGRATE,
    POSITION_INPUTS_17_LIMIT,
    POSITION_INPUTS_17_SPIKE,
    POSITION_INPUTS_17_REFRACTORY,
};

// position_inputs_17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs17States state;
} PositionInputs17;

// position_inputs_17 Initialisation function
void PositionInputs17Init(PositionInputs17* me);

// position_inputs_17 Execution function
void PositionInputs17Run(PositionInputs17* me);

#endif // POSITION_INPUTS_17_H_