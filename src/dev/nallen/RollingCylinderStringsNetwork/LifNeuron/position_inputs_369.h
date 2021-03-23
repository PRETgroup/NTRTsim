#ifndef POSITION_INPUTS_369_H_
#define POSITION_INPUTS_369_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_369 States
enum PositionInputs369States {
    POSITION_INPUTS_369_INTEGRATE,
    POSITION_INPUTS_369_LIMIT,
    POSITION_INPUTS_369_SPIKE,
    POSITION_INPUTS_369_REFRACTORY,
};

// position_inputs_369 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs369States state;
} PositionInputs369;

// position_inputs_369 Initialisation function
void PositionInputs369Init(PositionInputs369* me);

// position_inputs_369 Execution function
void PositionInputs369Run(PositionInputs369* me);

#endif // POSITION_INPUTS_369_H_