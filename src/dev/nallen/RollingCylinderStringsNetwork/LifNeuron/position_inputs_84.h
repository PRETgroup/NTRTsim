#ifndef POSITION_INPUTS_84_H_
#define POSITION_INPUTS_84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_84 States
enum PositionInputs84States {
    POSITION_INPUTS_84_INTEGRATE,
    POSITION_INPUTS_84_LIMIT,
    POSITION_INPUTS_84_SPIKE,
    POSITION_INPUTS_84_REFRACTORY,
};

// position_inputs_84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs84States state;
} PositionInputs84;

// position_inputs_84 Initialisation function
void PositionInputs84Init(PositionInputs84* me);

// position_inputs_84 Execution function
void PositionInputs84Run(PositionInputs84* me);

#endif // POSITION_INPUTS_84_H_