#ifndef POSITION_INPUTS_259_H_
#define POSITION_INPUTS_259_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_259 States
enum PositionInputs259States {
    POSITION_INPUTS_259_INTEGRATE,
    POSITION_INPUTS_259_LIMIT,
    POSITION_INPUTS_259_SPIKE,
    POSITION_INPUTS_259_REFRACTORY,
};

// position_inputs_259 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs259States state;
} PositionInputs259;

// position_inputs_259 Initialisation function
void PositionInputs259Init(PositionInputs259* me);

// position_inputs_259 Execution function
void PositionInputs259Run(PositionInputs259* me);

#endif // POSITION_INPUTS_259_H_