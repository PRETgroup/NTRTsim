#ifndef POSITION_INPUTS_152_H_
#define POSITION_INPUTS_152_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_152 States
enum PositionInputs152States {
    POSITION_INPUTS_152_INTEGRATE,
    POSITION_INPUTS_152_LIMIT,
    POSITION_INPUTS_152_SPIKE,
    POSITION_INPUTS_152_REFRACTORY,
};

// position_inputs_152 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs152States state;
} PositionInputs152;

// position_inputs_152 Initialisation function
void PositionInputs152Init(PositionInputs152* me);

// position_inputs_152 Execution function
void PositionInputs152Run(PositionInputs152* me);

#endif // POSITION_INPUTS_152_H_