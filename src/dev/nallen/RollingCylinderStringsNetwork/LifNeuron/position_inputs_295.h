#ifndef POSITION_INPUTS_295_H_
#define POSITION_INPUTS_295_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_295 States
enum PositionInputs295States {
    POSITION_INPUTS_295_INTEGRATE,
    POSITION_INPUTS_295_LIMIT,
    POSITION_INPUTS_295_SPIKE,
    POSITION_INPUTS_295_REFRACTORY,
};

// position_inputs_295 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs295States state;
} PositionInputs295;

// position_inputs_295 Initialisation function
void PositionInputs295Init(PositionInputs295* me);

// position_inputs_295 Execution function
void PositionInputs295Run(PositionInputs295* me);

#endif // POSITION_INPUTS_295_H_