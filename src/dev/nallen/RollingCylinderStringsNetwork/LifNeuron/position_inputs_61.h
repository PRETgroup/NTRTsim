#ifndef POSITION_INPUTS_61_H_
#define POSITION_INPUTS_61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_61 States
enum PositionInputs61States {
    POSITION_INPUTS_61_INTEGRATE,
    POSITION_INPUTS_61_LIMIT,
    POSITION_INPUTS_61_SPIKE,
    POSITION_INPUTS_61_REFRACTORY,
};

// position_inputs_61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs61States state;
} PositionInputs61;

// position_inputs_61 Initialisation function
void PositionInputs61Init(PositionInputs61* me);

// position_inputs_61 Execution function
void PositionInputs61Run(PositionInputs61* me);

#endif // POSITION_INPUTS_61_H_