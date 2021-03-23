#ifndef POSITION_INPUTS_230_H_
#define POSITION_INPUTS_230_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_230 States
enum PositionInputs230States {
    POSITION_INPUTS_230_INTEGRATE,
    POSITION_INPUTS_230_LIMIT,
    POSITION_INPUTS_230_SPIKE,
    POSITION_INPUTS_230_REFRACTORY,
};

// position_inputs_230 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs230States state;
} PositionInputs230;

// position_inputs_230 Initialisation function
void PositionInputs230Init(PositionInputs230* me);

// position_inputs_230 Execution function
void PositionInputs230Run(PositionInputs230* me);

#endif // POSITION_INPUTS_230_H_