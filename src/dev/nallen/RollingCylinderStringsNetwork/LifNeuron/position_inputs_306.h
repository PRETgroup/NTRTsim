#ifndef POSITION_INPUTS_306_H_
#define POSITION_INPUTS_306_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_306 States
enum PositionInputs306States {
    POSITION_INPUTS_306_INTEGRATE,
    POSITION_INPUTS_306_LIMIT,
    POSITION_INPUTS_306_SPIKE,
    POSITION_INPUTS_306_REFRACTORY,
};

// position_inputs_306 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs306States state;
} PositionInputs306;

// position_inputs_306 Initialisation function
void PositionInputs306Init(PositionInputs306* me);

// position_inputs_306 Execution function
void PositionInputs306Run(PositionInputs306* me);

#endif // POSITION_INPUTS_306_H_