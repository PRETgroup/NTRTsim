#ifndef POSITION_INPUTS_182_H_
#define POSITION_INPUTS_182_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_182 States
enum PositionInputs182States {
    POSITION_INPUTS_182_INTEGRATE,
    POSITION_INPUTS_182_LIMIT,
    POSITION_INPUTS_182_SPIKE,
    POSITION_INPUTS_182_REFRACTORY,
};

// position_inputs_182 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs182States state;
} PositionInputs182;

// position_inputs_182 Initialisation function
void PositionInputs182Init(PositionInputs182* me);

// position_inputs_182 Execution function
void PositionInputs182Run(PositionInputs182* me);

#endif // POSITION_INPUTS_182_H_