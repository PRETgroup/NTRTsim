#ifndef POSITION_INPUTS_116_H_
#define POSITION_INPUTS_116_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_116 States
enum PositionInputs116States {
    POSITION_INPUTS_116_INTEGRATE,
    POSITION_INPUTS_116_LIMIT,
    POSITION_INPUTS_116_SPIKE,
    POSITION_INPUTS_116_REFRACTORY,
};

// position_inputs_116 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs116States state;
} PositionInputs116;

// position_inputs_116 Initialisation function
void PositionInputs116Init(PositionInputs116* me);

// position_inputs_116 Execution function
void PositionInputs116Run(PositionInputs116* me);

#endif // POSITION_INPUTS_116_H_