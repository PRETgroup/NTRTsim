#ifndef POSITION_INPUTS_52_H_
#define POSITION_INPUTS_52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_52 States
enum PositionInputs52States {
    POSITION_INPUTS_52_INTEGRATE,
    POSITION_INPUTS_52_LIMIT,
    POSITION_INPUTS_52_SPIKE,
    POSITION_INPUTS_52_REFRACTORY,
};

// position_inputs_52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs52States state;
} PositionInputs52;

// position_inputs_52 Initialisation function
void PositionInputs52Init(PositionInputs52* me);

// position_inputs_52 Execution function
void PositionInputs52Run(PositionInputs52* me);

#endif // POSITION_INPUTS_52_H_