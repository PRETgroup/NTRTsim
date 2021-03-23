#ifndef POSITION_INPUTS_363_H_
#define POSITION_INPUTS_363_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_363 States
enum PositionInputs363States {
    POSITION_INPUTS_363_INTEGRATE,
    POSITION_INPUTS_363_LIMIT,
    POSITION_INPUTS_363_SPIKE,
    POSITION_INPUTS_363_REFRACTORY,
};

// position_inputs_363 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs363States state;
} PositionInputs363;

// position_inputs_363 Initialisation function
void PositionInputs363Init(PositionInputs363* me);

// position_inputs_363 Execution function
void PositionInputs363Run(PositionInputs363* me);

#endif // POSITION_INPUTS_363_H_