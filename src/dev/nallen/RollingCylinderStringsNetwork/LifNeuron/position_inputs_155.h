#ifndef POSITION_INPUTS_155_H_
#define POSITION_INPUTS_155_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_155 States
enum PositionInputs155States {
    POSITION_INPUTS_155_INTEGRATE,
    POSITION_INPUTS_155_LIMIT,
    POSITION_INPUTS_155_SPIKE,
    POSITION_INPUTS_155_REFRACTORY,
};

// position_inputs_155 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs155States state;
} PositionInputs155;

// position_inputs_155 Initialisation function
void PositionInputs155Init(PositionInputs155* me);

// position_inputs_155 Execution function
void PositionInputs155Run(PositionInputs155* me);

#endif // POSITION_INPUTS_155_H_