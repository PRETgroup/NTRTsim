#ifndef POSITION_INPUTS_169_H_
#define POSITION_INPUTS_169_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_169 States
enum PositionInputs169States {
    POSITION_INPUTS_169_INTEGRATE,
    POSITION_INPUTS_169_LIMIT,
    POSITION_INPUTS_169_SPIKE,
    POSITION_INPUTS_169_REFRACTORY,
};

// position_inputs_169 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs169States state;
} PositionInputs169;

// position_inputs_169 Initialisation function
void PositionInputs169Init(PositionInputs169* me);

// position_inputs_169 Execution function
void PositionInputs169Run(PositionInputs169* me);

#endif // POSITION_INPUTS_169_H_