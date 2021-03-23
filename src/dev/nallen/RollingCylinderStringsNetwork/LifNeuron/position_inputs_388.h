#ifndef POSITION_INPUTS_388_H_
#define POSITION_INPUTS_388_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_388 States
enum PositionInputs388States {
    POSITION_INPUTS_388_INTEGRATE,
    POSITION_INPUTS_388_LIMIT,
    POSITION_INPUTS_388_SPIKE,
    POSITION_INPUTS_388_REFRACTORY,
};

// position_inputs_388 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs388States state;
} PositionInputs388;

// position_inputs_388 Initialisation function
void PositionInputs388Init(PositionInputs388* me);

// position_inputs_388 Execution function
void PositionInputs388Run(PositionInputs388* me);

#endif // POSITION_INPUTS_388_H_