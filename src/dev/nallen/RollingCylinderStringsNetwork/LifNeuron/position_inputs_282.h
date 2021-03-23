#ifndef POSITION_INPUTS_282_H_
#define POSITION_INPUTS_282_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_282 States
enum PositionInputs282States {
    POSITION_INPUTS_282_INTEGRATE,
    POSITION_INPUTS_282_LIMIT,
    POSITION_INPUTS_282_SPIKE,
    POSITION_INPUTS_282_REFRACTORY,
};

// position_inputs_282 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs282States state;
} PositionInputs282;

// position_inputs_282 Initialisation function
void PositionInputs282Init(PositionInputs282* me);

// position_inputs_282 Execution function
void PositionInputs282Run(PositionInputs282* me);

#endif // POSITION_INPUTS_282_H_