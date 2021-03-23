#ifndef POSITION_INPUTS_98_H_
#define POSITION_INPUTS_98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_98 States
enum PositionInputs98States {
    POSITION_INPUTS_98_INTEGRATE,
    POSITION_INPUTS_98_LIMIT,
    POSITION_INPUTS_98_SPIKE,
    POSITION_INPUTS_98_REFRACTORY,
};

// position_inputs_98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs98States state;
} PositionInputs98;

// position_inputs_98 Initialisation function
void PositionInputs98Init(PositionInputs98* me);

// position_inputs_98 Execution function
void PositionInputs98Run(PositionInputs98* me);

#endif // POSITION_INPUTS_98_H_