#ifndef POSITION_INPUTS_377_H_
#define POSITION_INPUTS_377_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_377 States
enum PositionInputs377States {
    POSITION_INPUTS_377_INTEGRATE,
    POSITION_INPUTS_377_LIMIT,
    POSITION_INPUTS_377_SPIKE,
    POSITION_INPUTS_377_REFRACTORY,
};

// position_inputs_377 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs377States state;
} PositionInputs377;

// position_inputs_377 Initialisation function
void PositionInputs377Init(PositionInputs377* me);

// position_inputs_377 Execution function
void PositionInputs377Run(PositionInputs377* me);

#endif // POSITION_INPUTS_377_H_