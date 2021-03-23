#ifndef POSITION_INPUTS_270_H_
#define POSITION_INPUTS_270_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_270 States
enum PositionInputs270States {
    POSITION_INPUTS_270_INTEGRATE,
    POSITION_INPUTS_270_LIMIT,
    POSITION_INPUTS_270_SPIKE,
    POSITION_INPUTS_270_REFRACTORY,
};

// position_inputs_270 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs270States state;
} PositionInputs270;

// position_inputs_270 Initialisation function
void PositionInputs270Init(PositionInputs270* me);

// position_inputs_270 Execution function
void PositionInputs270Run(PositionInputs270* me);

#endif // POSITION_INPUTS_270_H_