#ifndef POSITION_INPUTS_394_H_
#define POSITION_INPUTS_394_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_394 States
enum PositionInputs394States {
    POSITION_INPUTS_394_INTEGRATE,
    POSITION_INPUTS_394_LIMIT,
    POSITION_INPUTS_394_SPIKE,
    POSITION_INPUTS_394_REFRACTORY,
};

// position_inputs_394 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs394States state;
} PositionInputs394;

// position_inputs_394 Initialisation function
void PositionInputs394Init(PositionInputs394* me);

// position_inputs_394 Execution function
void PositionInputs394Run(PositionInputs394* me);

#endif // POSITION_INPUTS_394_H_