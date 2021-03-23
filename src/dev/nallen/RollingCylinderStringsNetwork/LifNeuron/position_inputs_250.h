#ifndef POSITION_INPUTS_250_H_
#define POSITION_INPUTS_250_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_250 States
enum PositionInputs250States {
    POSITION_INPUTS_250_INTEGRATE,
    POSITION_INPUTS_250_LIMIT,
    POSITION_INPUTS_250_SPIKE,
    POSITION_INPUTS_250_REFRACTORY,
};

// position_inputs_250 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs250States state;
} PositionInputs250;

// position_inputs_250 Initialisation function
void PositionInputs250Init(PositionInputs250* me);

// position_inputs_250 Execution function
void PositionInputs250Run(PositionInputs250* me);

#endif // POSITION_INPUTS_250_H_