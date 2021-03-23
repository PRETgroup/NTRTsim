#ifndef POSITION_INPUTS_216_H_
#define POSITION_INPUTS_216_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_216 States
enum PositionInputs216States {
    POSITION_INPUTS_216_INTEGRATE,
    POSITION_INPUTS_216_LIMIT,
    POSITION_INPUTS_216_SPIKE,
    POSITION_INPUTS_216_REFRACTORY,
};

// position_inputs_216 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs216States state;
} PositionInputs216;

// position_inputs_216 Initialisation function
void PositionInputs216Init(PositionInputs216* me);

// position_inputs_216 Execution function
void PositionInputs216Run(PositionInputs216* me);

#endif // POSITION_INPUTS_216_H_