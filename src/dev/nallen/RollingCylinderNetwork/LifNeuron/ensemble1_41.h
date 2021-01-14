#ifndef ENSEMBLE1_41_H_
#define ENSEMBLE1_41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_41 States
enum Ensemble141States {
    ENSEMBLE1_41_INTEGRATE,
    ENSEMBLE1_41_LIMIT,
    ENSEMBLE1_41_SPIKE,
    ENSEMBLE1_41_REFRACTORY,
};

// ensemble1_41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble141States state;
} Ensemble141;

// ensemble1_41 Initialisation function
void Ensemble141Init(Ensemble141* me);

// ensemble1_41 Execution function
void Ensemble141Run(Ensemble141* me);

#endif // ENSEMBLE1_41_H_