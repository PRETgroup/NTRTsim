#ifndef POSITION_INPUTS_267_H_
#define POSITION_INPUTS_267_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_267 States
enum PositionInputs267States {
    POSITION_INPUTS_267_INTEGRATE,
    POSITION_INPUTS_267_LIMIT,
    POSITION_INPUTS_267_SPIKE,
    POSITION_INPUTS_267_REFRACTORY,
};

// position_inputs_267 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs267States state;
} PositionInputs267;

// position_inputs_267 Initialisation function
void PositionInputs267Init(PositionInputs267* me);

// position_inputs_267 Execution function
void PositionInputs267Run(PositionInputs267* me);

#endif // POSITION_INPUTS_267_H_