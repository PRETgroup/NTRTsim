#ifndef POSITION_INPUTS_35_H_
#define POSITION_INPUTS_35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_35 States
enum PositionInputs35States {
    POSITION_INPUTS_35_INTEGRATE,
    POSITION_INPUTS_35_LIMIT,
    POSITION_INPUTS_35_SPIKE,
    POSITION_INPUTS_35_REFRACTORY,
};

// position_inputs_35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs35States state;
} PositionInputs35;

// position_inputs_35 Initialisation function
void PositionInputs35Init(PositionInputs35* me);

// position_inputs_35 Execution function
void PositionInputs35Run(PositionInputs35* me);

#endif // POSITION_INPUTS_35_H_