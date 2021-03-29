#ifndef POSITION_INPUTS_114_H_
#define POSITION_INPUTS_114_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_114 States
enum PositionInputs114States {
    POSITION_INPUTS_114_INTEGRATE,
    POSITION_INPUTS_114_LIMIT,
    POSITION_INPUTS_114_SPIKE,
    POSITION_INPUTS_114_REFRACTORY,
};

// position_inputs_114 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs114States state;
} PositionInputs114;

// position_inputs_114 Initialisation function
void PositionInputs114Init(PositionInputs114* me);

// position_inputs_114 Execution function
void PositionInputs114Run(PositionInputs114* me);

#endif // POSITION_INPUTS_114_H_