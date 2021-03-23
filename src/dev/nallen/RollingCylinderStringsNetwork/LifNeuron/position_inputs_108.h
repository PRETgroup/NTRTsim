#ifndef POSITION_INPUTS_108_H_
#define POSITION_INPUTS_108_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_108 States
enum PositionInputs108States {
    POSITION_INPUTS_108_INTEGRATE,
    POSITION_INPUTS_108_LIMIT,
    POSITION_INPUTS_108_SPIKE,
    POSITION_INPUTS_108_REFRACTORY,
};

// position_inputs_108 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs108States state;
} PositionInputs108;

// position_inputs_108 Initialisation function
void PositionInputs108Init(PositionInputs108* me);

// position_inputs_108 Execution function
void PositionInputs108Run(PositionInputs108* me);

#endif // POSITION_INPUTS_108_H_