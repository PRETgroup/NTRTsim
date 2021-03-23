#ifndef POSITION_INPUTS_237_H_
#define POSITION_INPUTS_237_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_237 States
enum PositionInputs237States {
    POSITION_INPUTS_237_INTEGRATE,
    POSITION_INPUTS_237_LIMIT,
    POSITION_INPUTS_237_SPIKE,
    POSITION_INPUTS_237_REFRACTORY,
};

// position_inputs_237 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs237States state;
} PositionInputs237;

// position_inputs_237 Initialisation function
void PositionInputs237Init(PositionInputs237* me);

// position_inputs_237 Execution function
void PositionInputs237Run(PositionInputs237* me);

#endif // POSITION_INPUTS_237_H_