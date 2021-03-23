#ifndef POSITION_INPUTS_244_H_
#define POSITION_INPUTS_244_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_244 States
enum PositionInputs244States {
    POSITION_INPUTS_244_INTEGRATE,
    POSITION_INPUTS_244_LIMIT,
    POSITION_INPUTS_244_SPIKE,
    POSITION_INPUTS_244_REFRACTORY,
};

// position_inputs_244 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs244States state;
} PositionInputs244;

// position_inputs_244 Initialisation function
void PositionInputs244Init(PositionInputs244* me);

// position_inputs_244 Execution function
void PositionInputs244Run(PositionInputs244* me);

#endif // POSITION_INPUTS_244_H_