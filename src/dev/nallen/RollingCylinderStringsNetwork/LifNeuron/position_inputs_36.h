#ifndef POSITION_INPUTS_36_H_
#define POSITION_INPUTS_36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_36 States
enum PositionInputs36States {
    POSITION_INPUTS_36_INTEGRATE,
    POSITION_INPUTS_36_LIMIT,
    POSITION_INPUTS_36_SPIKE,
    POSITION_INPUTS_36_REFRACTORY,
};

// position_inputs_36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs36States state;
} PositionInputs36;

// position_inputs_36 Initialisation function
void PositionInputs36Init(PositionInputs36* me);

// position_inputs_36 Execution function
void PositionInputs36Run(PositionInputs36* me);

#endif // POSITION_INPUTS_36_H_