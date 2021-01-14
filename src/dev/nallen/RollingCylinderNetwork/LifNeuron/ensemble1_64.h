#ifndef ENSEMBLE1_64_H_
#define ENSEMBLE1_64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_64 States
enum Ensemble164States {
    ENSEMBLE1_64_INTEGRATE,
    ENSEMBLE1_64_LIMIT,
    ENSEMBLE1_64_SPIKE,
    ENSEMBLE1_64_REFRACTORY,
};

// ensemble1_64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble164States state;
} Ensemble164;

// ensemble1_64 Initialisation function
void Ensemble164Init(Ensemble164* me);

// ensemble1_64 Execution function
void Ensemble164Run(Ensemble164* me);

#endif // ENSEMBLE1_64_H_