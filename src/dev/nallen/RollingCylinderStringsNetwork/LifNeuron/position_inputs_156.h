#ifndef POSITION_INPUTS_156_H_
#define POSITION_INPUTS_156_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_156 States
enum PositionInputs156States {
    POSITION_INPUTS_156_INTEGRATE,
    POSITION_INPUTS_156_LIMIT,
    POSITION_INPUTS_156_SPIKE,
    POSITION_INPUTS_156_REFRACTORY,
};

// position_inputs_156 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs156States state;
} PositionInputs156;

// position_inputs_156 Initialisation function
void PositionInputs156Init(PositionInputs156* me);

// position_inputs_156 Execution function
void PositionInputs156Run(PositionInputs156* me);

#endif // POSITION_INPUTS_156_H_