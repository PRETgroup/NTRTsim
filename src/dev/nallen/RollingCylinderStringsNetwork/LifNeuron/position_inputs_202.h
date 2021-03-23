#ifndef POSITION_INPUTS_202_H_
#define POSITION_INPUTS_202_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_202 States
enum PositionInputs202States {
    POSITION_INPUTS_202_INTEGRATE,
    POSITION_INPUTS_202_LIMIT,
    POSITION_INPUTS_202_SPIKE,
    POSITION_INPUTS_202_REFRACTORY,
};

// position_inputs_202 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs202States state;
} PositionInputs202;

// position_inputs_202 Initialisation function
void PositionInputs202Init(PositionInputs202* me);

// position_inputs_202 Execution function
void PositionInputs202Run(PositionInputs202* me);

#endif // POSITION_INPUTS_202_H_