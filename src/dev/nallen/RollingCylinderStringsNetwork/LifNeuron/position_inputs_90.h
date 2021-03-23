#ifndef POSITION_INPUTS_90_H_
#define POSITION_INPUTS_90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_90 States
enum PositionInputs90States {
    POSITION_INPUTS_90_INTEGRATE,
    POSITION_INPUTS_90_LIMIT,
    POSITION_INPUTS_90_SPIKE,
    POSITION_INPUTS_90_REFRACTORY,
};

// position_inputs_90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs90States state;
} PositionInputs90;

// position_inputs_90 Initialisation function
void PositionInputs90Init(PositionInputs90* me);

// position_inputs_90 Execution function
void PositionInputs90Run(PositionInputs90* me);

#endif // POSITION_INPUTS_90_H_