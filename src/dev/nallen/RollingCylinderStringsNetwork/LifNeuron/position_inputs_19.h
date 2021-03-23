#ifndef POSITION_INPUTS_19_H_
#define POSITION_INPUTS_19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_19 States
enum PositionInputs19States {
    POSITION_INPUTS_19_INTEGRATE,
    POSITION_INPUTS_19_LIMIT,
    POSITION_INPUTS_19_SPIKE,
    POSITION_INPUTS_19_REFRACTORY,
};

// position_inputs_19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs19States state;
} PositionInputs19;

// position_inputs_19 Initialisation function
void PositionInputs19Init(PositionInputs19* me);

// position_inputs_19 Execution function
void PositionInputs19Run(PositionInputs19* me);

#endif // POSITION_INPUTS_19_H_