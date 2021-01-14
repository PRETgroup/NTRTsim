#ifndef ENSEMBLE0_86_H_
#define ENSEMBLE0_86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_86 States
enum Ensemble086States {
    ENSEMBLE0_86_INTEGRATE,
    ENSEMBLE0_86_LIMIT,
    ENSEMBLE0_86_SPIKE,
    ENSEMBLE0_86_REFRACTORY,
};

// ensemble0_86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble086States state;
} Ensemble086;

// ensemble0_86 Initialisation function
void Ensemble086Init(Ensemble086* me);

// ensemble0_86 Execution function
void Ensemble086Run(Ensemble086* me);

#endif // ENSEMBLE0_86_H_