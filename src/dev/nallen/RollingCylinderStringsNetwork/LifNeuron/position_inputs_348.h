#ifndef POSITION_INPUTS_348_H_
#define POSITION_INPUTS_348_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_348 States
enum PositionInputs348States {
    POSITION_INPUTS_348_INTEGRATE,
    POSITION_INPUTS_348_LIMIT,
    POSITION_INPUTS_348_SPIKE,
    POSITION_INPUTS_348_REFRACTORY,
};

// position_inputs_348 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs348States state;
} PositionInputs348;

// position_inputs_348 Initialisation function
void PositionInputs348Init(PositionInputs348* me);

// position_inputs_348 Execution function
void PositionInputs348Run(PositionInputs348* me);

#endif // POSITION_INPUTS_348_H_