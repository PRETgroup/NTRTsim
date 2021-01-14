#ifndef ENSEMBLE2_54_H_
#define ENSEMBLE2_54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_54 States
enum Ensemble254States {
    ENSEMBLE2_54_INTEGRATE,
    ENSEMBLE2_54_LIMIT,
    ENSEMBLE2_54_SPIKE,
    ENSEMBLE2_54_REFRACTORY,
};

// ensemble2_54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble254States state;
} Ensemble254;

// ensemble2_54 Initialisation function
void Ensemble254Init(Ensemble254* me);

// ensemble2_54 Execution function
void Ensemble254Run(Ensemble254* me);

#endif // ENSEMBLE2_54_H_