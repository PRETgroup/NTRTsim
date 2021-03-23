#ifndef POSITION_INPUTS_227_H_
#define POSITION_INPUTS_227_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_227 States
enum PositionInputs227States {
    POSITION_INPUTS_227_INTEGRATE,
    POSITION_INPUTS_227_LIMIT,
    POSITION_INPUTS_227_SPIKE,
    POSITION_INPUTS_227_REFRACTORY,
};

// position_inputs_227 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs227States state;
} PositionInputs227;

// position_inputs_227 Initialisation function
void PositionInputs227Init(PositionInputs227* me);

// position_inputs_227 Execution function
void PositionInputs227Run(PositionInputs227* me);

#endif // POSITION_INPUTS_227_H_