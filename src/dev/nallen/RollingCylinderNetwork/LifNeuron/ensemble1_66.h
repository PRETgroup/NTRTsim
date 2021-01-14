#ifndef ENSEMBLE1_66_H_
#define ENSEMBLE1_66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_66 States
enum Ensemble166States {
    ENSEMBLE1_66_INTEGRATE,
    ENSEMBLE1_66_LIMIT,
    ENSEMBLE1_66_SPIKE,
    ENSEMBLE1_66_REFRACTORY,
};

// ensemble1_66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble166States state;
} Ensemble166;

// ensemble1_66 Initialisation function
void Ensemble166Init(Ensemble166* me);

// ensemble1_66 Execution function
void Ensemble166Run(Ensemble166* me);

#endif // ENSEMBLE1_66_H_