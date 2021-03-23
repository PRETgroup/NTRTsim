#ifndef POSITION_INPUTS_338_H_
#define POSITION_INPUTS_338_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_338 States
enum PositionInputs338States {
    POSITION_INPUTS_338_INTEGRATE,
    POSITION_INPUTS_338_LIMIT,
    POSITION_INPUTS_338_SPIKE,
    POSITION_INPUTS_338_REFRACTORY,
};

// position_inputs_338 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs338States state;
} PositionInputs338;

// position_inputs_338 Initialisation function
void PositionInputs338Init(PositionInputs338* me);

// position_inputs_338 Execution function
void PositionInputs338Run(PositionInputs338* me);

#endif // POSITION_INPUTS_338_H_