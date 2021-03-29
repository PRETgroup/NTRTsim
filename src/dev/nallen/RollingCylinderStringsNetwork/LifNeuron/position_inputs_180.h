#ifndef POSITION_INPUTS_180_H_
#define POSITION_INPUTS_180_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_180 States
enum PositionInputs180States {
    POSITION_INPUTS_180_INTEGRATE,
    POSITION_INPUTS_180_LIMIT,
    POSITION_INPUTS_180_SPIKE,
    POSITION_INPUTS_180_REFRACTORY,
};

// position_inputs_180 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs180States state;
} PositionInputs180;

// position_inputs_180 Initialisation function
void PositionInputs180Init(PositionInputs180* me);

// position_inputs_180 Execution function
void PositionInputs180Run(PositionInputs180* me);

#endif // POSITION_INPUTS_180_H_