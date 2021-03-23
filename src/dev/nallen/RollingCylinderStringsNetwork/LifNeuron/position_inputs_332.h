#ifndef POSITION_INPUTS_332_H_
#define POSITION_INPUTS_332_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_332 States
enum PositionInputs332States {
    POSITION_INPUTS_332_INTEGRATE,
    POSITION_INPUTS_332_LIMIT,
    POSITION_INPUTS_332_SPIKE,
    POSITION_INPUTS_332_REFRACTORY,
};

// position_inputs_332 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs332States state;
} PositionInputs332;

// position_inputs_332 Initialisation function
void PositionInputs332Init(PositionInputs332* me);

// position_inputs_332 Execution function
void PositionInputs332Run(PositionInputs332* me);

#endif // POSITION_INPUTS_332_H_