#ifndef POSITION_INPUTS_280_H_
#define POSITION_INPUTS_280_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_280 States
enum PositionInputs280States {
    POSITION_INPUTS_280_INTEGRATE,
    POSITION_INPUTS_280_LIMIT,
    POSITION_INPUTS_280_SPIKE,
    POSITION_INPUTS_280_REFRACTORY,
};

// position_inputs_280 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs280States state;
} PositionInputs280;

// position_inputs_280 Initialisation function
void PositionInputs280Init(PositionInputs280* me);

// position_inputs_280 Execution function
void PositionInputs280Run(PositionInputs280* me);

#endif // POSITION_INPUTS_280_H_