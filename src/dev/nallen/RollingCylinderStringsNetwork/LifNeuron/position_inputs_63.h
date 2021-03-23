#ifndef POSITION_INPUTS_63_H_
#define POSITION_INPUTS_63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_63 States
enum PositionInputs63States {
    POSITION_INPUTS_63_INTEGRATE,
    POSITION_INPUTS_63_LIMIT,
    POSITION_INPUTS_63_SPIKE,
    POSITION_INPUTS_63_REFRACTORY,
};

// position_inputs_63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs63States state;
} PositionInputs63;

// position_inputs_63 Initialisation function
void PositionInputs63Init(PositionInputs63* me);

// position_inputs_63 Execution function
void PositionInputs63Run(PositionInputs63* me);

#endif // POSITION_INPUTS_63_H_