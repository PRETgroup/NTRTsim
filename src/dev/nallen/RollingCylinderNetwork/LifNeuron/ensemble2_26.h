#ifndef ENSEMBLE2_26_H_
#define ENSEMBLE2_26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_26 States
enum Ensemble226States {
    ENSEMBLE2_26_INTEGRATE,
    ENSEMBLE2_26_LIMIT,
    ENSEMBLE2_26_SPIKE,
    ENSEMBLE2_26_REFRACTORY,
};

// ensemble2_26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble226States state;
} Ensemble226;

// ensemble2_26 Initialisation function
void Ensemble226Init(Ensemble226* me);

// ensemble2_26 Execution function
void Ensemble226Run(Ensemble226* me);

#endif // ENSEMBLE2_26_H_