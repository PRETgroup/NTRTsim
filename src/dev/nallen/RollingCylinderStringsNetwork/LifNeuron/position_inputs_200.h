#ifndef POSITION_INPUTS_200_H_
#define POSITION_INPUTS_200_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_200 States
enum PositionInputs200States {
    POSITION_INPUTS_200_INTEGRATE,
    POSITION_INPUTS_200_LIMIT,
    POSITION_INPUTS_200_SPIKE,
    POSITION_INPUTS_200_REFRACTORY,
};

// position_inputs_200 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs200States state;
} PositionInputs200;

// position_inputs_200 Initialisation function
void PositionInputs200Init(PositionInputs200* me);

// position_inputs_200 Execution function
void PositionInputs200Run(PositionInputs200* me);

#endif // POSITION_INPUTS_200_H_