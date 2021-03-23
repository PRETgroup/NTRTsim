#ifndef POSITION_INPUTS_273_H_
#define POSITION_INPUTS_273_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_273 States
enum PositionInputs273States {
    POSITION_INPUTS_273_INTEGRATE,
    POSITION_INPUTS_273_LIMIT,
    POSITION_INPUTS_273_SPIKE,
    POSITION_INPUTS_273_REFRACTORY,
};

// position_inputs_273 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs273States state;
} PositionInputs273;

// position_inputs_273 Initialisation function
void PositionInputs273Init(PositionInputs273* me);

// position_inputs_273 Execution function
void PositionInputs273Run(PositionInputs273* me);

#endif // POSITION_INPUTS_273_H_