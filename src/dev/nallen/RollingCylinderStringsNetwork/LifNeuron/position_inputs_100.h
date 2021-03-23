#ifndef POSITION_INPUTS_100_H_
#define POSITION_INPUTS_100_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_100 States
enum PositionInputs100States {
    POSITION_INPUTS_100_INTEGRATE,
    POSITION_INPUTS_100_LIMIT,
    POSITION_INPUTS_100_SPIKE,
    POSITION_INPUTS_100_REFRACTORY,
};

// position_inputs_100 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs100States state;
} PositionInputs100;

// position_inputs_100 Initialisation function
void PositionInputs100Init(PositionInputs100* me);

// position_inputs_100 Execution function
void PositionInputs100Run(PositionInputs100* me);

#endif // POSITION_INPUTS_100_H_