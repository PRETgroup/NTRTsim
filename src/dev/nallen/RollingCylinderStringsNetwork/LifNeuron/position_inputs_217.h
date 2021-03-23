#ifndef POSITION_INPUTS_217_H_
#define POSITION_INPUTS_217_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_217 States
enum PositionInputs217States {
    POSITION_INPUTS_217_INTEGRATE,
    POSITION_INPUTS_217_LIMIT,
    POSITION_INPUTS_217_SPIKE,
    POSITION_INPUTS_217_REFRACTORY,
};

// position_inputs_217 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs217States state;
} PositionInputs217;

// position_inputs_217 Initialisation function
void PositionInputs217Init(PositionInputs217* me);

// position_inputs_217 Execution function
void PositionInputs217Run(PositionInputs217* me);

#endif // POSITION_INPUTS_217_H_