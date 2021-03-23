#ifndef POSITION_INPUTS_18_H_
#define POSITION_INPUTS_18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_18 States
enum PositionInputs18States {
    POSITION_INPUTS_18_INTEGRATE,
    POSITION_INPUTS_18_LIMIT,
    POSITION_INPUTS_18_SPIKE,
    POSITION_INPUTS_18_REFRACTORY,
};

// position_inputs_18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs18States state;
} PositionInputs18;

// position_inputs_18 Initialisation function
void PositionInputs18Init(PositionInputs18* me);

// position_inputs_18 Execution function
void PositionInputs18Run(PositionInputs18* me);

#endif // POSITION_INPUTS_18_H_