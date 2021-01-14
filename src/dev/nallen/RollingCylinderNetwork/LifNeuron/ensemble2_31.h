#ifndef ENSEMBLE2_31_H_
#define ENSEMBLE2_31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_31 States
enum Ensemble231States {
    ENSEMBLE2_31_INTEGRATE,
    ENSEMBLE2_31_LIMIT,
    ENSEMBLE2_31_SPIKE,
    ENSEMBLE2_31_REFRACTORY,
};

// ensemble2_31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble231States state;
} Ensemble231;

// ensemble2_31 Initialisation function
void Ensemble231Init(Ensemble231* me);

// ensemble2_31 Execution function
void Ensemble231Run(Ensemble231* me);

#endif // ENSEMBLE2_31_H_