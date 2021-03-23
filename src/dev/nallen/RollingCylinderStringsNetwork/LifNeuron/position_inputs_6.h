#ifndef POSITION_INPUTS_6_H_
#define POSITION_INPUTS_6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_6 States
enum PositionInputs6States {
    POSITION_INPUTS_6_INTEGRATE,
    POSITION_INPUTS_6_LIMIT,
    POSITION_INPUTS_6_SPIKE,
    POSITION_INPUTS_6_REFRACTORY,
};

// position_inputs_6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs6States state;
} PositionInputs6;

// position_inputs_6 Initialisation function
void PositionInputs6Init(PositionInputs6* me);

// position_inputs_6 Execution function
void PositionInputs6Run(PositionInputs6* me);

#endif // POSITION_INPUTS_6_H_