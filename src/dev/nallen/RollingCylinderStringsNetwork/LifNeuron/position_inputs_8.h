#ifndef POSITION_INPUTS_8_H_
#define POSITION_INPUTS_8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_8 States
enum PositionInputs8States {
    POSITION_INPUTS_8_INTEGRATE,
    POSITION_INPUTS_8_LIMIT,
    POSITION_INPUTS_8_SPIKE,
    POSITION_INPUTS_8_REFRACTORY,
};

// position_inputs_8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs8States state;
} PositionInputs8;

// position_inputs_8 Initialisation function
void PositionInputs8Init(PositionInputs8* me);

// position_inputs_8 Execution function
void PositionInputs8Run(PositionInputs8* me);

#endif // POSITION_INPUTS_8_H_