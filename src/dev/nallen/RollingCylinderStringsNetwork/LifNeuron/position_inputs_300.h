#ifndef POSITION_INPUTS_300_H_
#define POSITION_INPUTS_300_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_300 States
enum PositionInputs300States {
    POSITION_INPUTS_300_INTEGRATE,
    POSITION_INPUTS_300_LIMIT,
    POSITION_INPUTS_300_SPIKE,
    POSITION_INPUTS_300_REFRACTORY,
};

// position_inputs_300 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs300States state;
} PositionInputs300;

// position_inputs_300 Initialisation function
void PositionInputs300Init(PositionInputs300* me);

// position_inputs_300 Execution function
void PositionInputs300Run(PositionInputs300* me);

#endif // POSITION_INPUTS_300_H_