#ifndef POSITION_INPUTS_54_H_
#define POSITION_INPUTS_54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_54 States
enum PositionInputs54States {
    POSITION_INPUTS_54_INTEGRATE,
    POSITION_INPUTS_54_LIMIT,
    POSITION_INPUTS_54_SPIKE,
    POSITION_INPUTS_54_REFRACTORY,
};

// position_inputs_54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs54States state;
} PositionInputs54;

// position_inputs_54 Initialisation function
void PositionInputs54Init(PositionInputs54* me);

// position_inputs_54 Execution function
void PositionInputs54Run(PositionInputs54* me);

#endif // POSITION_INPUTS_54_H_