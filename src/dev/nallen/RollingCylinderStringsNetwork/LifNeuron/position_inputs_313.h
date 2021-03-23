#ifndef POSITION_INPUTS_313_H_
#define POSITION_INPUTS_313_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_313 States
enum PositionInputs313States {
    POSITION_INPUTS_313_INTEGRATE,
    POSITION_INPUTS_313_LIMIT,
    POSITION_INPUTS_313_SPIKE,
    POSITION_INPUTS_313_REFRACTORY,
};

// position_inputs_313 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs313States state;
} PositionInputs313;

// position_inputs_313 Initialisation function
void PositionInputs313Init(PositionInputs313* me);

// position_inputs_313 Execution function
void PositionInputs313Run(PositionInputs313* me);

#endif // POSITION_INPUTS_313_H_