#ifndef POSITION_INPUTS_358_H_
#define POSITION_INPUTS_358_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_358 States
enum PositionInputs358States {
    POSITION_INPUTS_358_INTEGRATE,
    POSITION_INPUTS_358_LIMIT,
    POSITION_INPUTS_358_SPIKE,
    POSITION_INPUTS_358_REFRACTORY,
};

// position_inputs_358 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs358States state;
} PositionInputs358;

// position_inputs_358 Initialisation function
void PositionInputs358Init(PositionInputs358* me);

// position_inputs_358 Execution function
void PositionInputs358Run(PositionInputs358* me);

#endif // POSITION_INPUTS_358_H_