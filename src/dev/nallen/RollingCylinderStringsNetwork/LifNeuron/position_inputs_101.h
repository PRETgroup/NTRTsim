#ifndef POSITION_INPUTS_101_H_
#define POSITION_INPUTS_101_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_101 States
enum PositionInputs101States {
    POSITION_INPUTS_101_INTEGRATE,
    POSITION_INPUTS_101_LIMIT,
    POSITION_INPUTS_101_SPIKE,
    POSITION_INPUTS_101_REFRACTORY,
};

// position_inputs_101 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs101States state;
} PositionInputs101;

// position_inputs_101 Initialisation function
void PositionInputs101Init(PositionInputs101* me);

// position_inputs_101 Execution function
void PositionInputs101Run(PositionInputs101* me);

#endif // POSITION_INPUTS_101_H_