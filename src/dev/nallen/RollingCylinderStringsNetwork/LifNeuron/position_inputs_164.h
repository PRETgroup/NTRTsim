#ifndef POSITION_INPUTS_164_H_
#define POSITION_INPUTS_164_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_164 States
enum PositionInputs164States {
    POSITION_INPUTS_164_INTEGRATE,
    POSITION_INPUTS_164_LIMIT,
    POSITION_INPUTS_164_SPIKE,
    POSITION_INPUTS_164_REFRACTORY,
};

// position_inputs_164 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs164States state;
} PositionInputs164;

// position_inputs_164 Initialisation function
void PositionInputs164Init(PositionInputs164* me);

// position_inputs_164 Execution function
void PositionInputs164Run(PositionInputs164* me);

#endif // POSITION_INPUTS_164_H_