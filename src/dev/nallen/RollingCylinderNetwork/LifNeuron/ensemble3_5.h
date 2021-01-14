#ifndef ENSEMBLE3_5_H_
#define ENSEMBLE3_5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_5 States
enum Ensemble35States {
    ENSEMBLE3_5_INTEGRATE,
    ENSEMBLE3_5_LIMIT,
    ENSEMBLE3_5_SPIKE,
    ENSEMBLE3_5_REFRACTORY,
};

// ensemble3_5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble35States state;
} Ensemble35;

// ensemble3_5 Initialisation function
void Ensemble35Init(Ensemble35* me);

// ensemble3_5 Execution function
void Ensemble35Run(Ensemble35* me);

#endif // ENSEMBLE3_5_H_