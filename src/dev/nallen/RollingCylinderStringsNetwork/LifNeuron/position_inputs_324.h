#ifndef POSITION_INPUTS_324_H_
#define POSITION_INPUTS_324_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_324 States
enum PositionInputs324States {
    POSITION_INPUTS_324_INTEGRATE,
    POSITION_INPUTS_324_LIMIT,
    POSITION_INPUTS_324_SPIKE,
    POSITION_INPUTS_324_REFRACTORY,
};

// position_inputs_324 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs324States state;
} PositionInputs324;

// position_inputs_324 Initialisation function
void PositionInputs324Init(PositionInputs324* me);

// position_inputs_324 Execution function
void PositionInputs324Run(PositionInputs324* me);

#endif // POSITION_INPUTS_324_H_