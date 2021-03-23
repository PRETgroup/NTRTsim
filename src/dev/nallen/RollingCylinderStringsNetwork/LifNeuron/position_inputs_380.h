#ifndef POSITION_INPUTS_380_H_
#define POSITION_INPUTS_380_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_380 States
enum PositionInputs380States {
    POSITION_INPUTS_380_INTEGRATE,
    POSITION_INPUTS_380_LIMIT,
    POSITION_INPUTS_380_SPIKE,
    POSITION_INPUTS_380_REFRACTORY,
};

// position_inputs_380 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs380States state;
} PositionInputs380;

// position_inputs_380 Initialisation function
void PositionInputs380Init(PositionInputs380* me);

// position_inputs_380 Execution function
void PositionInputs380Run(PositionInputs380* me);

#endif // POSITION_INPUTS_380_H_