#ifndef POSITION_INPUTS_66_H_
#define POSITION_INPUTS_66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_66 States
enum PositionInputs66States {
    POSITION_INPUTS_66_INTEGRATE,
    POSITION_INPUTS_66_LIMIT,
    POSITION_INPUTS_66_SPIKE,
    POSITION_INPUTS_66_REFRACTORY,
};

// position_inputs_66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs66States state;
} PositionInputs66;

// position_inputs_66 Initialisation function
void PositionInputs66Init(PositionInputs66* me);

// position_inputs_66 Execution function
void PositionInputs66Run(PositionInputs66* me);

#endif // POSITION_INPUTS_66_H_