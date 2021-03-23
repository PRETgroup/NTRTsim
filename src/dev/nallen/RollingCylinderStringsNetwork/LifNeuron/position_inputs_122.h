#ifndef POSITION_INPUTS_122_H_
#define POSITION_INPUTS_122_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_122 States
enum PositionInputs122States {
    POSITION_INPUTS_122_INTEGRATE,
    POSITION_INPUTS_122_LIMIT,
    POSITION_INPUTS_122_SPIKE,
    POSITION_INPUTS_122_REFRACTORY,
};

// position_inputs_122 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs122States state;
} PositionInputs122;

// position_inputs_122 Initialisation function
void PositionInputs122Init(PositionInputs122* me);

// position_inputs_122 Execution function
void PositionInputs122Run(PositionInputs122* me);

#endif // POSITION_INPUTS_122_H_