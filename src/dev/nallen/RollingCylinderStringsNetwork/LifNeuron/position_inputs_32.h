#ifndef POSITION_INPUTS_32_H_
#define POSITION_INPUTS_32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_32 States
enum PositionInputs32States {
    POSITION_INPUTS_32_INTEGRATE,
    POSITION_INPUTS_32_LIMIT,
    POSITION_INPUTS_32_SPIKE,
    POSITION_INPUTS_32_REFRACTORY,
};

// position_inputs_32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs32States state;
} PositionInputs32;

// position_inputs_32 Initialisation function
void PositionInputs32Init(PositionInputs32* me);

// position_inputs_32 Execution function
void PositionInputs32Run(PositionInputs32* me);

#endif // POSITION_INPUTS_32_H_