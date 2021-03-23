#ifndef POSITION_INPUTS_203_H_
#define POSITION_INPUTS_203_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_203 States
enum PositionInputs203States {
    POSITION_INPUTS_203_INTEGRATE,
    POSITION_INPUTS_203_LIMIT,
    POSITION_INPUTS_203_SPIKE,
    POSITION_INPUTS_203_REFRACTORY,
};

// position_inputs_203 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs203States state;
} PositionInputs203;

// position_inputs_203 Initialisation function
void PositionInputs203Init(PositionInputs203* me);

// position_inputs_203 Execution function
void PositionInputs203Run(PositionInputs203* me);

#endif // POSITION_INPUTS_203_H_