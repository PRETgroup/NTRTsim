#ifndef POSITION_INPUTS_288_H_
#define POSITION_INPUTS_288_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_288 States
enum PositionInputs288States {
    POSITION_INPUTS_288_INTEGRATE,
    POSITION_INPUTS_288_LIMIT,
    POSITION_INPUTS_288_SPIKE,
    POSITION_INPUTS_288_REFRACTORY,
};

// position_inputs_288 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs288States state;
} PositionInputs288;

// position_inputs_288 Initialisation function
void PositionInputs288Init(PositionInputs288* me);

// position_inputs_288 Execution function
void PositionInputs288Run(PositionInputs288* me);

#endif // POSITION_INPUTS_288_H_