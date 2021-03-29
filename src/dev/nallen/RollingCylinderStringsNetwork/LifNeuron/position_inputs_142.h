#ifndef POSITION_INPUTS_142_H_
#define POSITION_INPUTS_142_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_142 States
enum PositionInputs142States {
    POSITION_INPUTS_142_INTEGRATE,
    POSITION_INPUTS_142_LIMIT,
    POSITION_INPUTS_142_SPIKE,
    POSITION_INPUTS_142_REFRACTORY,
};

// position_inputs_142 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs142States state;
} PositionInputs142;

// position_inputs_142 Initialisation function
void PositionInputs142Init(PositionInputs142* me);

// position_inputs_142 Execution function
void PositionInputs142Run(PositionInputs142* me);

#endif // POSITION_INPUTS_142_H_