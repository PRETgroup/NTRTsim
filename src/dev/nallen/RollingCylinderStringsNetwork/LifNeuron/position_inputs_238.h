#ifndef POSITION_INPUTS_238_H_
#define POSITION_INPUTS_238_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_238 States
enum PositionInputs238States {
    POSITION_INPUTS_238_INTEGRATE,
    POSITION_INPUTS_238_LIMIT,
    POSITION_INPUTS_238_SPIKE,
    POSITION_INPUTS_238_REFRACTORY,
};

// position_inputs_238 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs238States state;
} PositionInputs238;

// position_inputs_238 Initialisation function
void PositionInputs238Init(PositionInputs238* me);

// position_inputs_238 Execution function
void PositionInputs238Run(PositionInputs238* me);

#endif // POSITION_INPUTS_238_H_