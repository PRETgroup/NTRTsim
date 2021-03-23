#ifndef POSITION_INPUTS_355_H_
#define POSITION_INPUTS_355_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_355 States
enum PositionInputs355States {
    POSITION_INPUTS_355_INTEGRATE,
    POSITION_INPUTS_355_LIMIT,
    POSITION_INPUTS_355_SPIKE,
    POSITION_INPUTS_355_REFRACTORY,
};

// position_inputs_355 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs355States state;
} PositionInputs355;

// position_inputs_355 Initialisation function
void PositionInputs355Init(PositionInputs355* me);

// position_inputs_355 Execution function
void PositionInputs355Run(PositionInputs355* me);

#endif // POSITION_INPUTS_355_H_