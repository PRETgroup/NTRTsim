#ifndef ENSEMBLE2_91_H_
#define ENSEMBLE2_91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_91 States
enum Ensemble291States {
    ENSEMBLE2_91_INTEGRATE,
    ENSEMBLE2_91_LIMIT,
    ENSEMBLE2_91_SPIKE,
    ENSEMBLE2_91_REFRACTORY,
};

// ensemble2_91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble291States state;
} Ensemble291;

// ensemble2_91 Initialisation function
void Ensemble291Init(Ensemble291* me);

// ensemble2_91 Execution function
void Ensemble291Run(Ensemble291* me);

#endif // ENSEMBLE2_91_H_