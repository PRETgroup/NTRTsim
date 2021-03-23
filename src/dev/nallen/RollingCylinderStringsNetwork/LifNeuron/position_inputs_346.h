#ifndef POSITION_INPUTS_346_H_
#define POSITION_INPUTS_346_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_346 States
enum PositionInputs346States {
    POSITION_INPUTS_346_INTEGRATE,
    POSITION_INPUTS_346_LIMIT,
    POSITION_INPUTS_346_SPIKE,
    POSITION_INPUTS_346_REFRACTORY,
};

// position_inputs_346 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs346States state;
} PositionInputs346;

// position_inputs_346 Initialisation function
void PositionInputs346Init(PositionInputs346* me);

// position_inputs_346 Execution function
void PositionInputs346Run(PositionInputs346* me);

#endif // POSITION_INPUTS_346_H_