#ifndef POSITION_INPUTS_168_H_
#define POSITION_INPUTS_168_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_168 States
enum PositionInputs168States {
    POSITION_INPUTS_168_INTEGRATE,
    POSITION_INPUTS_168_LIMIT,
    POSITION_INPUTS_168_SPIKE,
    POSITION_INPUTS_168_REFRACTORY,
};

// position_inputs_168 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs168States state;
} PositionInputs168;

// position_inputs_168 Initialisation function
void PositionInputs168Init(PositionInputs168* me);

// position_inputs_168 Execution function
void PositionInputs168Run(PositionInputs168* me);

#endif // POSITION_INPUTS_168_H_