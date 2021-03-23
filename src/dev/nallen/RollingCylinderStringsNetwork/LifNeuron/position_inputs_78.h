#ifndef POSITION_INPUTS_78_H_
#define POSITION_INPUTS_78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_78 States
enum PositionInputs78States {
    POSITION_INPUTS_78_INTEGRATE,
    POSITION_INPUTS_78_LIMIT,
    POSITION_INPUTS_78_SPIKE,
    POSITION_INPUTS_78_REFRACTORY,
};

// position_inputs_78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs78States state;
} PositionInputs78;

// position_inputs_78 Initialisation function
void PositionInputs78Init(PositionInputs78* me);

// position_inputs_78 Execution function
void PositionInputs78Run(PositionInputs78* me);

#endif // POSITION_INPUTS_78_H_