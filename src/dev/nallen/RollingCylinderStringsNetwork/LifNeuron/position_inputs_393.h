#ifndef POSITION_INPUTS_393_H_
#define POSITION_INPUTS_393_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_393 States
enum PositionInputs393States {
    POSITION_INPUTS_393_INTEGRATE,
    POSITION_INPUTS_393_LIMIT,
    POSITION_INPUTS_393_SPIKE,
    POSITION_INPUTS_393_REFRACTORY,
};

// position_inputs_393 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs393States state;
} PositionInputs393;

// position_inputs_393 Initialisation function
void PositionInputs393Init(PositionInputs393* me);

// position_inputs_393 Execution function
void PositionInputs393Run(PositionInputs393* me);

#endif // POSITION_INPUTS_393_H_