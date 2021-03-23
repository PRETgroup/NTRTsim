#ifndef POSITION_INPUTS_44_H_
#define POSITION_INPUTS_44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_44 States
enum PositionInputs44States {
    POSITION_INPUTS_44_INTEGRATE,
    POSITION_INPUTS_44_LIMIT,
    POSITION_INPUTS_44_SPIKE,
    POSITION_INPUTS_44_REFRACTORY,
};

// position_inputs_44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs44States state;
} PositionInputs44;

// position_inputs_44 Initialisation function
void PositionInputs44Init(PositionInputs44* me);

// position_inputs_44 Execution function
void PositionInputs44Run(PositionInputs44* me);

#endif // POSITION_INPUTS_44_H_