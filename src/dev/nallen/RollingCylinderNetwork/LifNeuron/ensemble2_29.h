#ifndef ENSEMBLE2_29_H_
#define ENSEMBLE2_29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_29 States
enum Ensemble229States {
    ENSEMBLE2_29_INTEGRATE,
    ENSEMBLE2_29_LIMIT,
    ENSEMBLE2_29_SPIKE,
    ENSEMBLE2_29_REFRACTORY,
};

// ensemble2_29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble229States state;
} Ensemble229;

// ensemble2_29 Initialisation function
void Ensemble229Init(Ensemble229* me);

// ensemble2_29 Execution function
void Ensemble229Run(Ensemble229* me);

#endif // ENSEMBLE2_29_H_