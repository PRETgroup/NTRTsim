#ifndef POSITION_INPUTS_293_H_
#define POSITION_INPUTS_293_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_293 States
enum PositionInputs293States {
    POSITION_INPUTS_293_INTEGRATE,
    POSITION_INPUTS_293_LIMIT,
    POSITION_INPUTS_293_SPIKE,
    POSITION_INPUTS_293_REFRACTORY,
};

// position_inputs_293 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs293States state;
} PositionInputs293;

// position_inputs_293 Initialisation function
void PositionInputs293Init(PositionInputs293* me);

// position_inputs_293 Execution function
void PositionInputs293Run(PositionInputs293* me);

#endif // POSITION_INPUTS_293_H_