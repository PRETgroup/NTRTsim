#ifndef POSITION_INPUTS_79_H_
#define POSITION_INPUTS_79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_79 States
enum PositionInputs79States {
    POSITION_INPUTS_79_INTEGRATE,
    POSITION_INPUTS_79_LIMIT,
    POSITION_INPUTS_79_SPIKE,
    POSITION_INPUTS_79_REFRACTORY,
};

// position_inputs_79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs79States state;
} PositionInputs79;

// position_inputs_79 Initialisation function
void PositionInputs79Init(PositionInputs79* me);

// position_inputs_79 Execution function
void PositionInputs79Run(PositionInputs79* me);

#endif // POSITION_INPUTS_79_H_