#ifndef POSITION_INPUTS_21_H_
#define POSITION_INPUTS_21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_21 States
enum PositionInputs21States {
    POSITION_INPUTS_21_INTEGRATE,
    POSITION_INPUTS_21_LIMIT,
    POSITION_INPUTS_21_SPIKE,
    POSITION_INPUTS_21_REFRACTORY,
};

// position_inputs_21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs21States state;
} PositionInputs21;

// position_inputs_21 Initialisation function
void PositionInputs21Init(PositionInputs21* me);

// position_inputs_21 Execution function
void PositionInputs21Run(PositionInputs21* me);

#endif // POSITION_INPUTS_21_H_