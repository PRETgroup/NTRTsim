#ifndef POSITION_INPUTS_390_H_
#define POSITION_INPUTS_390_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_390 States
enum PositionInputs390States {
    POSITION_INPUTS_390_INTEGRATE,
    POSITION_INPUTS_390_LIMIT,
    POSITION_INPUTS_390_SPIKE,
    POSITION_INPUTS_390_REFRACTORY,
};

// position_inputs_390 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs390States state;
} PositionInputs390;

// position_inputs_390 Initialisation function
void PositionInputs390Init(PositionInputs390* me);

// position_inputs_390 Execution function
void PositionInputs390Run(PositionInputs390* me);

#endif // POSITION_INPUTS_390_H_