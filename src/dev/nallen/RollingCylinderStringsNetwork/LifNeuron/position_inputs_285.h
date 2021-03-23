#ifndef POSITION_INPUTS_285_H_
#define POSITION_INPUTS_285_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_285 States
enum PositionInputs285States {
    POSITION_INPUTS_285_INTEGRATE,
    POSITION_INPUTS_285_LIMIT,
    POSITION_INPUTS_285_SPIKE,
    POSITION_INPUTS_285_REFRACTORY,
};

// position_inputs_285 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs285States state;
} PositionInputs285;

// position_inputs_285 Initialisation function
void PositionInputs285Init(PositionInputs285* me);

// position_inputs_285 Execution function
void PositionInputs285Run(PositionInputs285* me);

#endif // POSITION_INPUTS_285_H_