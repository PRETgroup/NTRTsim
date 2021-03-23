#ifndef POSITION_INPUTS_366_H_
#define POSITION_INPUTS_366_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_366 States
enum PositionInputs366States {
    POSITION_INPUTS_366_INTEGRATE,
    POSITION_INPUTS_366_LIMIT,
    POSITION_INPUTS_366_SPIKE,
    POSITION_INPUTS_366_REFRACTORY,
};

// position_inputs_366 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs366States state;
} PositionInputs366;

// position_inputs_366 Initialisation function
void PositionInputs366Init(PositionInputs366* me);

// position_inputs_366 Execution function
void PositionInputs366Run(PositionInputs366* me);

#endif // POSITION_INPUTS_366_H_