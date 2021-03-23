#ifndef POSITION_INPUTS_319_H_
#define POSITION_INPUTS_319_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_319 States
enum PositionInputs319States {
    POSITION_INPUTS_319_INTEGRATE,
    POSITION_INPUTS_319_LIMIT,
    POSITION_INPUTS_319_SPIKE,
    POSITION_INPUTS_319_REFRACTORY,
};

// position_inputs_319 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs319States state;
} PositionInputs319;

// position_inputs_319 Initialisation function
void PositionInputs319Init(PositionInputs319* me);

// position_inputs_319 Execution function
void PositionInputs319Run(PositionInputs319* me);

#endif // POSITION_INPUTS_319_H_