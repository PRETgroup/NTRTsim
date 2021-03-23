#ifndef POSITION_INPUTS_65_H_
#define POSITION_INPUTS_65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_65 States
enum PositionInputs65States {
    POSITION_INPUTS_65_INTEGRATE,
    POSITION_INPUTS_65_LIMIT,
    POSITION_INPUTS_65_SPIKE,
    POSITION_INPUTS_65_REFRACTORY,
};

// position_inputs_65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs65States state;
} PositionInputs65;

// position_inputs_65 Initialisation function
void PositionInputs65Init(PositionInputs65* me);

// position_inputs_65 Execution function
void PositionInputs65Run(PositionInputs65* me);

#endif // POSITION_INPUTS_65_H_