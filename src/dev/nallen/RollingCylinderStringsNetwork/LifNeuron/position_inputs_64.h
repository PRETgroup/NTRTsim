#ifndef POSITION_INPUTS_64_H_
#define POSITION_INPUTS_64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_64 States
enum PositionInputs64States {
    POSITION_INPUTS_64_INTEGRATE,
    POSITION_INPUTS_64_LIMIT,
    POSITION_INPUTS_64_SPIKE,
    POSITION_INPUTS_64_REFRACTORY,
};

// position_inputs_64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs64States state;
} PositionInputs64;

// position_inputs_64 Initialisation function
void PositionInputs64Init(PositionInputs64* me);

// position_inputs_64 Execution function
void PositionInputs64Run(PositionInputs64* me);

#endif // POSITION_INPUTS_64_H_