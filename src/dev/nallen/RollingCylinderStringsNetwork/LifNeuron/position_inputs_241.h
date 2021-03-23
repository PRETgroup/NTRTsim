#ifndef POSITION_INPUTS_241_H_
#define POSITION_INPUTS_241_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_241 States
enum PositionInputs241States {
    POSITION_INPUTS_241_INTEGRATE,
    POSITION_INPUTS_241_LIMIT,
    POSITION_INPUTS_241_SPIKE,
    POSITION_INPUTS_241_REFRACTORY,
};

// position_inputs_241 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs241States state;
} PositionInputs241;

// position_inputs_241 Initialisation function
void PositionInputs241Init(PositionInputs241* me);

// position_inputs_241 Execution function
void PositionInputs241Run(PositionInputs241* me);

#endif // POSITION_INPUTS_241_H_