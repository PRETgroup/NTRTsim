#ifndef POSITION_INPUTS_207_H_
#define POSITION_INPUTS_207_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_207 States
enum PositionInputs207States {
    POSITION_INPUTS_207_INTEGRATE,
    POSITION_INPUTS_207_LIMIT,
    POSITION_INPUTS_207_SPIKE,
    POSITION_INPUTS_207_REFRACTORY,
};

// position_inputs_207 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs207States state;
} PositionInputs207;

// position_inputs_207 Initialisation function
void PositionInputs207Init(PositionInputs207* me);

// position_inputs_207 Execution function
void PositionInputs207Run(PositionInputs207* me);

#endif // POSITION_INPUTS_207_H_