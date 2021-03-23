#ifndef POSITION_INPUTS_45_H_
#define POSITION_INPUTS_45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_45 States
enum PositionInputs45States {
    POSITION_INPUTS_45_INTEGRATE,
    POSITION_INPUTS_45_LIMIT,
    POSITION_INPUTS_45_SPIKE,
    POSITION_INPUTS_45_REFRACTORY,
};

// position_inputs_45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs45States state;
} PositionInputs45;

// position_inputs_45 Initialisation function
void PositionInputs45Init(PositionInputs45* me);

// position_inputs_45 Execution function
void PositionInputs45Run(PositionInputs45* me);

#endif // POSITION_INPUTS_45_H_