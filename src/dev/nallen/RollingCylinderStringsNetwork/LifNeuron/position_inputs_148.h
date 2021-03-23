#ifndef POSITION_INPUTS_148_H_
#define POSITION_INPUTS_148_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_148 States
enum PositionInputs148States {
    POSITION_INPUTS_148_INTEGRATE,
    POSITION_INPUTS_148_LIMIT,
    POSITION_INPUTS_148_SPIKE,
    POSITION_INPUTS_148_REFRACTORY,
};

// position_inputs_148 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs148States state;
} PositionInputs148;

// position_inputs_148 Initialisation function
void PositionInputs148Init(PositionInputs148* me);

// position_inputs_148 Execution function
void PositionInputs148Run(PositionInputs148* me);

#endif // POSITION_INPUTS_148_H_