#ifndef POSITION_INPUTS_76_H_
#define POSITION_INPUTS_76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_76 States
enum PositionInputs76States {
    POSITION_INPUTS_76_INTEGRATE,
    POSITION_INPUTS_76_LIMIT,
    POSITION_INPUTS_76_SPIKE,
    POSITION_INPUTS_76_REFRACTORY,
};

// position_inputs_76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs76States state;
} PositionInputs76;

// position_inputs_76 Initialisation function
void PositionInputs76Init(PositionInputs76* me);

// position_inputs_76 Execution function
void PositionInputs76Run(PositionInputs76* me);

#endif // POSITION_INPUTS_76_H_