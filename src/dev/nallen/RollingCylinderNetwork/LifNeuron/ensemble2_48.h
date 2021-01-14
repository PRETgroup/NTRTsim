#ifndef ENSEMBLE2_48_H_
#define ENSEMBLE2_48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_48 States
enum Ensemble248States {
    ENSEMBLE2_48_INTEGRATE,
    ENSEMBLE2_48_LIMIT,
    ENSEMBLE2_48_SPIKE,
    ENSEMBLE2_48_REFRACTORY,
};

// ensemble2_48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble248States state;
} Ensemble248;

// ensemble2_48 Initialisation function
void Ensemble248Init(Ensemble248* me);

// ensemble2_48 Execution function
void Ensemble248Run(Ensemble248* me);

#endif // ENSEMBLE2_48_H_