#ifndef POSITION_INPUTS_370_H_
#define POSITION_INPUTS_370_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_370 States
enum PositionInputs370States {
    POSITION_INPUTS_370_INTEGRATE,
    POSITION_INPUTS_370_LIMIT,
    POSITION_INPUTS_370_SPIKE,
    POSITION_INPUTS_370_REFRACTORY,
};

// position_inputs_370 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs370States state;
} PositionInputs370;

// position_inputs_370 Initialisation function
void PositionInputs370Init(PositionInputs370* me);

// position_inputs_370 Execution function
void PositionInputs370Run(PositionInputs370* me);

#endif // POSITION_INPUTS_370_H_