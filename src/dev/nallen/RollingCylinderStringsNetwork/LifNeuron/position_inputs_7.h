#ifndef POSITION_INPUTS_7_H_
#define POSITION_INPUTS_7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_7 States
enum PositionInputs7States {
    POSITION_INPUTS_7_INTEGRATE,
    POSITION_INPUTS_7_LIMIT,
    POSITION_INPUTS_7_SPIKE,
    POSITION_INPUTS_7_REFRACTORY,
};

// position_inputs_7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs7States state;
} PositionInputs7;

// position_inputs_7 Initialisation function
void PositionInputs7Init(PositionInputs7* me);

// position_inputs_7 Execution function
void PositionInputs7Run(PositionInputs7* me);

#endif // POSITION_INPUTS_7_H_