#ifndef POSITION_INPUTS_330_H_
#define POSITION_INPUTS_330_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_330 States
enum PositionInputs330States {
    POSITION_INPUTS_330_INTEGRATE,
    POSITION_INPUTS_330_LIMIT,
    POSITION_INPUTS_330_SPIKE,
    POSITION_INPUTS_330_REFRACTORY,
};

// position_inputs_330 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs330States state;
} PositionInputs330;

// position_inputs_330 Initialisation function
void PositionInputs330Init(PositionInputs330* me);

// position_inputs_330 Execution function
void PositionInputs330Run(PositionInputs330* me);

#endif // POSITION_INPUTS_330_H_