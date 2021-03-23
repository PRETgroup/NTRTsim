#ifndef POSITION_INPUTS_173_H_
#define POSITION_INPUTS_173_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_173 States
enum PositionInputs173States {
    POSITION_INPUTS_173_INTEGRATE,
    POSITION_INPUTS_173_LIMIT,
    POSITION_INPUTS_173_SPIKE,
    POSITION_INPUTS_173_REFRACTORY,
};

// position_inputs_173 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs173States state;
} PositionInputs173;

// position_inputs_173 Initialisation function
void PositionInputs173Init(PositionInputs173* me);

// position_inputs_173 Execution function
void PositionInputs173Run(PositionInputs173* me);

#endif // POSITION_INPUTS_173_H_