#ifndef ENSEMBLE1_71_H_
#define ENSEMBLE1_71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_71 States
enum Ensemble171States {
    ENSEMBLE1_71_INTEGRATE,
    ENSEMBLE1_71_LIMIT,
    ENSEMBLE1_71_SPIKE,
    ENSEMBLE1_71_REFRACTORY,
};

// ensemble1_71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble171States state;
} Ensemble171;

// ensemble1_71 Initialisation function
void Ensemble171Init(Ensemble171* me);

// ensemble1_71 Execution function
void Ensemble171Run(Ensemble171* me);

#endif // ENSEMBLE1_71_H_