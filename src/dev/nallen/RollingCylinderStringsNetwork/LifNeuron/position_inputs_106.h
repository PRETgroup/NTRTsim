#ifndef POSITION_INPUTS_106_H_
#define POSITION_INPUTS_106_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_106 States
enum PositionInputs106States {
    POSITION_INPUTS_106_INTEGRATE,
    POSITION_INPUTS_106_LIMIT,
    POSITION_INPUTS_106_SPIKE,
    POSITION_INPUTS_106_REFRACTORY,
};

// position_inputs_106 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs106States state;
} PositionInputs106;

// position_inputs_106 Initialisation function
void PositionInputs106Init(PositionInputs106* me);

// position_inputs_106 Execution function
void PositionInputs106Run(PositionInputs106* me);

#endif // POSITION_INPUTS_106_H_