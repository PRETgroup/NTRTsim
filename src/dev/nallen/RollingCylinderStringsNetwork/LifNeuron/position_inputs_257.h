#ifndef POSITION_INPUTS_257_H_
#define POSITION_INPUTS_257_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_257 States
enum PositionInputs257States {
    POSITION_INPUTS_257_INTEGRATE,
    POSITION_INPUTS_257_LIMIT,
    POSITION_INPUTS_257_SPIKE,
    POSITION_INPUTS_257_REFRACTORY,
};

// position_inputs_257 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs257States state;
} PositionInputs257;

// position_inputs_257 Initialisation function
void PositionInputs257Init(PositionInputs257* me);

// position_inputs_257 Execution function
void PositionInputs257Run(PositionInputs257* me);

#endif // POSITION_INPUTS_257_H_