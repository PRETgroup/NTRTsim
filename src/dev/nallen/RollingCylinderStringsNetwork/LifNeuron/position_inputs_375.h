#ifndef POSITION_INPUTS_375_H_
#define POSITION_INPUTS_375_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_375 States
enum PositionInputs375States {
    POSITION_INPUTS_375_INTEGRATE,
    POSITION_INPUTS_375_LIMIT,
    POSITION_INPUTS_375_SPIKE,
    POSITION_INPUTS_375_REFRACTORY,
};

// position_inputs_375 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs375States state;
} PositionInputs375;

// position_inputs_375 Initialisation function
void PositionInputs375Init(PositionInputs375* me);

// position_inputs_375 Execution function
void PositionInputs375Run(PositionInputs375* me);

#endif // POSITION_INPUTS_375_H_