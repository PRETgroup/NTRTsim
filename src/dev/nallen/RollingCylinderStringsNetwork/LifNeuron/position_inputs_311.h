#ifndef POSITION_INPUTS_311_H_
#define POSITION_INPUTS_311_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_311 States
enum PositionInputs311States {
    POSITION_INPUTS_311_INTEGRATE,
    POSITION_INPUTS_311_LIMIT,
    POSITION_INPUTS_311_SPIKE,
    POSITION_INPUTS_311_REFRACTORY,
};

// position_inputs_311 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs311States state;
} PositionInputs311;

// position_inputs_311 Initialisation function
void PositionInputs311Init(PositionInputs311* me);

// position_inputs_311 Execution function
void PositionInputs311Run(PositionInputs311* me);

#endif // POSITION_INPUTS_311_H_