#ifndef POSITION_INPUTS_275_H_
#define POSITION_INPUTS_275_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_275 States
enum PositionInputs275States {
    POSITION_INPUTS_275_INTEGRATE,
    POSITION_INPUTS_275_LIMIT,
    POSITION_INPUTS_275_SPIKE,
    POSITION_INPUTS_275_REFRACTORY,
};

// position_inputs_275 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs275States state;
} PositionInputs275;

// position_inputs_275 Initialisation function
void PositionInputs275Init(PositionInputs275* me);

// position_inputs_275 Execution function
void PositionInputs275Run(PositionInputs275* me);

#endif // POSITION_INPUTS_275_H_