#ifndef POSITION_INPUTS_382_H_
#define POSITION_INPUTS_382_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_382 States
enum PositionInputs382States {
    POSITION_INPUTS_382_INTEGRATE,
    POSITION_INPUTS_382_LIMIT,
    POSITION_INPUTS_382_SPIKE,
    POSITION_INPUTS_382_REFRACTORY,
};

// position_inputs_382 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs382States state;
} PositionInputs382;

// position_inputs_382 Initialisation function
void PositionInputs382Init(PositionInputs382* me);

// position_inputs_382 Execution function
void PositionInputs382Run(PositionInputs382* me);

#endif // POSITION_INPUTS_382_H_