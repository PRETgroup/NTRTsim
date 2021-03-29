#ifndef POSITION_INPUTS_121_H_
#define POSITION_INPUTS_121_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_121 States
enum PositionInputs121States {
    POSITION_INPUTS_121_INTEGRATE,
    POSITION_INPUTS_121_LIMIT,
    POSITION_INPUTS_121_SPIKE,
    POSITION_INPUTS_121_REFRACTORY,
};

// position_inputs_121 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs121States state;
} PositionInputs121;

// position_inputs_121 Initialisation function
void PositionInputs121Init(PositionInputs121* me);

// position_inputs_121 Execution function
void PositionInputs121Run(PositionInputs121* me);

#endif // POSITION_INPUTS_121_H_