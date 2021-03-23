#ifndef POSITION_INPUTS_291_H_
#define POSITION_INPUTS_291_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_291 States
enum PositionInputs291States {
    POSITION_INPUTS_291_INTEGRATE,
    POSITION_INPUTS_291_LIMIT,
    POSITION_INPUTS_291_SPIKE,
    POSITION_INPUTS_291_REFRACTORY,
};

// position_inputs_291 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs291States state;
} PositionInputs291;

// position_inputs_291 Initialisation function
void PositionInputs291Init(PositionInputs291* me);

// position_inputs_291 Execution function
void PositionInputs291Run(PositionInputs291* me);

#endif // POSITION_INPUTS_291_H_