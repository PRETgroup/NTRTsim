#ifndef POSITION_INPUTS_322_H_
#define POSITION_INPUTS_322_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_322 States
enum PositionInputs322States {
    POSITION_INPUTS_322_INTEGRATE,
    POSITION_INPUTS_322_LIMIT,
    POSITION_INPUTS_322_SPIKE,
    POSITION_INPUTS_322_REFRACTORY,
};

// position_inputs_322 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs322States state;
} PositionInputs322;

// position_inputs_322 Initialisation function
void PositionInputs322Init(PositionInputs322* me);

// position_inputs_322 Execution function
void PositionInputs322Run(PositionInputs322* me);

#endif // POSITION_INPUTS_322_H_