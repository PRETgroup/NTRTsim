#ifndef POSITION_INPUTS_13_H_
#define POSITION_INPUTS_13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_13 States
enum PositionInputs13States {
    POSITION_INPUTS_13_INTEGRATE,
    POSITION_INPUTS_13_LIMIT,
    POSITION_INPUTS_13_SPIKE,
    POSITION_INPUTS_13_REFRACTORY,
};

// position_inputs_13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs13States state;
} PositionInputs13;

// position_inputs_13 Initialisation function
void PositionInputs13Init(PositionInputs13* me);

// position_inputs_13 Execution function
void PositionInputs13Run(PositionInputs13* me);

#endif // POSITION_INPUTS_13_H_