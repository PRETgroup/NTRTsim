#ifndef POSITION_INPUTS_191_H_
#define POSITION_INPUTS_191_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_191 States
enum PositionInputs191States {
    POSITION_INPUTS_191_INTEGRATE,
    POSITION_INPUTS_191_LIMIT,
    POSITION_INPUTS_191_SPIKE,
    POSITION_INPUTS_191_REFRACTORY,
};

// position_inputs_191 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs191States state;
} PositionInputs191;

// position_inputs_191 Initialisation function
void PositionInputs191Init(PositionInputs191* me);

// position_inputs_191 Execution function
void PositionInputs191Run(PositionInputs191* me);

#endif // POSITION_INPUTS_191_H_