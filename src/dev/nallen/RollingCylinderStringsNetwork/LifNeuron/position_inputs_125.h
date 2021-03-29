#ifndef POSITION_INPUTS_125_H_
#define POSITION_INPUTS_125_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_125 States
enum PositionInputs125States {
    POSITION_INPUTS_125_INTEGRATE,
    POSITION_INPUTS_125_LIMIT,
    POSITION_INPUTS_125_SPIKE,
    POSITION_INPUTS_125_REFRACTORY,
};

// position_inputs_125 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs125States state;
} PositionInputs125;

// position_inputs_125 Initialisation function
void PositionInputs125Init(PositionInputs125* me);

// position_inputs_125 Execution function
void PositionInputs125Run(PositionInputs125* me);

#endif // POSITION_INPUTS_125_H_