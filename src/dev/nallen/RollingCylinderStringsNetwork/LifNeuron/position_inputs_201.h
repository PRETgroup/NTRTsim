#ifndef POSITION_INPUTS_201_H_
#define POSITION_INPUTS_201_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_201 States
enum PositionInputs201States {
    POSITION_INPUTS_201_INTEGRATE,
    POSITION_INPUTS_201_LIMIT,
    POSITION_INPUTS_201_SPIKE,
    POSITION_INPUTS_201_REFRACTORY,
};

// position_inputs_201 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs201States state;
} PositionInputs201;

// position_inputs_201 Initialisation function
void PositionInputs201Init(PositionInputs201* me);

// position_inputs_201 Execution function
void PositionInputs201Run(PositionInputs201* me);

#endif // POSITION_INPUTS_201_H_