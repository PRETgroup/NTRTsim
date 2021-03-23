#ifndef POSITION_INPUTS_236_H_
#define POSITION_INPUTS_236_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_236 States
enum PositionInputs236States {
    POSITION_INPUTS_236_INTEGRATE,
    POSITION_INPUTS_236_LIMIT,
    POSITION_INPUTS_236_SPIKE,
    POSITION_INPUTS_236_REFRACTORY,
};

// position_inputs_236 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs236States state;
} PositionInputs236;

// position_inputs_236 Initialisation function
void PositionInputs236Init(PositionInputs236* me);

// position_inputs_236 Execution function
void PositionInputs236Run(PositionInputs236* me);

#endif // POSITION_INPUTS_236_H_