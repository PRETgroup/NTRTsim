#ifndef POSITION_INPUTS_247_H_
#define POSITION_INPUTS_247_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_247 States
enum PositionInputs247States {
    POSITION_INPUTS_247_INTEGRATE,
    POSITION_INPUTS_247_LIMIT,
    POSITION_INPUTS_247_SPIKE,
    POSITION_INPUTS_247_REFRACTORY,
};

// position_inputs_247 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs247States state;
} PositionInputs247;

// position_inputs_247 Initialisation function
void PositionInputs247Init(PositionInputs247* me);

// position_inputs_247 Execution function
void PositionInputs247Run(PositionInputs247* me);

#endif // POSITION_INPUTS_247_H_