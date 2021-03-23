#ifndef POSITION_INPUTS_384_H_
#define POSITION_INPUTS_384_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_384 States
enum PositionInputs384States {
    POSITION_INPUTS_384_INTEGRATE,
    POSITION_INPUTS_384_LIMIT,
    POSITION_INPUTS_384_SPIKE,
    POSITION_INPUTS_384_REFRACTORY,
};

// position_inputs_384 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs384States state;
} PositionInputs384;

// position_inputs_384 Initialisation function
void PositionInputs384Init(PositionInputs384* me);

// position_inputs_384 Execution function
void PositionInputs384Run(PositionInputs384* me);

#endif // POSITION_INPUTS_384_H_