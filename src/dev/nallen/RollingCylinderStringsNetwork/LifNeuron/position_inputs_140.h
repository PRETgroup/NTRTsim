#ifndef POSITION_INPUTS_140_H_
#define POSITION_INPUTS_140_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_140 States
enum PositionInputs140States {
    POSITION_INPUTS_140_INTEGRATE,
    POSITION_INPUTS_140_LIMIT,
    POSITION_INPUTS_140_SPIKE,
    POSITION_INPUTS_140_REFRACTORY,
};

// position_inputs_140 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs140States state;
} PositionInputs140;

// position_inputs_140 Initialisation function
void PositionInputs140Init(PositionInputs140* me);

// position_inputs_140 Execution function
void PositionInputs140Run(PositionInputs140* me);

#endif // POSITION_INPUTS_140_H_