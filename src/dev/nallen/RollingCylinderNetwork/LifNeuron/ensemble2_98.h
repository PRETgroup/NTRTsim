#ifndef ENSEMBLE2_98_H_
#define ENSEMBLE2_98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_98 States
enum Ensemble298States {
    ENSEMBLE2_98_INTEGRATE,
    ENSEMBLE2_98_LIMIT,
    ENSEMBLE2_98_SPIKE,
    ENSEMBLE2_98_REFRACTORY,
};

// ensemble2_98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble298States state;
} Ensemble298;

// ensemble2_98 Initialisation function
void Ensemble298Init(Ensemble298* me);

// ensemble2_98 Execution function
void Ensemble298Run(Ensemble298* me);

#endif // ENSEMBLE2_98_H_