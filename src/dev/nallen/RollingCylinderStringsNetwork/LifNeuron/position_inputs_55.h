#ifndef POSITION_INPUTS_55_H_
#define POSITION_INPUTS_55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_55 States
enum PositionInputs55States {
    POSITION_INPUTS_55_INTEGRATE,
    POSITION_INPUTS_55_LIMIT,
    POSITION_INPUTS_55_SPIKE,
    POSITION_INPUTS_55_REFRACTORY,
};

// position_inputs_55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs55States state;
} PositionInputs55;

// position_inputs_55 Initialisation function
void PositionInputs55Init(PositionInputs55* me);

// position_inputs_55 Execution function
void PositionInputs55Run(PositionInputs55* me);

#endif // POSITION_INPUTS_55_H_