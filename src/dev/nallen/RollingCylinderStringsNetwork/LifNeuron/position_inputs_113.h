#ifndef POSITION_INPUTS_113_H_
#define POSITION_INPUTS_113_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_113 States
enum PositionInputs113States {
    POSITION_INPUTS_113_INTEGRATE,
    POSITION_INPUTS_113_LIMIT,
    POSITION_INPUTS_113_SPIKE,
    POSITION_INPUTS_113_REFRACTORY,
};

// position_inputs_113 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs113States state;
} PositionInputs113;

// position_inputs_113 Initialisation function
void PositionInputs113Init(PositionInputs113* me);

// position_inputs_113 Execution function
void PositionInputs113Run(PositionInputs113* me);

#endif // POSITION_INPUTS_113_H_