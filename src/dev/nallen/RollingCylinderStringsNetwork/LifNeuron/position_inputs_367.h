#ifndef POSITION_INPUTS_367_H_
#define POSITION_INPUTS_367_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_367 States
enum PositionInputs367States {
    POSITION_INPUTS_367_INTEGRATE,
    POSITION_INPUTS_367_LIMIT,
    POSITION_INPUTS_367_SPIKE,
    POSITION_INPUTS_367_REFRACTORY,
};

// position_inputs_367 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs367States state;
} PositionInputs367;

// position_inputs_367 Initialisation function
void PositionInputs367Init(PositionInputs367* me);

// position_inputs_367 Execution function
void PositionInputs367Run(PositionInputs367* me);

#endif // POSITION_INPUTS_367_H_