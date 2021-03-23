#ifndef POSITION_INPUTS_310_H_
#define POSITION_INPUTS_310_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_310 States
enum PositionInputs310States {
    POSITION_INPUTS_310_INTEGRATE,
    POSITION_INPUTS_310_LIMIT,
    POSITION_INPUTS_310_SPIKE,
    POSITION_INPUTS_310_REFRACTORY,
};

// position_inputs_310 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs310States state;
} PositionInputs310;

// position_inputs_310 Initialisation function
void PositionInputs310Init(PositionInputs310* me);

// position_inputs_310 Execution function
void PositionInputs310Run(PositionInputs310* me);

#endif // POSITION_INPUTS_310_H_