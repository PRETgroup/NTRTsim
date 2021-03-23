#ifndef POSITION_INPUTS_261_H_
#define POSITION_INPUTS_261_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_261 States
enum PositionInputs261States {
    POSITION_INPUTS_261_INTEGRATE,
    POSITION_INPUTS_261_LIMIT,
    POSITION_INPUTS_261_SPIKE,
    POSITION_INPUTS_261_REFRACTORY,
};

// position_inputs_261 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs261States state;
} PositionInputs261;

// position_inputs_261 Initialisation function
void PositionInputs261Init(PositionInputs261* me);

// position_inputs_261 Execution function
void PositionInputs261Run(PositionInputs261* me);

#endif // POSITION_INPUTS_261_H_