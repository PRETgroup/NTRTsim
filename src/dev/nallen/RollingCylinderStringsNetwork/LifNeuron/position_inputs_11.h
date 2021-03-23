#ifndef POSITION_INPUTS_11_H_
#define POSITION_INPUTS_11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_11 States
enum PositionInputs11States {
    POSITION_INPUTS_11_INTEGRATE,
    POSITION_INPUTS_11_LIMIT,
    POSITION_INPUTS_11_SPIKE,
    POSITION_INPUTS_11_REFRACTORY,
};

// position_inputs_11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs11States state;
} PositionInputs11;

// position_inputs_11 Initialisation function
void PositionInputs11Init(PositionInputs11* me);

// position_inputs_11 Execution function
void PositionInputs11Run(PositionInputs11* me);

#endif // POSITION_INPUTS_11_H_