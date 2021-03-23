#ifndef POSITION_INPUTS_371_H_
#define POSITION_INPUTS_371_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_371 States
enum PositionInputs371States {
    POSITION_INPUTS_371_INTEGRATE,
    POSITION_INPUTS_371_LIMIT,
    POSITION_INPUTS_371_SPIKE,
    POSITION_INPUTS_371_REFRACTORY,
};

// position_inputs_371 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs371States state;
} PositionInputs371;

// position_inputs_371 Initialisation function
void PositionInputs371Init(PositionInputs371* me);

// position_inputs_371 Execution function
void PositionInputs371Run(PositionInputs371* me);

#endif // POSITION_INPUTS_371_H_