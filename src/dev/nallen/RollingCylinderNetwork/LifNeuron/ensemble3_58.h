#ifndef ENSEMBLE3_58_H_
#define ENSEMBLE3_58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_58 States
enum Ensemble358States {
    ENSEMBLE3_58_INTEGRATE,
    ENSEMBLE3_58_LIMIT,
    ENSEMBLE3_58_SPIKE,
    ENSEMBLE3_58_REFRACTORY,
};

// ensemble3_58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble358States state;
} Ensemble358;

// ensemble3_58 Initialisation function
void Ensemble358Init(Ensemble358* me);

// ensemble3_58 Execution function
void Ensemble358Run(Ensemble358* me);

#endif // ENSEMBLE3_58_H_