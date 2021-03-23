#ifndef POSITION_INPUTS_74_H_
#define POSITION_INPUTS_74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_74 States
enum PositionInputs74States {
    POSITION_INPUTS_74_INTEGRATE,
    POSITION_INPUTS_74_LIMIT,
    POSITION_INPUTS_74_SPIKE,
    POSITION_INPUTS_74_REFRACTORY,
};

// position_inputs_74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs74States state;
} PositionInputs74;

// position_inputs_74 Initialisation function
void PositionInputs74Init(PositionInputs74* me);

// position_inputs_74 Execution function
void PositionInputs74Run(PositionInputs74* me);

#endif // POSITION_INPUTS_74_H_