#ifndef POSITION_INPUTS_266_H_
#define POSITION_INPUTS_266_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_266 States
enum PositionInputs266States {
    POSITION_INPUTS_266_INTEGRATE,
    POSITION_INPUTS_266_LIMIT,
    POSITION_INPUTS_266_SPIKE,
    POSITION_INPUTS_266_REFRACTORY,
};

// position_inputs_266 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs266States state;
} PositionInputs266;

// position_inputs_266 Initialisation function
void PositionInputs266Init(PositionInputs266* me);

// position_inputs_266 Execution function
void PositionInputs266Run(PositionInputs266* me);

#endif // POSITION_INPUTS_266_H_