#ifndef POSITION_INPUTS_211_H_
#define POSITION_INPUTS_211_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_211 States
enum PositionInputs211States {
    POSITION_INPUTS_211_INTEGRATE,
    POSITION_INPUTS_211_LIMIT,
    POSITION_INPUTS_211_SPIKE,
    POSITION_INPUTS_211_REFRACTORY,
};

// position_inputs_211 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs211States state;
} PositionInputs211;

// position_inputs_211 Initialisation function
void PositionInputs211Init(PositionInputs211* me);

// position_inputs_211 Execution function
void PositionInputs211Run(PositionInputs211* me);

#endif // POSITION_INPUTS_211_H_