#ifndef ENSEMBLE1_0_H_
#define ENSEMBLE1_0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_0 States
enum Ensemble10States {
    ENSEMBLE1_0_INTEGRATE,
    ENSEMBLE1_0_LIMIT,
    ENSEMBLE1_0_SPIKE,
    ENSEMBLE1_0_REFRACTORY,
};

// ensemble1_0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble10States state;
} Ensemble10;

// ensemble1_0 Initialisation function
void Ensemble10Init(Ensemble10* me);

// ensemble1_0 Execution function
void Ensemble10Run(Ensemble10* me);

#endif // ENSEMBLE1_0_H_