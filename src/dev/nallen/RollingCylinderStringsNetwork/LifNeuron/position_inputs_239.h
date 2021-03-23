#ifndef POSITION_INPUTS_239_H_
#define POSITION_INPUTS_239_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_239 States
enum PositionInputs239States {
    POSITION_INPUTS_239_INTEGRATE,
    POSITION_INPUTS_239_LIMIT,
    POSITION_INPUTS_239_SPIKE,
    POSITION_INPUTS_239_REFRACTORY,
};

// position_inputs_239 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs239States state;
} PositionInputs239;

// position_inputs_239 Initialisation function
void PositionInputs239Init(PositionInputs239* me);

// position_inputs_239 Execution function
void PositionInputs239Run(PositionInputs239* me);

#endif // POSITION_INPUTS_239_H_