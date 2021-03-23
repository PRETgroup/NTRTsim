#ifndef POSITION_INPUTS_33_H_
#define POSITION_INPUTS_33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_33 States
enum PositionInputs33States {
    POSITION_INPUTS_33_INTEGRATE,
    POSITION_INPUTS_33_LIMIT,
    POSITION_INPUTS_33_SPIKE,
    POSITION_INPUTS_33_REFRACTORY,
};

// position_inputs_33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs33States state;
} PositionInputs33;

// position_inputs_33 Initialisation function
void PositionInputs33Init(PositionInputs33* me);

// position_inputs_33 Execution function
void PositionInputs33Run(PositionInputs33* me);

#endif // POSITION_INPUTS_33_H_