#ifndef POSITION_INPUTS_312_H_
#define POSITION_INPUTS_312_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_312 States
enum PositionInputs312States {
    POSITION_INPUTS_312_INTEGRATE,
    POSITION_INPUTS_312_LIMIT,
    POSITION_INPUTS_312_SPIKE,
    POSITION_INPUTS_312_REFRACTORY,
};

// position_inputs_312 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs312States state;
} PositionInputs312;

// position_inputs_312 Initialisation function
void PositionInputs312Init(PositionInputs312* me);

// position_inputs_312 Execution function
void PositionInputs312Run(PositionInputs312* me);

#endif // POSITION_INPUTS_312_H_