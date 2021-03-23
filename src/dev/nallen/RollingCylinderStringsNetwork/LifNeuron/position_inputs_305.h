#ifndef POSITION_INPUTS_305_H_
#define POSITION_INPUTS_305_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_305 States
enum PositionInputs305States {
    POSITION_INPUTS_305_INTEGRATE,
    POSITION_INPUTS_305_LIMIT,
    POSITION_INPUTS_305_SPIKE,
    POSITION_INPUTS_305_REFRACTORY,
};

// position_inputs_305 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs305States state;
} PositionInputs305;

// position_inputs_305 Initialisation function
void PositionInputs305Init(PositionInputs305* me);

// position_inputs_305 Execution function
void PositionInputs305Run(PositionInputs305* me);

#endif // POSITION_INPUTS_305_H_