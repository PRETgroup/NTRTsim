#ifndef ENSEMBLE3_82_H_
#define ENSEMBLE3_82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_82 States
enum Ensemble382States {
    ENSEMBLE3_82_INTEGRATE,
    ENSEMBLE3_82_LIMIT,
    ENSEMBLE3_82_SPIKE,
    ENSEMBLE3_82_REFRACTORY,
};

// ensemble3_82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble382States state;
} Ensemble382;

// ensemble3_82 Initialisation function
void Ensemble382Init(Ensemble382* me);

// ensemble3_82 Execution function
void Ensemble382Run(Ensemble382* me);

#endif // ENSEMBLE3_82_H_