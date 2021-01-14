#ifndef ENSEMBLE3_26_H_
#define ENSEMBLE3_26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_26 States
enum Ensemble326States {
    ENSEMBLE3_26_INTEGRATE,
    ENSEMBLE3_26_LIMIT,
    ENSEMBLE3_26_SPIKE,
    ENSEMBLE3_26_REFRACTORY,
};

// ensemble3_26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble326States state;
} Ensemble326;

// ensemble3_26 Initialisation function
void Ensemble326Init(Ensemble326* me);

// ensemble3_26 Execution function
void Ensemble326Run(Ensemble326* me);

#endif // ENSEMBLE3_26_H_