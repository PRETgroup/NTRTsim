#ifndef POSITION_INPUTS_112_H_
#define POSITION_INPUTS_112_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_112 States
enum PositionInputs112States {
    POSITION_INPUTS_112_INTEGRATE,
    POSITION_INPUTS_112_LIMIT,
    POSITION_INPUTS_112_SPIKE,
    POSITION_INPUTS_112_REFRACTORY,
};

// position_inputs_112 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs112States state;
} PositionInputs112;

// position_inputs_112 Initialisation function
void PositionInputs112Init(PositionInputs112* me);

// position_inputs_112 Execution function
void PositionInputs112Run(PositionInputs112* me);

#endif // POSITION_INPUTS_112_H_