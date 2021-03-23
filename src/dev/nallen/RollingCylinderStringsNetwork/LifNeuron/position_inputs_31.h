#ifndef POSITION_INPUTS_31_H_
#define POSITION_INPUTS_31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_31 States
enum PositionInputs31States {
    POSITION_INPUTS_31_INTEGRATE,
    POSITION_INPUTS_31_LIMIT,
    POSITION_INPUTS_31_SPIKE,
    POSITION_INPUTS_31_REFRACTORY,
};

// position_inputs_31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs31States state;
} PositionInputs31;

// position_inputs_31 Initialisation function
void PositionInputs31Init(PositionInputs31* me);

// position_inputs_31 Execution function
void PositionInputs31Run(PositionInputs31* me);

#endif // POSITION_INPUTS_31_H_