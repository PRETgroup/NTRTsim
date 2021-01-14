#ifndef ENSEMBLE3_64_H_
#define ENSEMBLE3_64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_64 States
enum Ensemble364States {
    ENSEMBLE3_64_INTEGRATE,
    ENSEMBLE3_64_LIMIT,
    ENSEMBLE3_64_SPIKE,
    ENSEMBLE3_64_REFRACTORY,
};

// ensemble3_64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble364States state;
} Ensemble364;

// ensemble3_64 Initialisation function
void Ensemble364Init(Ensemble364* me);

// ensemble3_64 Execution function
void Ensemble364Run(Ensemble364* me);

#endif // ENSEMBLE3_64_H_