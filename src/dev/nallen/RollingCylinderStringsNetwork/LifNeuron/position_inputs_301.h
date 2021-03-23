#ifndef POSITION_INPUTS_301_H_
#define POSITION_INPUTS_301_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_301 States
enum PositionInputs301States {
    POSITION_INPUTS_301_INTEGRATE,
    POSITION_INPUTS_301_LIMIT,
    POSITION_INPUTS_301_SPIKE,
    POSITION_INPUTS_301_REFRACTORY,
};

// position_inputs_301 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs301States state;
} PositionInputs301;

// position_inputs_301 Initialisation function
void PositionInputs301Init(PositionInputs301* me);

// position_inputs_301 Execution function
void PositionInputs301Run(PositionInputs301* me);

#endif // POSITION_INPUTS_301_H_