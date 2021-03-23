#ifndef POSITION_INPUTS_188_H_
#define POSITION_INPUTS_188_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_188 States
enum PositionInputs188States {
    POSITION_INPUTS_188_INTEGRATE,
    POSITION_INPUTS_188_LIMIT,
    POSITION_INPUTS_188_SPIKE,
    POSITION_INPUTS_188_REFRACTORY,
};

// position_inputs_188 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs188States state;
} PositionInputs188;

// position_inputs_188 Initialisation function
void PositionInputs188Init(PositionInputs188* me);

// position_inputs_188 Execution function
void PositionInputs188Run(PositionInputs188* me);

#endif // POSITION_INPUTS_188_H_