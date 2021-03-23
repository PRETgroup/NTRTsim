#ifndef POSITION_INPUTS_103_H_
#define POSITION_INPUTS_103_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_103 States
enum PositionInputs103States {
    POSITION_INPUTS_103_INTEGRATE,
    POSITION_INPUTS_103_LIMIT,
    POSITION_INPUTS_103_SPIKE,
    POSITION_INPUTS_103_REFRACTORY,
};

// position_inputs_103 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs103States state;
} PositionInputs103;

// position_inputs_103 Initialisation function
void PositionInputs103Init(PositionInputs103* me);

// position_inputs_103 Execution function
void PositionInputs103Run(PositionInputs103* me);

#endif // POSITION_INPUTS_103_H_