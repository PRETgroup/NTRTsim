#ifndef POSITION_INPUTS_265_H_
#define POSITION_INPUTS_265_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_265 States
enum PositionInputs265States {
    POSITION_INPUTS_265_INTEGRATE,
    POSITION_INPUTS_265_LIMIT,
    POSITION_INPUTS_265_SPIKE,
    POSITION_INPUTS_265_REFRACTORY,
};

// position_inputs_265 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs265States state;
} PositionInputs265;

// position_inputs_265 Initialisation function
void PositionInputs265Init(PositionInputs265* me);

// position_inputs_265 Execution function
void PositionInputs265Run(PositionInputs265* me);

#endif // POSITION_INPUTS_265_H_