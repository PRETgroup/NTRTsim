#ifndef POSITION_INPUTS_374_H_
#define POSITION_INPUTS_374_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_374 States
enum PositionInputs374States {
    POSITION_INPUTS_374_INTEGRATE,
    POSITION_INPUTS_374_LIMIT,
    POSITION_INPUTS_374_SPIKE,
    POSITION_INPUTS_374_REFRACTORY,
};

// position_inputs_374 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs374States state;
} PositionInputs374;

// position_inputs_374 Initialisation function
void PositionInputs374Init(PositionInputs374* me);

// position_inputs_374 Execution function
void PositionInputs374Run(PositionInputs374* me);

#endif // POSITION_INPUTS_374_H_