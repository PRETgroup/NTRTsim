#ifndef POSITION_INPUTS_362_H_
#define POSITION_INPUTS_362_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_362 States
enum PositionInputs362States {
    POSITION_INPUTS_362_INTEGRATE,
    POSITION_INPUTS_362_LIMIT,
    POSITION_INPUTS_362_SPIKE,
    POSITION_INPUTS_362_REFRACTORY,
};

// position_inputs_362 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs362States state;
} PositionInputs362;

// position_inputs_362 Initialisation function
void PositionInputs362Init(PositionInputs362* me);

// position_inputs_362 Execution function
void PositionInputs362Run(PositionInputs362* me);

#endif // POSITION_INPUTS_362_H_