#ifndef POSITION_INPUTS_111_H_
#define POSITION_INPUTS_111_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_111 States
enum PositionInputs111States {
    POSITION_INPUTS_111_INTEGRATE,
    POSITION_INPUTS_111_LIMIT,
    POSITION_INPUTS_111_SPIKE,
    POSITION_INPUTS_111_REFRACTORY,
};

// position_inputs_111 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs111States state;
} PositionInputs111;

// position_inputs_111 Initialisation function
void PositionInputs111Init(PositionInputs111* me);

// position_inputs_111 Execution function
void PositionInputs111Run(PositionInputs111* me);

#endif // POSITION_INPUTS_111_H_