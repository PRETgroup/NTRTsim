#ifndef POSITION_INPUTS_307_H_
#define POSITION_INPUTS_307_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_307 States
enum PositionInputs307States {
    POSITION_INPUTS_307_INTEGRATE,
    POSITION_INPUTS_307_LIMIT,
    POSITION_INPUTS_307_SPIKE,
    POSITION_INPUTS_307_REFRACTORY,
};

// position_inputs_307 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs307States state;
} PositionInputs307;

// position_inputs_307 Initialisation function
void PositionInputs307Init(PositionInputs307* me);

// position_inputs_307 Execution function
void PositionInputs307Run(PositionInputs307* me);

#endif // POSITION_INPUTS_307_H_