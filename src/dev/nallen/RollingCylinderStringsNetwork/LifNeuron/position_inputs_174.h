#ifndef POSITION_INPUTS_174_H_
#define POSITION_INPUTS_174_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_174 States
enum PositionInputs174States {
    POSITION_INPUTS_174_INTEGRATE,
    POSITION_INPUTS_174_LIMIT,
    POSITION_INPUTS_174_SPIKE,
    POSITION_INPUTS_174_REFRACTORY,
};

// position_inputs_174 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs174States state;
} PositionInputs174;

// position_inputs_174 Initialisation function
void PositionInputs174Init(PositionInputs174* me);

// position_inputs_174 Execution function
void PositionInputs174Run(PositionInputs174* me);

#endif // POSITION_INPUTS_174_H_