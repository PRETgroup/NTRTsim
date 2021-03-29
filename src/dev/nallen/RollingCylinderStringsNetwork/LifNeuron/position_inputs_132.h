#ifndef POSITION_INPUTS_132_H_
#define POSITION_INPUTS_132_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_132 States
enum PositionInputs132States {
    POSITION_INPUTS_132_INTEGRATE,
    POSITION_INPUTS_132_LIMIT,
    POSITION_INPUTS_132_SPIKE,
    POSITION_INPUTS_132_REFRACTORY,
};

// position_inputs_132 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs132States state;
} PositionInputs132;

// position_inputs_132 Initialisation function
void PositionInputs132Init(PositionInputs132* me);

// position_inputs_132 Execution function
void PositionInputs132Run(PositionInputs132* me);

#endif // POSITION_INPUTS_132_H_