#ifndef POSITION_INPUTS_274_H_
#define POSITION_INPUTS_274_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_274 States
enum PositionInputs274States {
    POSITION_INPUTS_274_INTEGRATE,
    POSITION_INPUTS_274_LIMIT,
    POSITION_INPUTS_274_SPIKE,
    POSITION_INPUTS_274_REFRACTORY,
};

// position_inputs_274 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs274States state;
} PositionInputs274;

// position_inputs_274 Initialisation function
void PositionInputs274Init(PositionInputs274* me);

// position_inputs_274 Execution function
void PositionInputs274Run(PositionInputs274* me);

#endif // POSITION_INPUTS_274_H_