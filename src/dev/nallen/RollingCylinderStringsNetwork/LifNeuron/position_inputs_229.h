#ifndef POSITION_INPUTS_229_H_
#define POSITION_INPUTS_229_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_229 States
enum PositionInputs229States {
    POSITION_INPUTS_229_INTEGRATE,
    POSITION_INPUTS_229_LIMIT,
    POSITION_INPUTS_229_SPIKE,
    POSITION_INPUTS_229_REFRACTORY,
};

// position_inputs_229 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs229States state;
} PositionInputs229;

// position_inputs_229 Initialisation function
void PositionInputs229Init(PositionInputs229* me);

// position_inputs_229 Execution function
void PositionInputs229Run(PositionInputs229* me);

#endif // POSITION_INPUTS_229_H_