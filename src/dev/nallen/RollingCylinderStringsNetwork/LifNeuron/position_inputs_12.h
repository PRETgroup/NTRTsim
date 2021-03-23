#ifndef POSITION_INPUTS_12_H_
#define POSITION_INPUTS_12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_12 States
enum PositionInputs12States {
    POSITION_INPUTS_12_INTEGRATE,
    POSITION_INPUTS_12_LIMIT,
    POSITION_INPUTS_12_SPIKE,
    POSITION_INPUTS_12_REFRACTORY,
};

// position_inputs_12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs12States state;
} PositionInputs12;

// position_inputs_12 Initialisation function
void PositionInputs12Init(PositionInputs12* me);

// position_inputs_12 Execution function
void PositionInputs12Run(PositionInputs12* me);

#endif // POSITION_INPUTS_12_H_