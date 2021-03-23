#ifndef POSITION_INPUTS_138_H_
#define POSITION_INPUTS_138_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_138 States
enum PositionInputs138States {
    POSITION_INPUTS_138_INTEGRATE,
    POSITION_INPUTS_138_LIMIT,
    POSITION_INPUTS_138_SPIKE,
    POSITION_INPUTS_138_REFRACTORY,
};

// position_inputs_138 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs138States state;
} PositionInputs138;

// position_inputs_138 Initialisation function
void PositionInputs138Init(PositionInputs138* me);

// position_inputs_138 Execution function
void PositionInputs138Run(PositionInputs138* me);

#endif // POSITION_INPUTS_138_H_