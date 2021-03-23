#ifndef POSITION_INPUTS_264_H_
#define POSITION_INPUTS_264_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_264 States
enum PositionInputs264States {
    POSITION_INPUTS_264_INTEGRATE,
    POSITION_INPUTS_264_LIMIT,
    POSITION_INPUTS_264_SPIKE,
    POSITION_INPUTS_264_REFRACTORY,
};

// position_inputs_264 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs264States state;
} PositionInputs264;

// position_inputs_264 Initialisation function
void PositionInputs264Init(PositionInputs264* me);

// position_inputs_264 Execution function
void PositionInputs264Run(PositionInputs264* me);

#endif // POSITION_INPUTS_264_H_