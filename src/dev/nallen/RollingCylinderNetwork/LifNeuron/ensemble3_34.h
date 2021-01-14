#ifndef ENSEMBLE3_34_H_
#define ENSEMBLE3_34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_34 States
enum Ensemble334States {
    ENSEMBLE3_34_INTEGRATE,
    ENSEMBLE3_34_LIMIT,
    ENSEMBLE3_34_SPIKE,
    ENSEMBLE3_34_REFRACTORY,
};

// ensemble3_34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble334States state;
} Ensemble334;

// ensemble3_34 Initialisation function
void Ensemble334Init(Ensemble334* me);

// ensemble3_34 Execution function
void Ensemble334Run(Ensemble334* me);

#endif // ENSEMBLE3_34_H_