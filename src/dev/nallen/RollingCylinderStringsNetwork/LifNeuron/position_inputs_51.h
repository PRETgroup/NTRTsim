#ifndef POSITION_INPUTS_51_H_
#define POSITION_INPUTS_51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_51 States
enum PositionInputs51States {
    POSITION_INPUTS_51_INTEGRATE,
    POSITION_INPUTS_51_LIMIT,
    POSITION_INPUTS_51_SPIKE,
    POSITION_INPUTS_51_REFRACTORY,
};

// position_inputs_51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs51States state;
} PositionInputs51;

// position_inputs_51 Initialisation function
void PositionInputs51Init(PositionInputs51* me);

// position_inputs_51 Execution function
void PositionInputs51Run(PositionInputs51* me);

#endif // POSITION_INPUTS_51_H_