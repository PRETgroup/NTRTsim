#ifndef POSITION_INPUTS_327_H_
#define POSITION_INPUTS_327_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_327 States
enum PositionInputs327States {
    POSITION_INPUTS_327_INTEGRATE,
    POSITION_INPUTS_327_LIMIT,
    POSITION_INPUTS_327_SPIKE,
    POSITION_INPUTS_327_REFRACTORY,
};

// position_inputs_327 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs327States state;
} PositionInputs327;

// position_inputs_327 Initialisation function
void PositionInputs327Init(PositionInputs327* me);

// position_inputs_327 Execution function
void PositionInputs327Run(PositionInputs327* me);

#endif // POSITION_INPUTS_327_H_