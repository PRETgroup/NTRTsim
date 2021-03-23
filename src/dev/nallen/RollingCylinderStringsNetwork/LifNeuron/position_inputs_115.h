#ifndef POSITION_INPUTS_115_H_
#define POSITION_INPUTS_115_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_115 States
enum PositionInputs115States {
    POSITION_INPUTS_115_INTEGRATE,
    POSITION_INPUTS_115_LIMIT,
    POSITION_INPUTS_115_SPIKE,
    POSITION_INPUTS_115_REFRACTORY,
};

// position_inputs_115 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs115States state;
} PositionInputs115;

// position_inputs_115 Initialisation function
void PositionInputs115Init(PositionInputs115* me);

// position_inputs_115 Execution function
void PositionInputs115Run(PositionInputs115* me);

#endif // POSITION_INPUTS_115_H_