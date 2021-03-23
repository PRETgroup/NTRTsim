#ifndef POSITION_INPUTS_39_H_
#define POSITION_INPUTS_39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_39 States
enum PositionInputs39States {
    POSITION_INPUTS_39_INTEGRATE,
    POSITION_INPUTS_39_LIMIT,
    POSITION_INPUTS_39_SPIKE,
    POSITION_INPUTS_39_REFRACTORY,
};

// position_inputs_39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs39States state;
} PositionInputs39;

// position_inputs_39 Initialisation function
void PositionInputs39Init(PositionInputs39* me);

// position_inputs_39 Execution function
void PositionInputs39Run(PositionInputs39* me);

#endif // POSITION_INPUTS_39_H_