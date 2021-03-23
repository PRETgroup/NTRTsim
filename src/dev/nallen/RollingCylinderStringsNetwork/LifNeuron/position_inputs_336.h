#ifndef POSITION_INPUTS_336_H_
#define POSITION_INPUTS_336_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_336 States
enum PositionInputs336States {
    POSITION_INPUTS_336_INTEGRATE,
    POSITION_INPUTS_336_LIMIT,
    POSITION_INPUTS_336_SPIKE,
    POSITION_INPUTS_336_REFRACTORY,
};

// position_inputs_336 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs336States state;
} PositionInputs336;

// position_inputs_336 Initialisation function
void PositionInputs336Init(PositionInputs336* me);

// position_inputs_336 Execution function
void PositionInputs336Run(PositionInputs336* me);

#endif // POSITION_INPUTS_336_H_