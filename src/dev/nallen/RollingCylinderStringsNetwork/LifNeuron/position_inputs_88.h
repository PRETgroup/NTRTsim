#ifndef POSITION_INPUTS_88_H_
#define POSITION_INPUTS_88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_88 States
enum PositionInputs88States {
    POSITION_INPUTS_88_INTEGRATE,
    POSITION_INPUTS_88_LIMIT,
    POSITION_INPUTS_88_SPIKE,
    POSITION_INPUTS_88_REFRACTORY,
};

// position_inputs_88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs88States state;
} PositionInputs88;

// position_inputs_88 Initialisation function
void PositionInputs88Init(PositionInputs88* me);

// position_inputs_88 Execution function
void PositionInputs88Run(PositionInputs88* me);

#endif // POSITION_INPUTS_88_H_