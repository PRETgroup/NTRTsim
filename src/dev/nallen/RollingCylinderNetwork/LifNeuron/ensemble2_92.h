#ifndef ENSEMBLE2_92_H_
#define ENSEMBLE2_92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_92 States
enum Ensemble292States {
    ENSEMBLE2_92_INTEGRATE,
    ENSEMBLE2_92_LIMIT,
    ENSEMBLE2_92_SPIKE,
    ENSEMBLE2_92_REFRACTORY,
};

// ensemble2_92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble292States state;
} Ensemble292;

// ensemble2_92 Initialisation function
void Ensemble292Init(Ensemble292* me);

// ensemble2_92 Execution function
void Ensemble292Run(Ensemble292* me);

#endif // ENSEMBLE2_92_H_