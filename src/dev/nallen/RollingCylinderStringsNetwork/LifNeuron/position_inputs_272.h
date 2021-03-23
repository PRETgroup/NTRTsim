#ifndef POSITION_INPUTS_272_H_
#define POSITION_INPUTS_272_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_272 States
enum PositionInputs272States {
    POSITION_INPUTS_272_INTEGRATE,
    POSITION_INPUTS_272_LIMIT,
    POSITION_INPUTS_272_SPIKE,
    POSITION_INPUTS_272_REFRACTORY,
};

// position_inputs_272 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs272States state;
} PositionInputs272;

// position_inputs_272 Initialisation function
void PositionInputs272Init(PositionInputs272* me);

// position_inputs_272 Execution function
void PositionInputs272Run(PositionInputs272* me);

#endif // POSITION_INPUTS_272_H_