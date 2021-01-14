#ifndef ENSEMBLE1_40_H_
#define ENSEMBLE1_40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_40 States
enum Ensemble140States {
    ENSEMBLE1_40_INTEGRATE,
    ENSEMBLE1_40_LIMIT,
    ENSEMBLE1_40_SPIKE,
    ENSEMBLE1_40_REFRACTORY,
};

// ensemble1_40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble140States state;
} Ensemble140;

// ensemble1_40 Initialisation function
void Ensemble140Init(Ensemble140* me);

// ensemble1_40 Execution function
void Ensemble140Run(Ensemble140* me);

#endif // ENSEMBLE1_40_H_