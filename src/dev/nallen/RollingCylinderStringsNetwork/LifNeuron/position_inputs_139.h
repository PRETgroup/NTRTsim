#ifndef POSITION_INPUTS_139_H_
#define POSITION_INPUTS_139_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_139 States
enum PositionInputs139States {
    POSITION_INPUTS_139_INTEGRATE,
    POSITION_INPUTS_139_LIMIT,
    POSITION_INPUTS_139_SPIKE,
    POSITION_INPUTS_139_REFRACTORY,
};

// position_inputs_139 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs139States state;
} PositionInputs139;

// position_inputs_139 Initialisation function
void PositionInputs139Init(PositionInputs139* me);

// position_inputs_139 Execution function
void PositionInputs139Run(PositionInputs139* me);

#endif // POSITION_INPUTS_139_H_