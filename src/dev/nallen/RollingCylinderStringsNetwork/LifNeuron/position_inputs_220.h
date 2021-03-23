#ifndef POSITION_INPUTS_220_H_
#define POSITION_INPUTS_220_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_220 States
enum PositionInputs220States {
    POSITION_INPUTS_220_INTEGRATE,
    POSITION_INPUTS_220_LIMIT,
    POSITION_INPUTS_220_SPIKE,
    POSITION_INPUTS_220_REFRACTORY,
};

// position_inputs_220 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs220States state;
} PositionInputs220;

// position_inputs_220 Initialisation function
void PositionInputs220Init(PositionInputs220* me);

// position_inputs_220 Execution function
void PositionInputs220Run(PositionInputs220* me);

#endif // POSITION_INPUTS_220_H_