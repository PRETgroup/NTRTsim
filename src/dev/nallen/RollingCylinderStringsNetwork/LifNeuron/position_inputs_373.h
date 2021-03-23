#ifndef POSITION_INPUTS_373_H_
#define POSITION_INPUTS_373_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_373 States
enum PositionInputs373States {
    POSITION_INPUTS_373_INTEGRATE,
    POSITION_INPUTS_373_LIMIT,
    POSITION_INPUTS_373_SPIKE,
    POSITION_INPUTS_373_REFRACTORY,
};

// position_inputs_373 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs373States state;
} PositionInputs373;

// position_inputs_373 Initialisation function
void PositionInputs373Init(PositionInputs373* me);

// position_inputs_373 Execution function
void PositionInputs373Run(PositionInputs373* me);

#endif // POSITION_INPUTS_373_H_