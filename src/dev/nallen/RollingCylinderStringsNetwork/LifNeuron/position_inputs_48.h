#ifndef POSITION_INPUTS_48_H_
#define POSITION_INPUTS_48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_48 States
enum PositionInputs48States {
    POSITION_INPUTS_48_INTEGRATE,
    POSITION_INPUTS_48_LIMIT,
    POSITION_INPUTS_48_SPIKE,
    POSITION_INPUTS_48_REFRACTORY,
};

// position_inputs_48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs48States state;
} PositionInputs48;

// position_inputs_48 Initialisation function
void PositionInputs48Init(PositionInputs48* me);

// position_inputs_48 Execution function
void PositionInputs48Run(PositionInputs48* me);

#endif // POSITION_INPUTS_48_H_