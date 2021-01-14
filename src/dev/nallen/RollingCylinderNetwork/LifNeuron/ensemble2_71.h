#ifndef ENSEMBLE2_71_H_
#define ENSEMBLE2_71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_71 States
enum Ensemble271States {
    ENSEMBLE2_71_INTEGRATE,
    ENSEMBLE2_71_LIMIT,
    ENSEMBLE2_71_SPIKE,
    ENSEMBLE2_71_REFRACTORY,
};

// ensemble2_71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble271States state;
} Ensemble271;

// ensemble2_71 Initialisation function
void Ensemble271Init(Ensemble271* me);

// ensemble2_71 Execution function
void Ensemble271Run(Ensemble271* me);

#endif // ENSEMBLE2_71_H_