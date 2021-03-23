#ifndef POSITION_INPUTS_325_H_
#define POSITION_INPUTS_325_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_325 States
enum PositionInputs325States {
    POSITION_INPUTS_325_INTEGRATE,
    POSITION_INPUTS_325_LIMIT,
    POSITION_INPUTS_325_SPIKE,
    POSITION_INPUTS_325_REFRACTORY,
};

// position_inputs_325 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs325States state;
} PositionInputs325;

// position_inputs_325 Initialisation function
void PositionInputs325Init(PositionInputs325* me);

// position_inputs_325 Execution function
void PositionInputs325Run(PositionInputs325* me);

#endif // POSITION_INPUTS_325_H_