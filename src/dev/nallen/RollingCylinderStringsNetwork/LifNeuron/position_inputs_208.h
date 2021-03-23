#ifndef POSITION_INPUTS_208_H_
#define POSITION_INPUTS_208_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_208 States
enum PositionInputs208States {
    POSITION_INPUTS_208_INTEGRATE,
    POSITION_INPUTS_208_LIMIT,
    POSITION_INPUTS_208_SPIKE,
    POSITION_INPUTS_208_REFRACTORY,
};

// position_inputs_208 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs208States state;
} PositionInputs208;

// position_inputs_208 Initialisation function
void PositionInputs208Init(PositionInputs208* me);

// position_inputs_208 Execution function
void PositionInputs208Run(PositionInputs208* me);

#endif // POSITION_INPUTS_208_H_