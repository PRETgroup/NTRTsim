#ifndef POSITION_INPUTS_343_H_
#define POSITION_INPUTS_343_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_343 States
enum PositionInputs343States {
    POSITION_INPUTS_343_INTEGRATE,
    POSITION_INPUTS_343_LIMIT,
    POSITION_INPUTS_343_SPIKE,
    POSITION_INPUTS_343_REFRACTORY,
};

// position_inputs_343 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs343States state;
} PositionInputs343;

// position_inputs_343 Initialisation function
void PositionInputs343Init(PositionInputs343* me);

// position_inputs_343 Execution function
void PositionInputs343Run(PositionInputs343* me);

#endif // POSITION_INPUTS_343_H_