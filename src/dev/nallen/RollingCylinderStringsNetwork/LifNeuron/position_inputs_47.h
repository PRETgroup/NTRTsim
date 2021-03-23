#ifndef POSITION_INPUTS_47_H_
#define POSITION_INPUTS_47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_47 States
enum PositionInputs47States {
    POSITION_INPUTS_47_INTEGRATE,
    POSITION_INPUTS_47_LIMIT,
    POSITION_INPUTS_47_SPIKE,
    POSITION_INPUTS_47_REFRACTORY,
};

// position_inputs_47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs47States state;
} PositionInputs47;

// position_inputs_47 Initialisation function
void PositionInputs47Init(PositionInputs47* me);

// position_inputs_47 Execution function
void PositionInputs47Run(PositionInputs47* me);

#endif // POSITION_INPUTS_47_H_