#ifndef POSITION_INPUTS_290_H_
#define POSITION_INPUTS_290_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_290 States
enum PositionInputs290States {
    POSITION_INPUTS_290_INTEGRATE,
    POSITION_INPUTS_290_LIMIT,
    POSITION_INPUTS_290_SPIKE,
    POSITION_INPUTS_290_REFRACTORY,
};

// position_inputs_290 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs290States state;
} PositionInputs290;

// position_inputs_290 Initialisation function
void PositionInputs290Init(PositionInputs290* me);

// position_inputs_290 Execution function
void PositionInputs290Run(PositionInputs290* me);

#endif // POSITION_INPUTS_290_H_