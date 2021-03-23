#ifndef POSITION_INPUTS_228_H_
#define POSITION_INPUTS_228_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_228 States
enum PositionInputs228States {
    POSITION_INPUTS_228_INTEGRATE,
    POSITION_INPUTS_228_LIMIT,
    POSITION_INPUTS_228_SPIKE,
    POSITION_INPUTS_228_REFRACTORY,
};

// position_inputs_228 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs228States state;
} PositionInputs228;

// position_inputs_228 Initialisation function
void PositionInputs228Init(PositionInputs228* me);

// position_inputs_228 Execution function
void PositionInputs228Run(PositionInputs228* me);

#endif // POSITION_INPUTS_228_H_