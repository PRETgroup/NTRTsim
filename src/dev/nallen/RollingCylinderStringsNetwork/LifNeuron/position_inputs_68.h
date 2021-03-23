#ifndef POSITION_INPUTS_68_H_
#define POSITION_INPUTS_68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_68 States
enum PositionInputs68States {
    POSITION_INPUTS_68_INTEGRATE,
    POSITION_INPUTS_68_LIMIT,
    POSITION_INPUTS_68_SPIKE,
    POSITION_INPUTS_68_REFRACTORY,
};

// position_inputs_68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs68States state;
} PositionInputs68;

// position_inputs_68 Initialisation function
void PositionInputs68Init(PositionInputs68* me);

// position_inputs_68 Execution function
void PositionInputs68Run(PositionInputs68* me);

#endif // POSITION_INPUTS_68_H_