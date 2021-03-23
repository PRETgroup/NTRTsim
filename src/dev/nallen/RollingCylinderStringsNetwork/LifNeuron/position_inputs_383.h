#ifndef POSITION_INPUTS_383_H_
#define POSITION_INPUTS_383_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_383 States
enum PositionInputs383States {
    POSITION_INPUTS_383_INTEGRATE,
    POSITION_INPUTS_383_LIMIT,
    POSITION_INPUTS_383_SPIKE,
    POSITION_INPUTS_383_REFRACTORY,
};

// position_inputs_383 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs383States state;
} PositionInputs383;

// position_inputs_383 Initialisation function
void PositionInputs383Init(PositionInputs383* me);

// position_inputs_383 Execution function
void PositionInputs383Run(PositionInputs383* me);

#endif // POSITION_INPUTS_383_H_