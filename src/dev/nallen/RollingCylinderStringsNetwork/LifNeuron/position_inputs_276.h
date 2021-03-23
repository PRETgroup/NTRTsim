#ifndef POSITION_INPUTS_276_H_
#define POSITION_INPUTS_276_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_276 States
enum PositionInputs276States {
    POSITION_INPUTS_276_INTEGRATE,
    POSITION_INPUTS_276_LIMIT,
    POSITION_INPUTS_276_SPIKE,
    POSITION_INPUTS_276_REFRACTORY,
};

// position_inputs_276 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs276States state;
} PositionInputs276;

// position_inputs_276 Initialisation function
void PositionInputs276Init(PositionInputs276* me);

// position_inputs_276 Execution function
void PositionInputs276Run(PositionInputs276* me);

#endif // POSITION_INPUTS_276_H_