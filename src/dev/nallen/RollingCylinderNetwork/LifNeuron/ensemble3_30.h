#ifndef ENSEMBLE3_30_H_
#define ENSEMBLE3_30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_30 States
enum Ensemble330States {
    ENSEMBLE3_30_INTEGRATE,
    ENSEMBLE3_30_LIMIT,
    ENSEMBLE3_30_SPIKE,
    ENSEMBLE3_30_REFRACTORY,
};

// ensemble3_30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble330States state;
} Ensemble330;

// ensemble3_30 Initialisation function
void Ensemble330Init(Ensemble330* me);

// ensemble3_30 Execution function
void Ensemble330Run(Ensemble330* me);

#endif // ENSEMBLE3_30_H_