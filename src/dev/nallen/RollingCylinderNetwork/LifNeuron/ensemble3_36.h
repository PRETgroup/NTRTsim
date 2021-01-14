#ifndef ENSEMBLE3_36_H_
#define ENSEMBLE3_36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_36 States
enum Ensemble336States {
    ENSEMBLE3_36_INTEGRATE,
    ENSEMBLE3_36_LIMIT,
    ENSEMBLE3_36_SPIKE,
    ENSEMBLE3_36_REFRACTORY,
};

// ensemble3_36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble336States state;
} Ensemble336;

// ensemble3_36 Initialisation function
void Ensemble336Init(Ensemble336* me);

// ensemble3_36 Execution function
void Ensemble336Run(Ensemble336* me);

#endif // ENSEMBLE3_36_H_