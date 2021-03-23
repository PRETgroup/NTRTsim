#ifndef POSITION_INPUTS_302_H_
#define POSITION_INPUTS_302_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_302 States
enum PositionInputs302States {
    POSITION_INPUTS_302_INTEGRATE,
    POSITION_INPUTS_302_LIMIT,
    POSITION_INPUTS_302_SPIKE,
    POSITION_INPUTS_302_REFRACTORY,
};

// position_inputs_302 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs302States state;
} PositionInputs302;

// position_inputs_302 Initialisation function
void PositionInputs302Init(PositionInputs302* me);

// position_inputs_302 Execution function
void PositionInputs302Run(PositionInputs302* me);

#endif // POSITION_INPUTS_302_H_