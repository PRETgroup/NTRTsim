#ifndef POSITION_INPUTS_120_H_
#define POSITION_INPUTS_120_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_120 States
enum PositionInputs120States {
    POSITION_INPUTS_120_INTEGRATE,
    POSITION_INPUTS_120_LIMIT,
    POSITION_INPUTS_120_SPIKE,
    POSITION_INPUTS_120_REFRACTORY,
};

// position_inputs_120 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs120States state;
} PositionInputs120;

// position_inputs_120 Initialisation function
void PositionInputs120Init(PositionInputs120* me);

// position_inputs_120 Execution function
void PositionInputs120Run(PositionInputs120* me);

#endif // POSITION_INPUTS_120_H_