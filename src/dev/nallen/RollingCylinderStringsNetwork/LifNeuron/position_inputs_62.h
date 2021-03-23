#ifndef POSITION_INPUTS_62_H_
#define POSITION_INPUTS_62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_62 States
enum PositionInputs62States {
    POSITION_INPUTS_62_INTEGRATE,
    POSITION_INPUTS_62_LIMIT,
    POSITION_INPUTS_62_SPIKE,
    POSITION_INPUTS_62_REFRACTORY,
};

// position_inputs_62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs62States state;
} PositionInputs62;

// position_inputs_62 Initialisation function
void PositionInputs62Init(PositionInputs62* me);

// position_inputs_62 Execution function
void PositionInputs62Run(PositionInputs62* me);

#endif // POSITION_INPUTS_62_H_