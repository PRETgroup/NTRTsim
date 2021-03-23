#ifndef POSITION_INPUTS_316_H_
#define POSITION_INPUTS_316_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_316 States
enum PositionInputs316States {
    POSITION_INPUTS_316_INTEGRATE,
    POSITION_INPUTS_316_LIMIT,
    POSITION_INPUTS_316_SPIKE,
    POSITION_INPUTS_316_REFRACTORY,
};

// position_inputs_316 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs316States state;
} PositionInputs316;

// position_inputs_316 Initialisation function
void PositionInputs316Init(PositionInputs316* me);

// position_inputs_316 Execution function
void PositionInputs316Run(PositionInputs316* me);

#endif // POSITION_INPUTS_316_H_