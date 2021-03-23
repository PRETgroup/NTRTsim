#ifndef POSITION_INPUTS_194_H_
#define POSITION_INPUTS_194_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_194 States
enum PositionInputs194States {
    POSITION_INPUTS_194_INTEGRATE,
    POSITION_INPUTS_194_LIMIT,
    POSITION_INPUTS_194_SPIKE,
    POSITION_INPUTS_194_REFRACTORY,
};

// position_inputs_194 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs194States state;
} PositionInputs194;

// position_inputs_194 Initialisation function
void PositionInputs194Init(PositionInputs194* me);

// position_inputs_194 Execution function
void PositionInputs194Run(PositionInputs194* me);

#endif // POSITION_INPUTS_194_H_