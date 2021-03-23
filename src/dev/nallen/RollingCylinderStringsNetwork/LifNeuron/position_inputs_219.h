#ifndef POSITION_INPUTS_219_H_
#define POSITION_INPUTS_219_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_219 States
enum PositionInputs219States {
    POSITION_INPUTS_219_INTEGRATE,
    POSITION_INPUTS_219_LIMIT,
    POSITION_INPUTS_219_SPIKE,
    POSITION_INPUTS_219_REFRACTORY,
};

// position_inputs_219 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs219States state;
} PositionInputs219;

// position_inputs_219 Initialisation function
void PositionInputs219Init(PositionInputs219* me);

// position_inputs_219 Execution function
void PositionInputs219Run(PositionInputs219* me);

#endif // POSITION_INPUTS_219_H_