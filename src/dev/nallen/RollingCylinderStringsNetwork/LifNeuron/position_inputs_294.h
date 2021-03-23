#ifndef POSITION_INPUTS_294_H_
#define POSITION_INPUTS_294_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_294 States
enum PositionInputs294States {
    POSITION_INPUTS_294_INTEGRATE,
    POSITION_INPUTS_294_LIMIT,
    POSITION_INPUTS_294_SPIKE,
    POSITION_INPUTS_294_REFRACTORY,
};

// position_inputs_294 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs294States state;
} PositionInputs294;

// position_inputs_294 Initialisation function
void PositionInputs294Init(PositionInputs294* me);

// position_inputs_294 Execution function
void PositionInputs294Run(PositionInputs294* me);

#endif // POSITION_INPUTS_294_H_