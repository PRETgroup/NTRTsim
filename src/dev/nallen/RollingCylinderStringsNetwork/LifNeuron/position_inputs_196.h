#ifndef POSITION_INPUTS_196_H_
#define POSITION_INPUTS_196_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_196 States
enum PositionInputs196States {
    POSITION_INPUTS_196_INTEGRATE,
    POSITION_INPUTS_196_LIMIT,
    POSITION_INPUTS_196_SPIKE,
    POSITION_INPUTS_196_REFRACTORY,
};

// position_inputs_196 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs196States state;
} PositionInputs196;

// position_inputs_196 Initialisation function
void PositionInputs196Init(PositionInputs196* me);

// position_inputs_196 Execution function
void PositionInputs196Run(PositionInputs196* me);

#endif // POSITION_INPUTS_196_H_