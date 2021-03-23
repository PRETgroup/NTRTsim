#ifndef POSITION_INPUTS_350_H_
#define POSITION_INPUTS_350_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_350 States
enum PositionInputs350States {
    POSITION_INPUTS_350_INTEGRATE,
    POSITION_INPUTS_350_LIMIT,
    POSITION_INPUTS_350_SPIKE,
    POSITION_INPUTS_350_REFRACTORY,
};

// position_inputs_350 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs350States state;
} PositionInputs350;

// position_inputs_350 Initialisation function
void PositionInputs350Init(PositionInputs350* me);

// position_inputs_350 Execution function
void PositionInputs350Run(PositionInputs350* me);

#endif // POSITION_INPUTS_350_H_