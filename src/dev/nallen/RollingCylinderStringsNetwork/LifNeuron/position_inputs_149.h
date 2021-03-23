#ifndef POSITION_INPUTS_149_H_
#define POSITION_INPUTS_149_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_149 States
enum PositionInputs149States {
    POSITION_INPUTS_149_INTEGRATE,
    POSITION_INPUTS_149_LIMIT,
    POSITION_INPUTS_149_SPIKE,
    POSITION_INPUTS_149_REFRACTORY,
};

// position_inputs_149 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs149States state;
} PositionInputs149;

// position_inputs_149 Initialisation function
void PositionInputs149Init(PositionInputs149* me);

// position_inputs_149 Execution function
void PositionInputs149Run(PositionInputs149* me);

#endif // POSITION_INPUTS_149_H_