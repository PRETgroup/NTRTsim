#ifndef ENSEMBLE3_49_H_
#define ENSEMBLE3_49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_49 States
enum Ensemble349States {
    ENSEMBLE3_49_INTEGRATE,
    ENSEMBLE3_49_LIMIT,
    ENSEMBLE3_49_SPIKE,
    ENSEMBLE3_49_REFRACTORY,
};

// ensemble3_49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble349States state;
} Ensemble349;

// ensemble3_49 Initialisation function
void Ensemble349Init(Ensemble349* me);

// ensemble3_49 Execution function
void Ensemble349Run(Ensemble349* me);

#endif // ENSEMBLE3_49_H_