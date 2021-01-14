#ifndef ENSEMBLE3_90_H_
#define ENSEMBLE3_90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_90 States
enum Ensemble390States {
    ENSEMBLE3_90_INTEGRATE,
    ENSEMBLE3_90_LIMIT,
    ENSEMBLE3_90_SPIKE,
    ENSEMBLE3_90_REFRACTORY,
};

// ensemble3_90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble390States state;
} Ensemble390;

// ensemble3_90 Initialisation function
void Ensemble390Init(Ensemble390* me);

// ensemble3_90 Execution function
void Ensemble390Run(Ensemble390* me);

#endif // ENSEMBLE3_90_H_