#ifndef POSITION_INPUTS_95_H_
#define POSITION_INPUTS_95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_95 States
enum PositionInputs95States {
    POSITION_INPUTS_95_INTEGRATE,
    POSITION_INPUTS_95_LIMIT,
    POSITION_INPUTS_95_SPIKE,
    POSITION_INPUTS_95_REFRACTORY,
};

// position_inputs_95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs95States state;
} PositionInputs95;

// position_inputs_95 Initialisation function
void PositionInputs95Init(PositionInputs95* me);

// position_inputs_95 Execution function
void PositionInputs95Run(PositionInputs95* me);

#endif // POSITION_INPUTS_95_H_