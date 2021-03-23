#ifndef POSITION_INPUTS_331_H_
#define POSITION_INPUTS_331_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_331 States
enum PositionInputs331States {
    POSITION_INPUTS_331_INTEGRATE,
    POSITION_INPUTS_331_LIMIT,
    POSITION_INPUTS_331_SPIKE,
    POSITION_INPUTS_331_REFRACTORY,
};

// position_inputs_331 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs331States state;
} PositionInputs331;

// position_inputs_331 Initialisation function
void PositionInputs331Init(PositionInputs331* me);

// position_inputs_331 Execution function
void PositionInputs331Run(PositionInputs331* me);

#endif // POSITION_INPUTS_331_H_