#ifndef ENSEMBLE3_59_H_
#define ENSEMBLE3_59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_59 States
enum Ensemble359States {
    ENSEMBLE3_59_INTEGRATE,
    ENSEMBLE3_59_LIMIT,
    ENSEMBLE3_59_SPIKE,
    ENSEMBLE3_59_REFRACTORY,
};

// ensemble3_59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble359States state;
} Ensemble359;

// ensemble3_59 Initialisation function
void Ensemble359Init(Ensemble359* me);

// ensemble3_59 Execution function
void Ensemble359Run(Ensemble359* me);

#endif // ENSEMBLE3_59_H_