#ifndef POSITION_INPUTS_256_H_
#define POSITION_INPUTS_256_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_256 States
enum PositionInputs256States {
    POSITION_INPUTS_256_INTEGRATE,
    POSITION_INPUTS_256_LIMIT,
    POSITION_INPUTS_256_SPIKE,
    POSITION_INPUTS_256_REFRACTORY,
};

// position_inputs_256 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs256States state;
} PositionInputs256;

// position_inputs_256 Initialisation function
void PositionInputs256Init(PositionInputs256* me);

// position_inputs_256 Execution function
void PositionInputs256Run(PositionInputs256* me);

#endif // POSITION_INPUTS_256_H_