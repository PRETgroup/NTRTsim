#ifndef POSITION_INPUTS_86_H_
#define POSITION_INPUTS_86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_86 States
enum PositionInputs86States {
    POSITION_INPUTS_86_INTEGRATE,
    POSITION_INPUTS_86_LIMIT,
    POSITION_INPUTS_86_SPIKE,
    POSITION_INPUTS_86_REFRACTORY,
};

// position_inputs_86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs86States state;
} PositionInputs86;

// position_inputs_86 Initialisation function
void PositionInputs86Init(PositionInputs86* me);

// position_inputs_86 Execution function
void PositionInputs86Run(PositionInputs86* me);

#endif // POSITION_INPUTS_86_H_