#ifndef ENSEMBLE0_61_H_
#define ENSEMBLE0_61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_61 States
enum Ensemble061States {
    ENSEMBLE0_61_INTEGRATE,
    ENSEMBLE0_61_LIMIT,
    ENSEMBLE0_61_SPIKE,
    ENSEMBLE0_61_REFRACTORY,
};

// ensemble0_61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble061States state;
} Ensemble061;

// ensemble0_61 Initialisation function
void Ensemble061Init(Ensemble061* me);

// ensemble0_61 Execution function
void Ensemble061Run(Ensemble061* me);

#endif // ENSEMBLE0_61_H_