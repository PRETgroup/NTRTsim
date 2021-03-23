#ifndef POSITION_INPUTS_251_H_
#define POSITION_INPUTS_251_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_251 States
enum PositionInputs251States {
    POSITION_INPUTS_251_INTEGRATE,
    POSITION_INPUTS_251_LIMIT,
    POSITION_INPUTS_251_SPIKE,
    POSITION_INPUTS_251_REFRACTORY,
};

// position_inputs_251 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs251States state;
} PositionInputs251;

// position_inputs_251 Initialisation function
void PositionInputs251Init(PositionInputs251* me);

// position_inputs_251 Execution function
void PositionInputs251Run(PositionInputs251* me);

#endif // POSITION_INPUTS_251_H_