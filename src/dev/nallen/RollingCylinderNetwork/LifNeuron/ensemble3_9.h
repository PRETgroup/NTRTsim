#ifndef ENSEMBLE3_9_H_
#define ENSEMBLE3_9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_9 States
enum Ensemble39States {
    ENSEMBLE3_9_INTEGRATE,
    ENSEMBLE3_9_LIMIT,
    ENSEMBLE3_9_SPIKE,
    ENSEMBLE3_9_REFRACTORY,
};

// ensemble3_9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble39States state;
} Ensemble39;

// ensemble3_9 Initialisation function
void Ensemble39Init(Ensemble39* me);

// ensemble3_9 Execution function
void Ensemble39Run(Ensemble39* me);

#endif // ENSEMBLE3_9_H_