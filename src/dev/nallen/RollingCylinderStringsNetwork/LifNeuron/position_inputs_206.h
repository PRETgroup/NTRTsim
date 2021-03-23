#ifndef POSITION_INPUTS_206_H_
#define POSITION_INPUTS_206_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_206 States
enum PositionInputs206States {
    POSITION_INPUTS_206_INTEGRATE,
    POSITION_INPUTS_206_LIMIT,
    POSITION_INPUTS_206_SPIKE,
    POSITION_INPUTS_206_REFRACTORY,
};

// position_inputs_206 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs206States state;
} PositionInputs206;

// position_inputs_206 Initialisation function
void PositionInputs206Init(PositionInputs206* me);

// position_inputs_206 Execution function
void PositionInputs206Run(PositionInputs206* me);

#endif // POSITION_INPUTS_206_H_