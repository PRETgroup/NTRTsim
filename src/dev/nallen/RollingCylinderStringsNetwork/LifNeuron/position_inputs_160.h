#ifndef POSITION_INPUTS_160_H_
#define POSITION_INPUTS_160_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_160 States
enum PositionInputs160States {
    POSITION_INPUTS_160_INTEGRATE,
    POSITION_INPUTS_160_LIMIT,
    POSITION_INPUTS_160_SPIKE,
    POSITION_INPUTS_160_REFRACTORY,
};

// position_inputs_160 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs160States state;
} PositionInputs160;

// position_inputs_160 Initialisation function
void PositionInputs160Init(PositionInputs160* me);

// position_inputs_160 Execution function
void PositionInputs160Run(PositionInputs160* me);

#endif // POSITION_INPUTS_160_H_