#ifndef POSITION_INPUTS_263_H_
#define POSITION_INPUTS_263_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_263 States
enum PositionInputs263States {
    POSITION_INPUTS_263_INTEGRATE,
    POSITION_INPUTS_263_LIMIT,
    POSITION_INPUTS_263_SPIKE,
    POSITION_INPUTS_263_REFRACTORY,
};

// position_inputs_263 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs263States state;
} PositionInputs263;

// position_inputs_263 Initialisation function
void PositionInputs263Init(PositionInputs263* me);

// position_inputs_263 Execution function
void PositionInputs263Run(PositionInputs263* me);

#endif // POSITION_INPUTS_263_H_