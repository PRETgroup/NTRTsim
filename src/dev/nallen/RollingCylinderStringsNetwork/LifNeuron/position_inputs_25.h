#ifndef POSITION_INPUTS_25_H_
#define POSITION_INPUTS_25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_25 States
enum PositionInputs25States {
    POSITION_INPUTS_25_INTEGRATE,
    POSITION_INPUTS_25_LIMIT,
    POSITION_INPUTS_25_SPIKE,
    POSITION_INPUTS_25_REFRACTORY,
};

// position_inputs_25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs25States state;
} PositionInputs25;

// position_inputs_25 Initialisation function
void PositionInputs25Init(PositionInputs25* me);

// position_inputs_25 Execution function
void PositionInputs25Run(PositionInputs25* me);

#endif // POSITION_INPUTS_25_H_