#ifndef ENSEMBLE0_67_H_
#define ENSEMBLE0_67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_67 States
enum Ensemble067States {
    ENSEMBLE0_67_INTEGRATE,
    ENSEMBLE0_67_LIMIT,
    ENSEMBLE0_67_SPIKE,
    ENSEMBLE0_67_REFRACTORY,
};

// ensemble0_67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble067States state;
} Ensemble067;

// ensemble0_67 Initialisation function
void Ensemble067Init(Ensemble067* me);

// ensemble0_67 Execution function
void Ensemble067Run(Ensemble067* me);

#endif // ENSEMBLE0_67_H_