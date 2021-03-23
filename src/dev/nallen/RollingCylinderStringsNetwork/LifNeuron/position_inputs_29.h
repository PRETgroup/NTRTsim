#ifndef POSITION_INPUTS_29_H_
#define POSITION_INPUTS_29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_29 States
enum PositionInputs29States {
    POSITION_INPUTS_29_INTEGRATE,
    POSITION_INPUTS_29_LIMIT,
    POSITION_INPUTS_29_SPIKE,
    POSITION_INPUTS_29_REFRACTORY,
};

// position_inputs_29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs29States state;
} PositionInputs29;

// position_inputs_29 Initialisation function
void PositionInputs29Init(PositionInputs29* me);

// position_inputs_29 Execution function
void PositionInputs29Run(PositionInputs29* me);

#endif // POSITION_INPUTS_29_H_