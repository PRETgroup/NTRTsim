#ifndef POSITION_INPUTS_361_H_
#define POSITION_INPUTS_361_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_361 States
enum PositionInputs361States {
    POSITION_INPUTS_361_INTEGRATE,
    POSITION_INPUTS_361_LIMIT,
    POSITION_INPUTS_361_SPIKE,
    POSITION_INPUTS_361_REFRACTORY,
};

// position_inputs_361 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs361States state;
} PositionInputs361;

// position_inputs_361 Initialisation function
void PositionInputs361Init(PositionInputs361* me);

// position_inputs_361 Execution function
void PositionInputs361Run(PositionInputs361* me);

#endif // POSITION_INPUTS_361_H_