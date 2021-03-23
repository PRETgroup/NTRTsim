#ifndef POSITION_INPUTS_137_H_
#define POSITION_INPUTS_137_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_137 States
enum PositionInputs137States {
    POSITION_INPUTS_137_INTEGRATE,
    POSITION_INPUTS_137_LIMIT,
    POSITION_INPUTS_137_SPIKE,
    POSITION_INPUTS_137_REFRACTORY,
};

// position_inputs_137 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs137States state;
} PositionInputs137;

// position_inputs_137 Initialisation function
void PositionInputs137Init(PositionInputs137* me);

// position_inputs_137 Execution function
void PositionInputs137Run(PositionInputs137* me);

#endif // POSITION_INPUTS_137_H_