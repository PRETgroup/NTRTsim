#ifndef POSITION_INPUTS_43_H_
#define POSITION_INPUTS_43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_43 States
enum PositionInputs43States {
    POSITION_INPUTS_43_INTEGRATE,
    POSITION_INPUTS_43_LIMIT,
    POSITION_INPUTS_43_SPIKE,
    POSITION_INPUTS_43_REFRACTORY,
};

// position_inputs_43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs43States state;
} PositionInputs43;

// position_inputs_43 Initialisation function
void PositionInputs43Init(PositionInputs43* me);

// position_inputs_43 Execution function
void PositionInputs43Run(PositionInputs43* me);

#endif // POSITION_INPUTS_43_H_