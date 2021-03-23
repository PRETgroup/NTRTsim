#ifndef POSITION_INPUTS_260_H_
#define POSITION_INPUTS_260_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_260 States
enum PositionInputs260States {
    POSITION_INPUTS_260_INTEGRATE,
    POSITION_INPUTS_260_LIMIT,
    POSITION_INPUTS_260_SPIKE,
    POSITION_INPUTS_260_REFRACTORY,
};

// position_inputs_260 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs260States state;
} PositionInputs260;

// position_inputs_260 Initialisation function
void PositionInputs260Init(PositionInputs260* me);

// position_inputs_260 Execution function
void PositionInputs260Run(PositionInputs260* me);

#endif // POSITION_INPUTS_260_H_