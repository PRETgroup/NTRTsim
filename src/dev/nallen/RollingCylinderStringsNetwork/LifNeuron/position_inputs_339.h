#ifndef POSITION_INPUTS_339_H_
#define POSITION_INPUTS_339_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_339 States
enum PositionInputs339States {
    POSITION_INPUTS_339_INTEGRATE,
    POSITION_INPUTS_339_LIMIT,
    POSITION_INPUTS_339_SPIKE,
    POSITION_INPUTS_339_REFRACTORY,
};

// position_inputs_339 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs339States state;
} PositionInputs339;

// position_inputs_339 Initialisation function
void PositionInputs339Init(PositionInputs339* me);

// position_inputs_339 Execution function
void PositionInputs339Run(PositionInputs339* me);

#endif // POSITION_INPUTS_339_H_