#ifndef POSITION_INPUTS_218_H_
#define POSITION_INPUTS_218_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_218 States
enum PositionInputs218States {
    POSITION_INPUTS_218_INTEGRATE,
    POSITION_INPUTS_218_LIMIT,
    POSITION_INPUTS_218_SPIKE,
    POSITION_INPUTS_218_REFRACTORY,
};

// position_inputs_218 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs218States state;
} PositionInputs218;

// position_inputs_218 Initialisation function
void PositionInputs218Init(PositionInputs218* me);

// position_inputs_218 Execution function
void PositionInputs218Run(PositionInputs218* me);

#endif // POSITION_INPUTS_218_H_