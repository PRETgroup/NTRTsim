#ifndef POSITION_INPUTS_248_H_
#define POSITION_INPUTS_248_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_248 States
enum PositionInputs248States {
    POSITION_INPUTS_248_INTEGRATE,
    POSITION_INPUTS_248_LIMIT,
    POSITION_INPUTS_248_SPIKE,
    POSITION_INPUTS_248_REFRACTORY,
};

// position_inputs_248 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs248States state;
} PositionInputs248;

// position_inputs_248 Initialisation function
void PositionInputs248Init(PositionInputs248* me);

// position_inputs_248 Execution function
void PositionInputs248Run(PositionInputs248* me);

#endif // POSITION_INPUTS_248_H_