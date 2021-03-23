#ifndef POSITION_INPUTS_53_H_
#define POSITION_INPUTS_53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_53 States
enum PositionInputs53States {
    POSITION_INPUTS_53_INTEGRATE,
    POSITION_INPUTS_53_LIMIT,
    POSITION_INPUTS_53_SPIKE,
    POSITION_INPUTS_53_REFRACTORY,
};

// position_inputs_53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs53States state;
} PositionInputs53;

// position_inputs_53 Initialisation function
void PositionInputs53Init(PositionInputs53* me);

// position_inputs_53 Execution function
void PositionInputs53Run(PositionInputs53* me);

#endif // POSITION_INPUTS_53_H_