#ifndef POSITION_INPUTS_73_H_
#define POSITION_INPUTS_73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_73 States
enum PositionInputs73States {
    POSITION_INPUTS_73_INTEGRATE,
    POSITION_INPUTS_73_LIMIT,
    POSITION_INPUTS_73_SPIKE,
    POSITION_INPUTS_73_REFRACTORY,
};

// position_inputs_73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs73States state;
} PositionInputs73;

// position_inputs_73 Initialisation function
void PositionInputs73Init(PositionInputs73* me);

// position_inputs_73 Execution function
void PositionInputs73Run(PositionInputs73* me);

#endif // POSITION_INPUTS_73_H_