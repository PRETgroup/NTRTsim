#ifndef POSITION_INPUTS_16_H_
#define POSITION_INPUTS_16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_16 States
enum PositionInputs16States {
    POSITION_INPUTS_16_INTEGRATE,
    POSITION_INPUTS_16_LIMIT,
    POSITION_INPUTS_16_SPIKE,
    POSITION_INPUTS_16_REFRACTORY,
};

// position_inputs_16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs16States state;
} PositionInputs16;

// position_inputs_16 Initialisation function
void PositionInputs16Init(PositionInputs16* me);

// position_inputs_16 Execution function
void PositionInputs16Run(PositionInputs16* me);

#endif // POSITION_INPUTS_16_H_