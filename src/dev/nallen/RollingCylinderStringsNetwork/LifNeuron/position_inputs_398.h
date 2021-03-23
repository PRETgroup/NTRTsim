#ifndef POSITION_INPUTS_398_H_
#define POSITION_INPUTS_398_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_398 States
enum PositionInputs398States {
    POSITION_INPUTS_398_INTEGRATE,
    POSITION_INPUTS_398_LIMIT,
    POSITION_INPUTS_398_SPIKE,
    POSITION_INPUTS_398_REFRACTORY,
};

// position_inputs_398 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs398States state;
} PositionInputs398;

// position_inputs_398 Initialisation function
void PositionInputs398Init(PositionInputs398* me);

// position_inputs_398 Execution function
void PositionInputs398Run(PositionInputs398* me);

#endif // POSITION_INPUTS_398_H_