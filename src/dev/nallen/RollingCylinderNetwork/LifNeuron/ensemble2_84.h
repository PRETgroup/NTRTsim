#ifndef ENSEMBLE2_84_H_
#define ENSEMBLE2_84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_84 States
enum Ensemble284States {
    ENSEMBLE2_84_INTEGRATE,
    ENSEMBLE2_84_LIMIT,
    ENSEMBLE2_84_SPIKE,
    ENSEMBLE2_84_REFRACTORY,
};

// ensemble2_84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble284States state;
} Ensemble284;

// ensemble2_84 Initialisation function
void Ensemble284Init(Ensemble284* me);

// ensemble2_84 Execution function
void Ensemble284Run(Ensemble284* me);

#endif // ENSEMBLE2_84_H_