#ifndef POSITION_INPUTS_255_H_
#define POSITION_INPUTS_255_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_255 States
enum PositionInputs255States {
    POSITION_INPUTS_255_INTEGRATE,
    POSITION_INPUTS_255_LIMIT,
    POSITION_INPUTS_255_SPIKE,
    POSITION_INPUTS_255_REFRACTORY,
};

// position_inputs_255 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs255States state;
} PositionInputs255;

// position_inputs_255 Initialisation function
void PositionInputs255Init(PositionInputs255* me);

// position_inputs_255 Execution function
void PositionInputs255Run(PositionInputs255* me);

#endif // POSITION_INPUTS_255_H_