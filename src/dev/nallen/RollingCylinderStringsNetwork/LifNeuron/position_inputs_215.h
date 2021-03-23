#ifndef POSITION_INPUTS_215_H_
#define POSITION_INPUTS_215_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_215 States
enum PositionInputs215States {
    POSITION_INPUTS_215_INTEGRATE,
    POSITION_INPUTS_215_LIMIT,
    POSITION_INPUTS_215_SPIKE,
    POSITION_INPUTS_215_REFRACTORY,
};

// position_inputs_215 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs215States state;
} PositionInputs215;

// position_inputs_215 Initialisation function
void PositionInputs215Init(PositionInputs215* me);

// position_inputs_215 Execution function
void PositionInputs215Run(PositionInputs215* me);

#endif // POSITION_INPUTS_215_H_