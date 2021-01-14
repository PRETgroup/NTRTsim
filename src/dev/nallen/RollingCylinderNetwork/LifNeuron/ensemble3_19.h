#ifndef ENSEMBLE3_19_H_
#define ENSEMBLE3_19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_19 States
enum Ensemble319States {
    ENSEMBLE3_19_INTEGRATE,
    ENSEMBLE3_19_LIMIT,
    ENSEMBLE3_19_SPIKE,
    ENSEMBLE3_19_REFRACTORY,
};

// ensemble3_19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble319States state;
} Ensemble319;

// ensemble3_19 Initialisation function
void Ensemble319Init(Ensemble319* me);

// ensemble3_19 Execution function
void Ensemble319Run(Ensemble319* me);

#endif // ENSEMBLE3_19_H_