#ifndef POSITION_INPUTS_326_H_
#define POSITION_INPUTS_326_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_326 States
enum PositionInputs326States {
    POSITION_INPUTS_326_INTEGRATE,
    POSITION_INPUTS_326_LIMIT,
    POSITION_INPUTS_326_SPIKE,
    POSITION_INPUTS_326_REFRACTORY,
};

// position_inputs_326 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs326States state;
} PositionInputs326;

// position_inputs_326 Initialisation function
void PositionInputs326Init(PositionInputs326* me);

// position_inputs_326 Execution function
void PositionInputs326Run(PositionInputs326* me);

#endif // POSITION_INPUTS_326_H_