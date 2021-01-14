#ifndef ENSEMBLE2_9_H_
#define ENSEMBLE2_9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_9 States
enum Ensemble29States {
    ENSEMBLE2_9_INTEGRATE,
    ENSEMBLE2_9_LIMIT,
    ENSEMBLE2_9_SPIKE,
    ENSEMBLE2_9_REFRACTORY,
};

// ensemble2_9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble29States state;
} Ensemble29;

// ensemble2_9 Initialisation function
void Ensemble29Init(Ensemble29* me);

// ensemble2_9 Execution function
void Ensemble29Run(Ensemble29* me);

#endif // ENSEMBLE2_9_H_