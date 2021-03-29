#ifndef POSITION_INPUTS_117_H_
#define POSITION_INPUTS_117_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_117 States
enum PositionInputs117States {
    POSITION_INPUTS_117_INTEGRATE,
    POSITION_INPUTS_117_LIMIT,
    POSITION_INPUTS_117_SPIKE,
    POSITION_INPUTS_117_REFRACTORY,
};

// position_inputs_117 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs117States state;
} PositionInputs117;

// position_inputs_117 Initialisation function
void PositionInputs117Init(PositionInputs117* me);

// position_inputs_117 Execution function
void PositionInputs117Run(PositionInputs117* me);

#endif // POSITION_INPUTS_117_H_