#ifndef POSITION_INPUTS_136_H_
#define POSITION_INPUTS_136_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_136 States
enum PositionInputs136States {
    POSITION_INPUTS_136_INTEGRATE,
    POSITION_INPUTS_136_LIMIT,
    POSITION_INPUTS_136_SPIKE,
    POSITION_INPUTS_136_REFRACTORY,
};

// position_inputs_136 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs136States state;
} PositionInputs136;

// position_inputs_136 Initialisation function
void PositionInputs136Init(PositionInputs136* me);

// position_inputs_136 Execution function
void PositionInputs136Run(PositionInputs136* me);

#endif // POSITION_INPUTS_136_H_