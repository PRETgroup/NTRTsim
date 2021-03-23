#ifndef POSITION_INPUTS_104_H_
#define POSITION_INPUTS_104_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_104 States
enum PositionInputs104States {
    POSITION_INPUTS_104_INTEGRATE,
    POSITION_INPUTS_104_LIMIT,
    POSITION_INPUTS_104_SPIKE,
    POSITION_INPUTS_104_REFRACTORY,
};

// position_inputs_104 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs104States state;
} PositionInputs104;

// position_inputs_104 Initialisation function
void PositionInputs104Init(PositionInputs104* me);

// position_inputs_104 Execution function
void PositionInputs104Run(PositionInputs104* me);

#endif // POSITION_INPUTS_104_H_