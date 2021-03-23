#ifndef POSITION_INPUTS_341_H_
#define POSITION_INPUTS_341_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_341 States
enum PositionInputs341States {
    POSITION_INPUTS_341_INTEGRATE,
    POSITION_INPUTS_341_LIMIT,
    POSITION_INPUTS_341_SPIKE,
    POSITION_INPUTS_341_REFRACTORY,
};

// position_inputs_341 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs341States state;
} PositionInputs341;

// position_inputs_341 Initialisation function
void PositionInputs341Init(PositionInputs341* me);

// position_inputs_341 Execution function
void PositionInputs341Run(PositionInputs341* me);

#endif // POSITION_INPUTS_341_H_