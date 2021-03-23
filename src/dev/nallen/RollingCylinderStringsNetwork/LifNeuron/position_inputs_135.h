#ifndef POSITION_INPUTS_135_H_
#define POSITION_INPUTS_135_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_135 States
enum PositionInputs135States {
    POSITION_INPUTS_135_INTEGRATE,
    POSITION_INPUTS_135_LIMIT,
    POSITION_INPUTS_135_SPIKE,
    POSITION_INPUTS_135_REFRACTORY,
};

// position_inputs_135 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs135States state;
} PositionInputs135;

// position_inputs_135 Initialisation function
void PositionInputs135Init(PositionInputs135* me);

// position_inputs_135 Execution function
void PositionInputs135Run(PositionInputs135* me);

#endif // POSITION_INPUTS_135_H_