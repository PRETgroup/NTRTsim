#ifndef POSITION_INPUTS_232_H_
#define POSITION_INPUTS_232_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_232 States
enum PositionInputs232States {
    POSITION_INPUTS_232_INTEGRATE,
    POSITION_INPUTS_232_LIMIT,
    POSITION_INPUTS_232_SPIKE,
    POSITION_INPUTS_232_REFRACTORY,
};

// position_inputs_232 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs232States state;
} PositionInputs232;

// position_inputs_232 Initialisation function
void PositionInputs232Init(PositionInputs232* me);

// position_inputs_232 Execution function
void PositionInputs232Run(PositionInputs232* me);

#endif // POSITION_INPUTS_232_H_