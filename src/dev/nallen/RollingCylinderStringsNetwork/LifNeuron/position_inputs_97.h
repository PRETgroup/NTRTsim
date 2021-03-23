#ifndef POSITION_INPUTS_97_H_
#define POSITION_INPUTS_97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_97 States
enum PositionInputs97States {
    POSITION_INPUTS_97_INTEGRATE,
    POSITION_INPUTS_97_LIMIT,
    POSITION_INPUTS_97_SPIKE,
    POSITION_INPUTS_97_REFRACTORY,
};

// position_inputs_97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs97States state;
} PositionInputs97;

// position_inputs_97 Initialisation function
void PositionInputs97Init(PositionInputs97* me);

// position_inputs_97 Execution function
void PositionInputs97Run(PositionInputs97* me);

#endif // POSITION_INPUTS_97_H_