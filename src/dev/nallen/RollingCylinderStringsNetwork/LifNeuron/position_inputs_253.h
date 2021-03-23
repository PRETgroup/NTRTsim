#ifndef POSITION_INPUTS_253_H_
#define POSITION_INPUTS_253_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_253 States
enum PositionInputs253States {
    POSITION_INPUTS_253_INTEGRATE,
    POSITION_INPUTS_253_LIMIT,
    POSITION_INPUTS_253_SPIKE,
    POSITION_INPUTS_253_REFRACTORY,
};

// position_inputs_253 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs253States state;
} PositionInputs253;

// position_inputs_253 Initialisation function
void PositionInputs253Init(PositionInputs253* me);

// position_inputs_253 Execution function
void PositionInputs253Run(PositionInputs253* me);

#endif // POSITION_INPUTS_253_H_