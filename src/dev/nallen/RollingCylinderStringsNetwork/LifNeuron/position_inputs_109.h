#ifndef POSITION_INPUTS_109_H_
#define POSITION_INPUTS_109_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_109 States
enum PositionInputs109States {
    POSITION_INPUTS_109_INTEGRATE,
    POSITION_INPUTS_109_LIMIT,
    POSITION_INPUTS_109_SPIKE,
    POSITION_INPUTS_109_REFRACTORY,
};

// position_inputs_109 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs109States state;
} PositionInputs109;

// position_inputs_109 Initialisation function
void PositionInputs109Init(PositionInputs109* me);

// position_inputs_109 Execution function
void PositionInputs109Run(PositionInputs109* me);

#endif // POSITION_INPUTS_109_H_