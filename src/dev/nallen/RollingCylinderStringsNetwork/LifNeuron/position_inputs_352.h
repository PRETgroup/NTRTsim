#ifndef POSITION_INPUTS_352_H_
#define POSITION_INPUTS_352_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_352 States
enum PositionInputs352States {
    POSITION_INPUTS_352_INTEGRATE,
    POSITION_INPUTS_352_LIMIT,
    POSITION_INPUTS_352_SPIKE,
    POSITION_INPUTS_352_REFRACTORY,
};

// position_inputs_352 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs352States state;
} PositionInputs352;

// position_inputs_352 Initialisation function
void PositionInputs352Init(PositionInputs352* me);

// position_inputs_352 Execution function
void PositionInputs352Run(PositionInputs352* me);

#endif // POSITION_INPUTS_352_H_