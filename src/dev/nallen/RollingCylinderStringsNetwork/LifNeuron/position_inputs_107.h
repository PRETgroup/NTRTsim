#ifndef POSITION_INPUTS_107_H_
#define POSITION_INPUTS_107_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_107 States
enum PositionInputs107States {
    POSITION_INPUTS_107_INTEGRATE,
    POSITION_INPUTS_107_LIMIT,
    POSITION_INPUTS_107_SPIKE,
    POSITION_INPUTS_107_REFRACTORY,
};

// position_inputs_107 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs107States state;
} PositionInputs107;

// position_inputs_107 Initialisation function
void PositionInputs107Init(PositionInputs107* me);

// position_inputs_107 Execution function
void PositionInputs107Run(PositionInputs107* me);

#endif // POSITION_INPUTS_107_H_