#ifndef POSITION_INPUTS_320_H_
#define POSITION_INPUTS_320_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_320 States
enum PositionInputs320States {
    POSITION_INPUTS_320_INTEGRATE,
    POSITION_INPUTS_320_LIMIT,
    POSITION_INPUTS_320_SPIKE,
    POSITION_INPUTS_320_REFRACTORY,
};

// position_inputs_320 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs320States state;
} PositionInputs320;

// position_inputs_320 Initialisation function
void PositionInputs320Init(PositionInputs320* me);

// position_inputs_320 Execution function
void PositionInputs320Run(PositionInputs320* me);

#endif // POSITION_INPUTS_320_H_