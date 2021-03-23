#ifndef POSITION_INPUTS_85_H_
#define POSITION_INPUTS_85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_85 States
enum PositionInputs85States {
    POSITION_INPUTS_85_INTEGRATE,
    POSITION_INPUTS_85_LIMIT,
    POSITION_INPUTS_85_SPIKE,
    POSITION_INPUTS_85_REFRACTORY,
};

// position_inputs_85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs85States state;
} PositionInputs85;

// position_inputs_85 Initialisation function
void PositionInputs85Init(PositionInputs85* me);

// position_inputs_85 Execution function
void PositionInputs85Run(PositionInputs85* me);

#endif // POSITION_INPUTS_85_H_