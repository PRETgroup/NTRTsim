#ifndef POSITION_INPUTS_222_H_
#define POSITION_INPUTS_222_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_222 States
enum PositionInputs222States {
    POSITION_INPUTS_222_INTEGRATE,
    POSITION_INPUTS_222_LIMIT,
    POSITION_INPUTS_222_SPIKE,
    POSITION_INPUTS_222_REFRACTORY,
};

// position_inputs_222 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs222States state;
} PositionInputs222;

// position_inputs_222 Initialisation function
void PositionInputs222Init(PositionInputs222* me);

// position_inputs_222 Execution function
void PositionInputs222Run(PositionInputs222* me);

#endif // POSITION_INPUTS_222_H_