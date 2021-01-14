#ifndef ENSEMBLE3_91_H_
#define ENSEMBLE3_91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_91 States
enum Ensemble391States {
    ENSEMBLE3_91_INTEGRATE,
    ENSEMBLE3_91_LIMIT,
    ENSEMBLE3_91_SPIKE,
    ENSEMBLE3_91_REFRACTORY,
};

// ensemble3_91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble391States state;
} Ensemble391;

// ensemble3_91 Initialisation function
void Ensemble391Init(Ensemble391* me);

// ensemble3_91 Execution function
void Ensemble391Run(Ensemble391* me);

#endif // ENSEMBLE3_91_H_