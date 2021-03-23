#ifndef POSITION_INPUTS_212_H_
#define POSITION_INPUTS_212_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_212 States
enum PositionInputs212States {
    POSITION_INPUTS_212_INTEGRATE,
    POSITION_INPUTS_212_LIMIT,
    POSITION_INPUTS_212_SPIKE,
    POSITION_INPUTS_212_REFRACTORY,
};

// position_inputs_212 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs212States state;
} PositionInputs212;

// position_inputs_212 Initialisation function
void PositionInputs212Init(PositionInputs212* me);

// position_inputs_212 Execution function
void PositionInputs212Run(PositionInputs212* me);

#endif // POSITION_INPUTS_212_H_