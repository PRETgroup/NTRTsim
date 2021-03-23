#ifndef POSITION_INPUTS_93_H_
#define POSITION_INPUTS_93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_93 States
enum PositionInputs93States {
    POSITION_INPUTS_93_INTEGRATE,
    POSITION_INPUTS_93_LIMIT,
    POSITION_INPUTS_93_SPIKE,
    POSITION_INPUTS_93_REFRACTORY,
};

// position_inputs_93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs93States state;
} PositionInputs93;

// position_inputs_93 Initialisation function
void PositionInputs93Init(PositionInputs93* me);

// position_inputs_93 Execution function
void PositionInputs93Run(PositionInputs93* me);

#endif // POSITION_INPUTS_93_H_