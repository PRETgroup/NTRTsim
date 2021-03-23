#ifndef POSITION_INPUTS_279_H_
#define POSITION_INPUTS_279_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_279 States
enum PositionInputs279States {
    POSITION_INPUTS_279_INTEGRATE,
    POSITION_INPUTS_279_LIMIT,
    POSITION_INPUTS_279_SPIKE,
    POSITION_INPUTS_279_REFRACTORY,
};

// position_inputs_279 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs279States state;
} PositionInputs279;

// position_inputs_279 Initialisation function
void PositionInputs279Init(PositionInputs279* me);

// position_inputs_279 Execution function
void PositionInputs279Run(PositionInputs279* me);

#endif // POSITION_INPUTS_279_H_