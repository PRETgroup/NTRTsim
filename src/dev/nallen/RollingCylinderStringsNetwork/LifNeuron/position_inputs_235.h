#ifndef POSITION_INPUTS_235_H_
#define POSITION_INPUTS_235_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_235 States
enum PositionInputs235States {
    POSITION_INPUTS_235_INTEGRATE,
    POSITION_INPUTS_235_LIMIT,
    POSITION_INPUTS_235_SPIKE,
    POSITION_INPUTS_235_REFRACTORY,
};

// position_inputs_235 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs235States state;
} PositionInputs235;

// position_inputs_235 Initialisation function
void PositionInputs235Init(PositionInputs235* me);

// position_inputs_235 Execution function
void PositionInputs235Run(PositionInputs235* me);

#endif // POSITION_INPUTS_235_H_