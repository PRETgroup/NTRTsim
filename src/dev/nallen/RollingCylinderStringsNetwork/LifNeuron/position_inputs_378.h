#ifndef POSITION_INPUTS_378_H_
#define POSITION_INPUTS_378_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_378 States
enum PositionInputs378States {
    POSITION_INPUTS_378_INTEGRATE,
    POSITION_INPUTS_378_LIMIT,
    POSITION_INPUTS_378_SPIKE,
    POSITION_INPUTS_378_REFRACTORY,
};

// position_inputs_378 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs378States state;
} PositionInputs378;

// position_inputs_378 Initialisation function
void PositionInputs378Init(PositionInputs378* me);

// position_inputs_378 Execution function
void PositionInputs378Run(PositionInputs378* me);

#endif // POSITION_INPUTS_378_H_