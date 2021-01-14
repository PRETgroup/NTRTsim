#ifndef ENSEMBLE2_25_H_
#define ENSEMBLE2_25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_25 States
enum Ensemble225States {
    ENSEMBLE2_25_INTEGRATE,
    ENSEMBLE2_25_LIMIT,
    ENSEMBLE2_25_SPIKE,
    ENSEMBLE2_25_REFRACTORY,
};

// ensemble2_25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble225States state;
} Ensemble225;

// ensemble2_25 Initialisation function
void Ensemble225Init(Ensemble225* me);

// ensemble2_25 Execution function
void Ensemble225Run(Ensemble225* me);

#endif // ENSEMBLE2_25_H_