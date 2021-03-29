#ifndef POSITION_INPUTS_153_H_
#define POSITION_INPUTS_153_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_153 States
enum PositionInputs153States {
    POSITION_INPUTS_153_INTEGRATE,
    POSITION_INPUTS_153_LIMIT,
    POSITION_INPUTS_153_SPIKE,
    POSITION_INPUTS_153_REFRACTORY,
};

// position_inputs_153 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs153States state;
} PositionInputs153;

// position_inputs_153 Initialisation function
void PositionInputs153Init(PositionInputs153* me);

// position_inputs_153 Execution function
void PositionInputs153Run(PositionInputs153* me);

#endif // POSITION_INPUTS_153_H_