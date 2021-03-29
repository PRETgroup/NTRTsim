#ifndef POSITION_INPUTS_134_H_
#define POSITION_INPUTS_134_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_134 States
enum PositionInputs134States {
    POSITION_INPUTS_134_INTEGRATE,
    POSITION_INPUTS_134_LIMIT,
    POSITION_INPUTS_134_SPIKE,
    POSITION_INPUTS_134_REFRACTORY,
};

// position_inputs_134 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs134States state;
} PositionInputs134;

// position_inputs_134 Initialisation function
void PositionInputs134Init(PositionInputs134* me);

// position_inputs_134 Execution function
void PositionInputs134Run(PositionInputs134* me);

#endif // POSITION_INPUTS_134_H_