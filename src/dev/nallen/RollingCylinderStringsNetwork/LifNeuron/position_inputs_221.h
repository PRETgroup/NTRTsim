#ifndef POSITION_INPUTS_221_H_
#define POSITION_INPUTS_221_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_221 States
enum PositionInputs221States {
    POSITION_INPUTS_221_INTEGRATE,
    POSITION_INPUTS_221_LIMIT,
    POSITION_INPUTS_221_SPIKE,
    POSITION_INPUTS_221_REFRACTORY,
};

// position_inputs_221 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs221States state;
} PositionInputs221;

// position_inputs_221 Initialisation function
void PositionInputs221Init(PositionInputs221* me);

// position_inputs_221 Execution function
void PositionInputs221Run(PositionInputs221* me);

#endif // POSITION_INPUTS_221_H_