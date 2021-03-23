#ifndef POSITION_INPUTS_214_H_
#define POSITION_INPUTS_214_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_214 States
enum PositionInputs214States {
    POSITION_INPUTS_214_INTEGRATE,
    POSITION_INPUTS_214_LIMIT,
    POSITION_INPUTS_214_SPIKE,
    POSITION_INPUTS_214_REFRACTORY,
};

// position_inputs_214 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs214States state;
} PositionInputs214;

// position_inputs_214 Initialisation function
void PositionInputs214Init(PositionInputs214* me);

// position_inputs_214 Execution function
void PositionInputs214Run(PositionInputs214* me);

#endif // POSITION_INPUTS_214_H_