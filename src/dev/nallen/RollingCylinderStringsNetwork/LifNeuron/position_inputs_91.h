#ifndef POSITION_INPUTS_91_H_
#define POSITION_INPUTS_91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_91 States
enum PositionInputs91States {
    POSITION_INPUTS_91_INTEGRATE,
    POSITION_INPUTS_91_LIMIT,
    POSITION_INPUTS_91_SPIKE,
    POSITION_INPUTS_91_REFRACTORY,
};

// position_inputs_91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs91States state;
} PositionInputs91;

// position_inputs_91 Initialisation function
void PositionInputs91Init(PositionInputs91* me);

// position_inputs_91 Execution function
void PositionInputs91Run(PositionInputs91* me);

#endif // POSITION_INPUTS_91_H_