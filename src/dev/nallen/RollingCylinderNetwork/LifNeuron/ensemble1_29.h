#ifndef ENSEMBLE1_29_H_
#define ENSEMBLE1_29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_29 States
enum Ensemble129States {
    ENSEMBLE1_29_INTEGRATE,
    ENSEMBLE1_29_LIMIT,
    ENSEMBLE1_29_SPIKE,
    ENSEMBLE1_29_REFRACTORY,
};

// ensemble1_29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble129States state;
} Ensemble129;

// ensemble1_29 Initialisation function
void Ensemble129Init(Ensemble129* me);

// ensemble1_29 Execution function
void Ensemble129Run(Ensemble129* me);

#endif // ENSEMBLE1_29_H_