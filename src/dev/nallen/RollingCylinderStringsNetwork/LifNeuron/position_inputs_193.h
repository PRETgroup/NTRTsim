#ifndef POSITION_INPUTS_193_H_
#define POSITION_INPUTS_193_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_193 States
enum PositionInputs193States {
    POSITION_INPUTS_193_INTEGRATE,
    POSITION_INPUTS_193_LIMIT,
    POSITION_INPUTS_193_SPIKE,
    POSITION_INPUTS_193_REFRACTORY,
};

// position_inputs_193 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs193States state;
} PositionInputs193;

// position_inputs_193 Initialisation function
void PositionInputs193Init(PositionInputs193* me);

// position_inputs_193 Execution function
void PositionInputs193Run(PositionInputs193* me);

#endif // POSITION_INPUTS_193_H_