#ifndef POSITION_INPUTS_356_H_
#define POSITION_INPUTS_356_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_356 States
enum PositionInputs356States {
    POSITION_INPUTS_356_INTEGRATE,
    POSITION_INPUTS_356_LIMIT,
    POSITION_INPUTS_356_SPIKE,
    POSITION_INPUTS_356_REFRACTORY,
};

// position_inputs_356 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs356States state;
} PositionInputs356;

// position_inputs_356 Initialisation function
void PositionInputs356Init(PositionInputs356* me);

// position_inputs_356 Execution function
void PositionInputs356Run(PositionInputs356* me);

#endif // POSITION_INPUTS_356_H_