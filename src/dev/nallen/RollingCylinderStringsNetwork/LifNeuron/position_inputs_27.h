#ifndef POSITION_INPUTS_27_H_
#define POSITION_INPUTS_27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_27 States
enum PositionInputs27States {
    POSITION_INPUTS_27_INTEGRATE,
    POSITION_INPUTS_27_LIMIT,
    POSITION_INPUTS_27_SPIKE,
    POSITION_INPUTS_27_REFRACTORY,
};

// position_inputs_27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs27States state;
} PositionInputs27;

// position_inputs_27 Initialisation function
void PositionInputs27Init(PositionInputs27* me);

// position_inputs_27 Execution function
void PositionInputs27Run(PositionInputs27* me);

#endif // POSITION_INPUTS_27_H_