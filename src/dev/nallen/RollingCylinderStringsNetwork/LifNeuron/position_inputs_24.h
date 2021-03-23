#ifndef POSITION_INPUTS_24_H_
#define POSITION_INPUTS_24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_24 States
enum PositionInputs24States {
    POSITION_INPUTS_24_INTEGRATE,
    POSITION_INPUTS_24_LIMIT,
    POSITION_INPUTS_24_SPIKE,
    POSITION_INPUTS_24_REFRACTORY,
};

// position_inputs_24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs24States state;
} PositionInputs24;

// position_inputs_24 Initialisation function
void PositionInputs24Init(PositionInputs24* me);

// position_inputs_24 Execution function
void PositionInputs24Run(PositionInputs24* me);

#endif // POSITION_INPUTS_24_H_