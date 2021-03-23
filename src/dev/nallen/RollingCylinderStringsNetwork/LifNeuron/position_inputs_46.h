#ifndef POSITION_INPUTS_46_H_
#define POSITION_INPUTS_46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_46 States
enum PositionInputs46States {
    POSITION_INPUTS_46_INTEGRATE,
    POSITION_INPUTS_46_LIMIT,
    POSITION_INPUTS_46_SPIKE,
    POSITION_INPUTS_46_REFRACTORY,
};

// position_inputs_46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs46States state;
} PositionInputs46;

// position_inputs_46 Initialisation function
void PositionInputs46Init(PositionInputs46* me);

// position_inputs_46 Execution function
void PositionInputs46Run(PositionInputs46* me);

#endif // POSITION_INPUTS_46_H_