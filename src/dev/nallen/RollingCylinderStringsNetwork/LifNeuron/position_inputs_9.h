#ifndef POSITION_INPUTS_9_H_
#define POSITION_INPUTS_9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_9 States
enum PositionInputs9States {
    POSITION_INPUTS_9_INTEGRATE,
    POSITION_INPUTS_9_LIMIT,
    POSITION_INPUTS_9_SPIKE,
    POSITION_INPUTS_9_REFRACTORY,
};

// position_inputs_9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs9States state;
} PositionInputs9;

// position_inputs_9 Initialisation function
void PositionInputs9Init(PositionInputs9* me);

// position_inputs_9 Execution function
void PositionInputs9Run(PositionInputs9* me);

#endif // POSITION_INPUTS_9_H_