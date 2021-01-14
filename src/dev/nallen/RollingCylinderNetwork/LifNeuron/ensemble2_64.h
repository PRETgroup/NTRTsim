#ifndef ENSEMBLE2_64_H_
#define ENSEMBLE2_64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_64 States
enum Ensemble264States {
    ENSEMBLE2_64_INTEGRATE,
    ENSEMBLE2_64_LIMIT,
    ENSEMBLE2_64_SPIKE,
    ENSEMBLE2_64_REFRACTORY,
};

// ensemble2_64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble264States state;
} Ensemble264;

// ensemble2_64 Initialisation function
void Ensemble264Init(Ensemble264* me);

// ensemble2_64 Execution function
void Ensemble264Run(Ensemble264* me);

#endif // ENSEMBLE2_64_H_