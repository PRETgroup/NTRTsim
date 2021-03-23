#ifndef POSITION_INPUTS_389_H_
#define POSITION_INPUTS_389_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_389 States
enum PositionInputs389States {
    POSITION_INPUTS_389_INTEGRATE,
    POSITION_INPUTS_389_LIMIT,
    POSITION_INPUTS_389_SPIKE,
    POSITION_INPUTS_389_REFRACTORY,
};

// position_inputs_389 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs389States state;
} PositionInputs389;

// position_inputs_389 Initialisation function
void PositionInputs389Init(PositionInputs389* me);

// position_inputs_389 Execution function
void PositionInputs389Run(PositionInputs389* me);

#endif // POSITION_INPUTS_389_H_