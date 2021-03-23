#ifndef POSITION_INPUTS_69_H_
#define POSITION_INPUTS_69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_69 States
enum PositionInputs69States {
    POSITION_INPUTS_69_INTEGRATE,
    POSITION_INPUTS_69_LIMIT,
    POSITION_INPUTS_69_SPIKE,
    POSITION_INPUTS_69_REFRACTORY,
};

// position_inputs_69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs69States state;
} PositionInputs69;

// position_inputs_69 Initialisation function
void PositionInputs69Init(PositionInputs69* me);

// position_inputs_69 Execution function
void PositionInputs69Run(PositionInputs69* me);

#endif // POSITION_INPUTS_69_H_