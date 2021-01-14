#ifndef ENSEMBLE3_20_H_
#define ENSEMBLE3_20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_20 States
enum Ensemble320States {
    ENSEMBLE3_20_INTEGRATE,
    ENSEMBLE3_20_LIMIT,
    ENSEMBLE3_20_SPIKE,
    ENSEMBLE3_20_REFRACTORY,
};

// ensemble3_20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble320States state;
} Ensemble320;

// ensemble3_20 Initialisation function
void Ensemble320Init(Ensemble320* me);

// ensemble3_20 Execution function
void Ensemble320Run(Ensemble320* me);

#endif // ENSEMBLE3_20_H_