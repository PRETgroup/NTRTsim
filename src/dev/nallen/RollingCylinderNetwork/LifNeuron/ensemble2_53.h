#ifndef ENSEMBLE2_53_H_
#define ENSEMBLE2_53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_53 States
enum Ensemble253States {
    ENSEMBLE2_53_INTEGRATE,
    ENSEMBLE2_53_LIMIT,
    ENSEMBLE2_53_SPIKE,
    ENSEMBLE2_53_REFRACTORY,
};

// ensemble2_53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble253States state;
} Ensemble253;

// ensemble2_53 Initialisation function
void Ensemble253Init(Ensemble253* me);

// ensemble2_53 Execution function
void Ensemble253Run(Ensemble253* me);

#endif // ENSEMBLE2_53_H_