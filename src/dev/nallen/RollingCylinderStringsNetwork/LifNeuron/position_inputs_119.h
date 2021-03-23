#ifndef POSITION_INPUTS_119_H_
#define POSITION_INPUTS_119_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_119 States
enum PositionInputs119States {
    POSITION_INPUTS_119_INTEGRATE,
    POSITION_INPUTS_119_LIMIT,
    POSITION_INPUTS_119_SPIKE,
    POSITION_INPUTS_119_REFRACTORY,
};

// position_inputs_119 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs119States state;
} PositionInputs119;

// position_inputs_119 Initialisation function
void PositionInputs119Init(PositionInputs119* me);

// position_inputs_119 Execution function
void PositionInputs119Run(PositionInputs119* me);

#endif // POSITION_INPUTS_119_H_