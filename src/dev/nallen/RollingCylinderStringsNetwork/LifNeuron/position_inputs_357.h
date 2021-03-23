#ifndef POSITION_INPUTS_357_H_
#define POSITION_INPUTS_357_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_357 States
enum PositionInputs357States {
    POSITION_INPUTS_357_INTEGRATE,
    POSITION_INPUTS_357_LIMIT,
    POSITION_INPUTS_357_SPIKE,
    POSITION_INPUTS_357_REFRACTORY,
};

// position_inputs_357 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs357States state;
} PositionInputs357;

// position_inputs_357 Initialisation function
void PositionInputs357Init(PositionInputs357* me);

// position_inputs_357 Execution function
void PositionInputs357Run(PositionInputs357* me);

#endif // POSITION_INPUTS_357_H_