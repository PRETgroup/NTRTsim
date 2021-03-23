#ifndef POSITION_INPUTS_209_H_
#define POSITION_INPUTS_209_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_209 States
enum PositionInputs209States {
    POSITION_INPUTS_209_INTEGRATE,
    POSITION_INPUTS_209_LIMIT,
    POSITION_INPUTS_209_SPIKE,
    POSITION_INPUTS_209_REFRACTORY,
};

// position_inputs_209 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs209States state;
} PositionInputs209;

// position_inputs_209 Initialisation function
void PositionInputs209Init(PositionInputs209* me);

// position_inputs_209 Execution function
void PositionInputs209Run(PositionInputs209* me);

#endif // POSITION_INPUTS_209_H_