#ifndef POSITION_INPUTS_77_H_
#define POSITION_INPUTS_77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_77 States
enum PositionInputs77States {
    POSITION_INPUTS_77_INTEGRATE,
    POSITION_INPUTS_77_LIMIT,
    POSITION_INPUTS_77_SPIKE,
    POSITION_INPUTS_77_REFRACTORY,
};

// position_inputs_77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs77States state;
} PositionInputs77;

// position_inputs_77 Initialisation function
void PositionInputs77Init(PositionInputs77* me);

// position_inputs_77 Execution function
void PositionInputs77Run(PositionInputs77* me);

#endif // POSITION_INPUTS_77_H_