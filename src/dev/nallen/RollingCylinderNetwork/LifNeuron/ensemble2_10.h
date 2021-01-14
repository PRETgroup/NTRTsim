#ifndef ENSEMBLE2_10_H_
#define ENSEMBLE2_10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_10 States
enum Ensemble210States {
    ENSEMBLE2_10_INTEGRATE,
    ENSEMBLE2_10_LIMIT,
    ENSEMBLE2_10_SPIKE,
    ENSEMBLE2_10_REFRACTORY,
};

// ensemble2_10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble210States state;
} Ensemble210;

// ensemble2_10 Initialisation function
void Ensemble210Init(Ensemble210* me);

// ensemble2_10 Execution function
void Ensemble210Run(Ensemble210* me);

#endif // ENSEMBLE2_10_H_