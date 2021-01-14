#ifndef ENSEMBLE3_10_H_
#define ENSEMBLE3_10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_10 States
enum Ensemble310States {
    ENSEMBLE3_10_INTEGRATE,
    ENSEMBLE3_10_LIMIT,
    ENSEMBLE3_10_SPIKE,
    ENSEMBLE3_10_REFRACTORY,
};

// ensemble3_10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble310States state;
} Ensemble310;

// ensemble3_10 Initialisation function
void Ensemble310Init(Ensemble310* me);

// ensemble3_10 Execution function
void Ensemble310Run(Ensemble310* me);

#endif // ENSEMBLE3_10_H_