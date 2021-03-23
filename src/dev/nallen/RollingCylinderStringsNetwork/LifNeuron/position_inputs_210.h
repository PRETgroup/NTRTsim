#ifndef POSITION_INPUTS_210_H_
#define POSITION_INPUTS_210_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_210 States
enum PositionInputs210States {
    POSITION_INPUTS_210_INTEGRATE,
    POSITION_INPUTS_210_LIMIT,
    POSITION_INPUTS_210_SPIKE,
    POSITION_INPUTS_210_REFRACTORY,
};

// position_inputs_210 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs210States state;
} PositionInputs210;

// position_inputs_210 Initialisation function
void PositionInputs210Init(PositionInputs210* me);

// position_inputs_210 Execution function
void PositionInputs210Run(PositionInputs210* me);

#endif // POSITION_INPUTS_210_H_