#ifndef POSITION_INPUTS_340_H_
#define POSITION_INPUTS_340_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_340 States
enum PositionInputs340States {
    POSITION_INPUTS_340_INTEGRATE,
    POSITION_INPUTS_340_LIMIT,
    POSITION_INPUTS_340_SPIKE,
    POSITION_INPUTS_340_REFRACTORY,
};

// position_inputs_340 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs340States state;
} PositionInputs340;

// position_inputs_340 Initialisation function
void PositionInputs340Init(PositionInputs340* me);

// position_inputs_340 Execution function
void PositionInputs340Run(PositionInputs340* me);

#endif // POSITION_INPUTS_340_H_