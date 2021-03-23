#ifndef POSITION_INPUTS_89_H_
#define POSITION_INPUTS_89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_89 States
enum PositionInputs89States {
    POSITION_INPUTS_89_INTEGRATE,
    POSITION_INPUTS_89_LIMIT,
    POSITION_INPUTS_89_SPIKE,
    POSITION_INPUTS_89_REFRACTORY,
};

// position_inputs_89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs89States state;
} PositionInputs89;

// position_inputs_89 Initialisation function
void PositionInputs89Init(PositionInputs89* me);

// position_inputs_89 Execution function
void PositionInputs89Run(PositionInputs89* me);

#endif // POSITION_INPUTS_89_H_