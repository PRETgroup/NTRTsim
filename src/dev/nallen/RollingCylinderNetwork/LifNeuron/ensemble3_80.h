#ifndef ENSEMBLE3_80_H_
#define ENSEMBLE3_80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_80 States
enum Ensemble380States {
    ENSEMBLE3_80_INTEGRATE,
    ENSEMBLE3_80_LIMIT,
    ENSEMBLE3_80_SPIKE,
    ENSEMBLE3_80_REFRACTORY,
};

// ensemble3_80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble380States state;
} Ensemble380;

// ensemble3_80 Initialisation function
void Ensemble380Init(Ensemble380* me);

// ensemble3_80 Execution function
void Ensemble380Run(Ensemble380* me);

#endif // ENSEMBLE3_80_H_