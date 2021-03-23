#ifndef POSITION_INPUTS_391_H_
#define POSITION_INPUTS_391_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_391 States
enum PositionInputs391States {
    POSITION_INPUTS_391_INTEGRATE,
    POSITION_INPUTS_391_LIMIT,
    POSITION_INPUTS_391_SPIKE,
    POSITION_INPUTS_391_REFRACTORY,
};

// position_inputs_391 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs391States state;
} PositionInputs391;

// position_inputs_391 Initialisation function
void PositionInputs391Init(PositionInputs391* me);

// position_inputs_391 Execution function
void PositionInputs391Run(PositionInputs391* me);

#endif // POSITION_INPUTS_391_H_