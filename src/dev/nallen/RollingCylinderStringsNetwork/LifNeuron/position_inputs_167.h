#ifndef POSITION_INPUTS_167_H_
#define POSITION_INPUTS_167_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_167 States
enum PositionInputs167States {
    POSITION_INPUTS_167_INTEGRATE,
    POSITION_INPUTS_167_LIMIT,
    POSITION_INPUTS_167_SPIKE,
    POSITION_INPUTS_167_REFRACTORY,
};

// position_inputs_167 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs167States state;
} PositionInputs167;

// position_inputs_167 Initialisation function
void PositionInputs167Init(PositionInputs167* me);

// position_inputs_167 Execution function
void PositionInputs167Run(PositionInputs167* me);

#endif // POSITION_INPUTS_167_H_