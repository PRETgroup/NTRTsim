#ifndef POSITION_INPUTS_163_H_
#define POSITION_INPUTS_163_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_163 States
enum PositionInputs163States {
    POSITION_INPUTS_163_INTEGRATE,
    POSITION_INPUTS_163_LIMIT,
    POSITION_INPUTS_163_SPIKE,
    POSITION_INPUTS_163_REFRACTORY,
};

// position_inputs_163 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs163States state;
} PositionInputs163;

// position_inputs_163 Initialisation function
void PositionInputs163Init(PositionInputs163* me);

// position_inputs_163 Execution function
void PositionInputs163Run(PositionInputs163* me);

#endif // POSITION_INPUTS_163_H_