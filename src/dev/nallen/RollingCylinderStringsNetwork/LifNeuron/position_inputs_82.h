#ifndef POSITION_INPUTS_82_H_
#define POSITION_INPUTS_82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_82 States
enum PositionInputs82States {
    POSITION_INPUTS_82_INTEGRATE,
    POSITION_INPUTS_82_LIMIT,
    POSITION_INPUTS_82_SPIKE,
    POSITION_INPUTS_82_REFRACTORY,
};

// position_inputs_82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs82States state;
} PositionInputs82;

// position_inputs_82 Initialisation function
void PositionInputs82Init(PositionInputs82* me);

// position_inputs_82 Execution function
void PositionInputs82Run(PositionInputs82* me);

#endif // POSITION_INPUTS_82_H_