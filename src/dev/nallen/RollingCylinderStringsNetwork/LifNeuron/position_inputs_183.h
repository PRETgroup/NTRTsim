#ifndef POSITION_INPUTS_183_H_
#define POSITION_INPUTS_183_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_183 States
enum PositionInputs183States {
    POSITION_INPUTS_183_INTEGRATE,
    POSITION_INPUTS_183_LIMIT,
    POSITION_INPUTS_183_SPIKE,
    POSITION_INPUTS_183_REFRACTORY,
};

// position_inputs_183 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs183States state;
} PositionInputs183;

// position_inputs_183 Initialisation function
void PositionInputs183Init(PositionInputs183* me);

// position_inputs_183 Execution function
void PositionInputs183Run(PositionInputs183* me);

#endif // POSITION_INPUTS_183_H_