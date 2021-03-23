#ifndef POSITION_INPUTS_204_H_
#define POSITION_INPUTS_204_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_204 States
enum PositionInputs204States {
    POSITION_INPUTS_204_INTEGRATE,
    POSITION_INPUTS_204_LIMIT,
    POSITION_INPUTS_204_SPIKE,
    POSITION_INPUTS_204_REFRACTORY,
};

// position_inputs_204 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs204States state;
} PositionInputs204;

// position_inputs_204 Initialisation function
void PositionInputs204Init(PositionInputs204* me);

// position_inputs_204 Execution function
void PositionInputs204Run(PositionInputs204* me);

#endif // POSITION_INPUTS_204_H_