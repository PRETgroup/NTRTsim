#ifndef POSITION_INPUTS_345_H_
#define POSITION_INPUTS_345_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_345 States
enum PositionInputs345States {
    POSITION_INPUTS_345_INTEGRATE,
    POSITION_INPUTS_345_LIMIT,
    POSITION_INPUTS_345_SPIKE,
    POSITION_INPUTS_345_REFRACTORY,
};

// position_inputs_345 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs345States state;
} PositionInputs345;

// position_inputs_345 Initialisation function
void PositionInputs345Init(PositionInputs345* me);

// position_inputs_345 Execution function
void PositionInputs345Run(PositionInputs345* me);

#endif // POSITION_INPUTS_345_H_