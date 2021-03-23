#ifndef POSITION_INPUTS_96_H_
#define POSITION_INPUTS_96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_96 States
enum PositionInputs96States {
    POSITION_INPUTS_96_INTEGRATE,
    POSITION_INPUTS_96_LIMIT,
    POSITION_INPUTS_96_SPIKE,
    POSITION_INPUTS_96_REFRACTORY,
};

// position_inputs_96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs96States state;
} PositionInputs96;

// position_inputs_96 Initialisation function
void PositionInputs96Init(PositionInputs96* me);

// position_inputs_96 Execution function
void PositionInputs96Run(PositionInputs96* me);

#endif // POSITION_INPUTS_96_H_