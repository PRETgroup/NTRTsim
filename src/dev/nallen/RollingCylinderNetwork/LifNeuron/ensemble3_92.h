#ifndef ENSEMBLE3_92_H_
#define ENSEMBLE3_92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_92 States
enum Ensemble392States {
    ENSEMBLE3_92_INTEGRATE,
    ENSEMBLE3_92_LIMIT,
    ENSEMBLE3_92_SPIKE,
    ENSEMBLE3_92_REFRACTORY,
};

// ensemble3_92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble392States state;
} Ensemble392;

// ensemble3_92 Initialisation function
void Ensemble392Init(Ensemble392* me);

// ensemble3_92 Execution function
void Ensemble392Run(Ensemble392* me);

#endif // ENSEMBLE3_92_H_