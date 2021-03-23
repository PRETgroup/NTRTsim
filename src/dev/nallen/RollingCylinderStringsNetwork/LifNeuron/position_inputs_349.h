#ifndef POSITION_INPUTS_349_H_
#define POSITION_INPUTS_349_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_349 States
enum PositionInputs349States {
    POSITION_INPUTS_349_INTEGRATE,
    POSITION_INPUTS_349_LIMIT,
    POSITION_INPUTS_349_SPIKE,
    POSITION_INPUTS_349_REFRACTORY,
};

// position_inputs_349 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs349States state;
} PositionInputs349;

// position_inputs_349 Initialisation function
void PositionInputs349Init(PositionInputs349* me);

// position_inputs_349 Execution function
void PositionInputs349Run(PositionInputs349* me);

#endif // POSITION_INPUTS_349_H_