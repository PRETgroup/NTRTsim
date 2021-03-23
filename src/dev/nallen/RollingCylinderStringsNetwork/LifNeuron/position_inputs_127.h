#ifndef POSITION_INPUTS_127_H_
#define POSITION_INPUTS_127_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_127 States
enum PositionInputs127States {
    POSITION_INPUTS_127_INTEGRATE,
    POSITION_INPUTS_127_LIMIT,
    POSITION_INPUTS_127_SPIKE,
    POSITION_INPUTS_127_REFRACTORY,
};

// position_inputs_127 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs127States state;
} PositionInputs127;

// position_inputs_127 Initialisation function
void PositionInputs127Init(PositionInputs127* me);

// position_inputs_127 Execution function
void PositionInputs127Run(PositionInputs127* me);

#endif // POSITION_INPUTS_127_H_