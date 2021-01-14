#ifndef ENSEMBLE2_30_H_
#define ENSEMBLE2_30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_30 States
enum Ensemble230States {
    ENSEMBLE2_30_INTEGRATE,
    ENSEMBLE2_30_LIMIT,
    ENSEMBLE2_30_SPIKE,
    ENSEMBLE2_30_REFRACTORY,
};

// ensemble2_30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble230States state;
} Ensemble230;

// ensemble2_30 Initialisation function
void Ensemble230Init(Ensemble230* me);

// ensemble2_30 Execution function
void Ensemble230Run(Ensemble230* me);

#endif // ENSEMBLE2_30_H_