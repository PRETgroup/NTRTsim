#ifndef POSITION_INPUTS_269_H_
#define POSITION_INPUTS_269_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_269 States
enum PositionInputs269States {
    POSITION_INPUTS_269_INTEGRATE,
    POSITION_INPUTS_269_LIMIT,
    POSITION_INPUTS_269_SPIKE,
    POSITION_INPUTS_269_REFRACTORY,
};

// position_inputs_269 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs269States state;
} PositionInputs269;

// position_inputs_269 Initialisation function
void PositionInputs269Init(PositionInputs269* me);

// position_inputs_269 Execution function
void PositionInputs269Run(PositionInputs269* me);

#endif // POSITION_INPUTS_269_H_