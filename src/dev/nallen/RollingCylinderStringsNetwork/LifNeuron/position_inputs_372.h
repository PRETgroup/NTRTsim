#ifndef POSITION_INPUTS_372_H_
#define POSITION_INPUTS_372_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_372 States
enum PositionInputs372States {
    POSITION_INPUTS_372_INTEGRATE,
    POSITION_INPUTS_372_LIMIT,
    POSITION_INPUTS_372_SPIKE,
    POSITION_INPUTS_372_REFRACTORY,
};

// position_inputs_372 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs372States state;
} PositionInputs372;

// position_inputs_372 Initialisation function
void PositionInputs372Init(PositionInputs372* me);

// position_inputs_372 Execution function
void PositionInputs372Run(PositionInputs372* me);

#endif // POSITION_INPUTS_372_H_