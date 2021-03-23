#ifndef POSITION_INPUTS_205_H_
#define POSITION_INPUTS_205_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_205 States
enum PositionInputs205States {
    POSITION_INPUTS_205_INTEGRATE,
    POSITION_INPUTS_205_LIMIT,
    POSITION_INPUTS_205_SPIKE,
    POSITION_INPUTS_205_REFRACTORY,
};

// position_inputs_205 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs205States state;
} PositionInputs205;

// position_inputs_205 Initialisation function
void PositionInputs205Init(PositionInputs205* me);

// position_inputs_205 Execution function
void PositionInputs205Run(PositionInputs205* me);

#endif // POSITION_INPUTS_205_H_