#ifndef POSITION_INPUTS_376_H_
#define POSITION_INPUTS_376_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_376 States
enum PositionInputs376States {
    POSITION_INPUTS_376_INTEGRATE,
    POSITION_INPUTS_376_LIMIT,
    POSITION_INPUTS_376_SPIKE,
    POSITION_INPUTS_376_REFRACTORY,
};

// position_inputs_376 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs376States state;
} PositionInputs376;

// position_inputs_376 Initialisation function
void PositionInputs376Init(PositionInputs376* me);

// position_inputs_376 Execution function
void PositionInputs376Run(PositionInputs376* me);

#endif // POSITION_INPUTS_376_H_