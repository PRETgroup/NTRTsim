#ifndef POSITION_INPUTS_87_H_
#define POSITION_INPUTS_87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_87 States
enum PositionInputs87States {
    POSITION_INPUTS_87_INTEGRATE,
    POSITION_INPUTS_87_LIMIT,
    POSITION_INPUTS_87_SPIKE,
    POSITION_INPUTS_87_REFRACTORY,
};

// position_inputs_87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs87States state;
} PositionInputs87;

// position_inputs_87 Initialisation function
void PositionInputs87Init(PositionInputs87* me);

// position_inputs_87 Execution function
void PositionInputs87Run(PositionInputs87* me);

#endif // POSITION_INPUTS_87_H_