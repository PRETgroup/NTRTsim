#ifndef POSITION_INPUTS_386_H_
#define POSITION_INPUTS_386_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_386 States
enum PositionInputs386States {
    POSITION_INPUTS_386_INTEGRATE,
    POSITION_INPUTS_386_LIMIT,
    POSITION_INPUTS_386_SPIKE,
    POSITION_INPUTS_386_REFRACTORY,
};

// position_inputs_386 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs386States state;
} PositionInputs386;

// position_inputs_386 Initialisation function
void PositionInputs386Init(PositionInputs386* me);

// position_inputs_386 Execution function
void PositionInputs386Run(PositionInputs386* me);

#endif // POSITION_INPUTS_386_H_