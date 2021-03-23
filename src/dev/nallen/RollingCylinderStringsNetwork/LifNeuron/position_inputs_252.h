#ifndef POSITION_INPUTS_252_H_
#define POSITION_INPUTS_252_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_252 States
enum PositionInputs252States {
    POSITION_INPUTS_252_INTEGRATE,
    POSITION_INPUTS_252_LIMIT,
    POSITION_INPUTS_252_SPIKE,
    POSITION_INPUTS_252_REFRACTORY,
};

// position_inputs_252 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs252States state;
} PositionInputs252;

// position_inputs_252 Initialisation function
void PositionInputs252Init(PositionInputs252* me);

// position_inputs_252 Execution function
void PositionInputs252Run(PositionInputs252* me);

#endif // POSITION_INPUTS_252_H_