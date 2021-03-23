#ifndef POSITION_INPUTS_262_H_
#define POSITION_INPUTS_262_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_262 States
enum PositionInputs262States {
    POSITION_INPUTS_262_INTEGRATE,
    POSITION_INPUTS_262_LIMIT,
    POSITION_INPUTS_262_SPIKE,
    POSITION_INPUTS_262_REFRACTORY,
};

// position_inputs_262 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs262States state;
} PositionInputs262;

// position_inputs_262 Initialisation function
void PositionInputs262Init(PositionInputs262* me);

// position_inputs_262 Execution function
void PositionInputs262Run(PositionInputs262* me);

#endif // POSITION_INPUTS_262_H_