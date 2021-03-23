#ifndef POSITION_INPUTS_299_H_
#define POSITION_INPUTS_299_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_299 States
enum PositionInputs299States {
    POSITION_INPUTS_299_INTEGRATE,
    POSITION_INPUTS_299_LIMIT,
    POSITION_INPUTS_299_SPIKE,
    POSITION_INPUTS_299_REFRACTORY,
};

// position_inputs_299 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs299States state;
} PositionInputs299;

// position_inputs_299 Initialisation function
void PositionInputs299Init(PositionInputs299* me);

// position_inputs_299 Execution function
void PositionInputs299Run(PositionInputs299* me);

#endif // POSITION_INPUTS_299_H_