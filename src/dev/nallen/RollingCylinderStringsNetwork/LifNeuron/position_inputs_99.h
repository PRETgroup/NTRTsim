#ifndef POSITION_INPUTS_99_H_
#define POSITION_INPUTS_99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_99 States
enum PositionInputs99States {
    POSITION_INPUTS_99_INTEGRATE,
    POSITION_INPUTS_99_LIMIT,
    POSITION_INPUTS_99_SPIKE,
    POSITION_INPUTS_99_REFRACTORY,
};

// position_inputs_99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs99States state;
} PositionInputs99;

// position_inputs_99 Initialisation function
void PositionInputs99Init(PositionInputs99* me);

// position_inputs_99 Execution function
void PositionInputs99Run(PositionInputs99* me);

#endif // POSITION_INPUTS_99_H_