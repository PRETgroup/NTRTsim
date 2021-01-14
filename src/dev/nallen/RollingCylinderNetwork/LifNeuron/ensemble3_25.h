#ifndef ENSEMBLE3_25_H_
#define ENSEMBLE3_25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_25 States
enum Ensemble325States {
    ENSEMBLE3_25_INTEGRATE,
    ENSEMBLE3_25_LIMIT,
    ENSEMBLE3_25_SPIKE,
    ENSEMBLE3_25_REFRACTORY,
};

// ensemble3_25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble325States state;
} Ensemble325;

// ensemble3_25 Initialisation function
void Ensemble325Init(Ensemble325* me);

// ensemble3_25 Execution function
void Ensemble325Run(Ensemble325* me);

#endif // ENSEMBLE3_25_H_