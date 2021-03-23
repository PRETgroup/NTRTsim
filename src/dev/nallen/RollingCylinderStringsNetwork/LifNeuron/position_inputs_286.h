#ifndef POSITION_INPUTS_286_H_
#define POSITION_INPUTS_286_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_286 States
enum PositionInputs286States {
    POSITION_INPUTS_286_INTEGRATE,
    POSITION_INPUTS_286_LIMIT,
    POSITION_INPUTS_286_SPIKE,
    POSITION_INPUTS_286_REFRACTORY,
};

// position_inputs_286 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs286States state;
} PositionInputs286;

// position_inputs_286 Initialisation function
void PositionInputs286Init(PositionInputs286* me);

// position_inputs_286 Execution function
void PositionInputs286Run(PositionInputs286* me);

#endif // POSITION_INPUTS_286_H_